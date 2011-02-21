#include <cmath>

#include "QDebug"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "imdb.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    imdb = new IMDb(this);

    connect(imdb, SIGNAL(filmDispo(const QMap<QString,QStringList> &, const QPixmap &)),
            this, SLOT(dispatch(const QMap<QString,QStringList> &, const QPixmap &)));
    connect(ui->search_button, SIGNAL(clicked()), this, SLOT(search_film()));
    connect(ui->search_field, SIGNAL(returnPressed()), ui->search_button, SIGNAL(clicked()));

    connect(this, SIGNAL(film_set_cover(const QPixmap &)), ui->film_cover, SLOT(setPixmap(QPixmap)));
    connect(this, SIGNAL(film_set_title(const QString &)), ui->film_title, SLOT(setText(QString)));
    connect(this, SIGNAL(film_set_year(const QString &)), ui->film_year, SLOT(setText(QString)));
    connect(this, SIGNAL(film_set_rating(const QString &)), ui->film_rating, SLOT(setText(QString)));
    connect(this, SIGNAL(film_set_rank(const QString &)), ui->film_rank, SLOT(setText(QString)));
    connect(this, SIGNAL(film_set_votes(const QString &)), ui->film_votes, SLOT(setText(QString)));
    connect(this, SIGNAL(film_set_country(const QString &)), ui->film_country_general, SLOT(setText(QString)));
    connect(this, SIGNAL(film_set_director(const QString &)), ui->film_director, SLOT(setText(QString)));
    connect(this, SIGNAL(film_set_author(const QString &)), ui->film_writer, SLOT(setText(QString)));
    connect(this, SIGNAL(film_set_original_music(const QString &)), ui->film_original_music, SLOT(setText(QString)));
    connect(this, SIGNAL(film_set_languages(const QString &)), ui->film_languages, SLOT(setText(QString)));
    connect(this, SIGNAL(film_set_genres(const QString &)), ui->film_genres, SLOT(setText(QString)));
    connect(this, SIGNAL(film_set_runtime(const QString &)), ui->film_runtime, SLOT(setText(QString)));
    connect(this, SIGNAL(film_set_aspect_ratio(const QString &)), ui->film_aspect_ratio, SLOT(setText(QString)));
    connect(this, SIGNAL(film_set_mpaa_rating(const QString &)), ui->film_mpaa_rating, SLOT(setText(QString)));
    connect(this, SIGNAL(film_set_plot(const QString &)), ui->film_plot, SLOT(setPlainText(QString)));
    connect(this, SIGNAL(film_set_certificates(const QStringList&)), this, SLOT(display_film_certificates(QStringList)));

    connect(this, SIGNAL(film_set_cast(const QStringList &)), this, SLOT(display_film_cast(const QStringList &)));
    connect(this, SIGNAL(film_set_stunt_performers(const QStringList &)), this, SLOT(display_film_stunt_performers(const QStringList &)));
    connect(this, SIGNAL(film_set_casting_director(const QString &)), ui->film_casting_director, SLOT(setText(QString)));

    connect(this, SIGNAL(film_set_akas(const QStringList &)), this, SLOT(display_film_akas(const QStringList &)));
    connect(this, SIGNAL(film_set_transportation(const QStringList &)), this, SLOT(display_film_transportation(const QStringList &)));
    connect(this, SIGNAL(film_set_misc_crew(const QStringList &)), this, SLOT(display_film_misc_crew(const QStringList &)));
    connect(this, SIGNAL(film_set_misc_companies(const QStringList &)), this, SLOT(display_film_misc_companies(const QStringList &)));

    connect(this, SIGNAL(film_set_producers(const QStringList &)), this, SLOT(display_film_producers(const QStringList &)));

    connect(this, SIGNAL(film_set_full_sized_cover(const QString&)), this, SLOT(display_film_full_sized_cover(const QString &)));
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
        return QString("(Rang IMDb: %1 / 250)").arg(rank);
}


void MainWindow::dispatch(const QMap<QString, QStringList> &film, const QPixmap &image) {
    // General
    emit film_set_cover(image);
    emit film_set_title(get_field("title", film));
    emit film_set_year(get_field("year", film));
    emit film_set_rating(star_rating(get_field("rating", film)));
    emit film_set_rank(display_rank(get_field("top 250 rank", film)));
    emit film_set_votes(QString("%1 votes").arg(get_field("votes", film)));
    emit film_set_country(get_field("countries", film));
    emit film_set_director(get_field("director", film));
    emit film_set_author(get_field("writer", film));
    emit film_set_original_music(get_field("original music", film));
    emit film_set_languages(get_field("languages", film));
    emit film_set_genres(get_field("genres", film));
    emit film_set_aspect_ratio(get_field("aspect ratio", film));
    emit film_set_runtime(QString("%1 minutes").arg(get_field("runtimes", film)))   ;
    emit film_set_mpaa_rating(get_field("mpaa", film));
    emit film_set_certificates(film.value("certificates", QStringList()));
    emit film_set_plot(get_field("plot outline", film));

    // Distribution
    emit film_set_cast(film.value("cast", QStringList()));
    emit film_set_stunt_performers(film.value("stunt performer", QStringList()));
    emit film_set_casting_director(get_field("casting director", film));

    // Production
    emit film_set_producers(film.value("producers", QStringList()));
    emit film_set_production_companies(film.value("production companies", QStringList()));

    // Misc
    emit film_set_akas(film.value("akas", QStringList()));
    emit film_set_transportation(film.value("transportation department", QStringList()));
    emit film_set_misc_crew(film.value("miscellaneous crew", QStringList()));
    emit film_set_misc_companies(film.value("miscellaneous companies", QStringList()));

    // Full sized cover
    emit film_set_full_sized_cover(get_field("full-size cover url", film));
}

void MainWindow::search_film() {
    imdb->changeFilmInternet(ui->search_field->text());
}

void setItems(const QListWidget &widget, const QStringList &list) {
    widget->clear();
    widget.addItems(list);
}


void MainWindow::display_film_certificates(const QStringList &list) {
    setItems(ui->film_certificates, list);
}


void MainWindow::display_film_cast(const QStringList &list) {
    setItems(ui->film_cast, list);
}

void MainWindow::display_film_stunt_performers(const QStringList &list) {
    setItems(ui->film_stunt_performers, list);
}

void MainWindow::display_film_akas(const QStringList &list) {
    setItems(ui->film_akas, list);
}

void MainWindow::display_film_transportation(const QStringList &list) {
    setItems(ui->film_transportation, list);
}

void MainWindow::display_film_misc_crew(const QStringList &list) {
    setItems(ui->film_misc_crew, list);
}

void MainWindow::display_film_misc_companies(const QStringList &list) {
    setItems(ui->film_misc_companies, list);
}

void MainWindow::display_film_producers(const QStringList &list) {
    setItems(ui->film_producer, list);
}

void MainWindow::display_film_production_companies(const QStringList &list) {
    setItems(ui->film_production_companies, list);
}

void MainWindow::display_film_art_direction(const QStringList &list) {
    setItems(ui->film_art_director, list);
}

void MainWindow::display_film_makeup(const QStringList &list) {
    setItems(ui->film_makeup, list);
}

void MainWindow::display_film_distributors(const QStringList &list) {
    setItems(ui->film_distributors, list);
}


void MainWindow::display_film_full_sized_cover(const QString &string) {
    QPixmap image;
    telechargeImage(string, image);
    ui->film_fullsize_cover->setPixmap(image);
}

