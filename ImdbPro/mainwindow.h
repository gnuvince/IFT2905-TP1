#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
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
    QString save_film(const QMap<QString, QStringList> &film);

public slots:
    void dispatch(const QMap<QString, QStringList> &film, const QPixmap &image);
    void search_film();
    void display_film_certificates(const QStringList &list);
    void display_film_cast(const QStringList &list);
    void display_film_stunt_performers(const QStringList &list);
    void display_film_full_sized_cover(const QString &string);
    void display_film_akas(const QStringList &list);
    void display_film_transportation(const QStringList &list);
    void display_film_misc_crew(const QStringList &list);
    void display_film_misc_companies(const QStringList &list);
    void display_film_producer(const QStringList &list);
    void display_film_production_companies(const QStringList &list);
    void display_film_distributors(const QStringList &list);
    void display_film_art_director(const QStringList &list);
    void display_film_makeup(const QStringList &list);
    void display_film_music_department(const QStringList &list);
    void display_film_sound_crew(const QStringList &list);
    void display_film_set_decoration(const QStringList &list);
    void display_film_art_department(const QStringList &list);
    void display_film_camera_and_electrical_department(const QStringList &list);
    void display_film_costume_department(const QStringList &list);
    void display_film_sfx_department(const QStringList &list);
    void display_film_sfx_companies(const QStringList &list);
    void display_film_visual_effects(const QStringList &list);
    void display_film_animation_department(const QStringList &list);
    void display_window_title(const QString &string);
    void load_existing_movie(QListWidgetItem *item);



signals:
    void film_set_cover(const QPixmap &image);
    void film_set_title(const QString &string);
    void film_set_year(const QString &string);
    void film_set_rating(const QString &string);
    void film_set_rank(const QString &string);
    void film_set_votes(const QString &string);
    void film_set_country(const QString &string);
    void film_set_director(const QString &string);
    void film_set_author(const QString &string);
    void film_set_original_music(const QString &string);
    void film_set_languages(const QString &string);
    void film_set_genres(const QString &string);
    void film_set_aspect_ratio(const QString &string);
    void film_set_runtime(const QString &string);
    void film_set_mpaa_rating(const QString &string);
    void film_set_certificates(const QStringList &list);
    void film_set_plot(const QString &string);
    void film_set_cast(const QStringList &list);
    void film_set_stunt_performers(const QStringList &list);
    void film_set_casting_director(const QString& string);
    void film_set_producer(const QStringList &list);
    void film_set_cinematographer(const QString &list);
    void film_set_production_companies(const QStringList &list);
    void film_set_editor(const QString &list);
    void film_set_distributors(const QStringList &list);
    void film_set_art_director(const QStringList &list);
    void film_set_makeup(const QStringList &list);
    void film_set_akas(const QStringList &list);
    void film_set_transportation(const QStringList &list);
    void film_set_misc_crew(const QStringList &list);
    void film_set_misc_companies(const QStringList &list);
    void film_set_full_sized_cover(const QString& string);
    void film_set_music_department(const QStringList &list);
    void film_set_sound_crew(const QStringList &list);
    void film_set_set_decoration(const QStringList &list);
    void film_set_art_department(const QStringList &list);
    void film_set_camera_and_electrical_department(const QStringList &list);
    void film_set_costume_department(const QStringList &list);
    void film_set_sfx_department(const QStringList &list);
    void film_set_sfx_companies(const QStringList &list);
    void film_set_visual_effects(const QStringList &list);
    void film_set_animation_department(const QStringList &list);



private:
    Ui::MainWindow *ui;
    IMDb *imdb;
    QStringList *files;
};

#endif // MAINWINDOW_H
