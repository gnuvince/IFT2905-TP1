#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "imdb.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();    
    void save_film(const QMap<QString, QStringList> &film);


public slots:
    void field_dispatcher(const QMap<QString,QStringList> &film, const QPixmap &image);
    void search_movie();
    void set_film_actors_slot(const QStringList &actors);

signals:
    void changeFilmInternet(const QString &film);
    void set_film_title(const QString &title);
    void set_film_rating(const QString &rating);
    void set_film_rank(const QString &rank);
    void set_film_country(const QString &country);
    void set_film_year(const QString &year);
    void set_film_runtime(const QString &runtime);
    void set_film_director(const QString &director);
    void set_film_plot(const QString &plot);
    void set_film_genres(const QString &genres);
    void set_film_actors(const QStringList &actors);
    void set_film_cover(const QPixmap &pixmap);

private:
    Ui::MainWindow *ui;
    IMDb *imdb;

};

#endif // MAINWINDOW_H
