#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include "QFile"
#include "QMessageBox"
#include <cmath>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    imdb = new IMDb(this);
    files = new QStringList;

    connect(ui->search_button, SIGNAL(clicked()),
            this, SLOT(search_movie()));

    connect(imdb, SIGNAL(filmDispo(const QMap<QString,QStringList>&, const QPixmap&)),
            this, SLOT(field_dispatcher(const QMap<QString,QStringList>&, const QPixmap&)));

    connect(this, SIGNAL(changeFilmInternet(const QString&)),
            imdb, SLOT(changeFilmInternet(const QString&)));


    connect(this, SIGNAL(set_film_title(const QString&)), ui->film_title, SLOT(setText(QString)));
    connect(this, SIGNAL(set_film_cover(const QPixmap&)), ui->film_cover, SLOT(setPixmap(QPixmap)));
    connect(this, SIGNAL(set_film_country(const QString&)), ui->film_country, SLOT(setText(QString)));
    connect(this, SIGNAL(set_film_year(const QString&)), ui->film_year, SLOT(setText(QString)));
    connect(this, SIGNAL(set_film_rating(const QString&)), ui->film_rating, SLOT(setText(QString)));
    connect(this, SIGNAL(set_film_rank(const QString&)), ui->film_rank, SLOT(setText(QString)));
    connect(this, SIGNAL(set_film_runtime(const QString&)), ui->film_runtime, SLOT(setText(QString)));
    connect(this, SIGNAL(set_film_director(const QString&)), ui->film_director, SLOT(setText(QString)));
    connect(this, SIGNAL(set_film_plot(const QString&)), ui->film_plot, SLOT(setPlainText(QString)));
    connect(this, SIGNAL(set_film_genres(const QString&)), ui->film_genres, SLOT(setText(QString)));
    connect(this, SIGNAL(set_film_actors(const QStringList&)), this, SLOT(set_film_actors_slot(const QStringList&)));
    connect(ui->search_field, SIGNAL(returnPressed()), ui->search_button, SIGNAL(clicked()));
    connect(ui->history, SIGNAL(itemDoubleClicked(QListWidgetItem*)), this, SLOT(load_existing_movie(QListWidgetItem*)));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete imdb;
}

QString get_field(const char* name, const QMap<QString, QStringList> &map) {
    return map.value(QString(name), QStringList() << QString(""))[0];
}

QString star_rating(const QString& rating) {
    bool ok;
    int int_rating = int(round(rating.toDouble(&ok)));
    if (!ok) return QString("");

    QString ret = QString(10, QChar(L'\u2606'));
    for (int i = 0; i < int_rating; ++i) {
        ret[i] = QChar(L'\u2605');
    }
    return ret;
}

QString display_rank(const QString& rank) {
    QString empty = QString();
    if (rank == empty)
        return empty;
    else
        return (QString("Rang IMDb: ") + rank + QString(" / 250"));
}

void MainWindow::field_dispatcher(const QMap<QString, QStringList> &film, const QPixmap &image) {
    emit set_film_title(get_field("title", film));
    emit set_film_cover(image);
    emit set_film_rating(star_rating(get_field("rating", film)));
    emit set_film_rank(display_rank(get_field("top 250 rank", film)));
    emit set_film_country(get_field("countries", film));
    emit set_film_year(get_field("year", film));
    emit set_film_runtime(get_field("runtimes", film) + trUtf8(" minutes"));
    emit set_film_plot(get_field("plot outline", film));
    emit set_film_director(get_field("director", film));
    emit set_film_genres(film.value("genres", QStringList()).join(QString(", ")));
    emit set_film_actors(film.value("cast", QStringList()));

    if (film.size() <= 2) {
        QMessageBox msgbox;
        msgbox.setText(tr("Film introuvable."));
        msgbox.setIcon(QMessageBox::Information);
        msgbox.exec();
    }
    else {
        QString filename = save_film(film);
        if (!files->contains(filename)) {
            files->append(filename);
            ui->history->addItem(filename);
        }
    }
}

void MainWindow::set_film_actors_slot(const QStringList &actors) {
    ui->film_actors->clear();
    ui->film_actors->addItems(actors);
}


void MainWindow::search_movie() {
    QString title = ui->search_field->text();
    emit changeFilmInternet(title);
}

QString MainWindow::save_film(const QMap<QString, QStringList> &film) {
    QString filename = get_field("title", film);
    QFile out(QString("/tmp/") + filename);
    if (out.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream stream(&out);
        foreach (QString field, film.keys()) {
            stream << field << " :\n";
            foreach (QString info, film.value(field, QStringList())) {
                stream << '\t' << info << "\n";
            }
        }
    }
    return filename;
}

void MainWindow::load_existing_movie(QListWidgetItem *item) {
    QString filename = QString("/tmp/") + item->text();
    imdb->changeFilmLocal(filename);
}
