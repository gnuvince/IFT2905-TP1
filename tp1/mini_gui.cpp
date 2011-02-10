/*
 * mini_gui.cpp
 * Copyright (C) 2011 Nicolas Martin, Université de Montréal
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
*/
#include <QtGui>
#include "imdb.h"
#include "mini_gui.h"

MiniGUI::MiniGUI() {
    setWindowTitle(trUtf8("Mini GUI"));

    QFormLayout *lay = new QFormLayout(this);
    titre_lb = new QLabel;
    lay->addRow(trUtf8("titre"), titre_lb);
    affiche_lb = new QLabel;
    lay->addRow(trUtf8("affiche"), affiche_lb);


    imdb = new IMDb(this);
    connect(imdb, SIGNAL(filmDispo(const QMap<QString,QStringList>&, const QPixmap&)), this, SLOT(afficheFilm(const QMap<QString,QStringList>&, const QPixmap&)) );
}

void MiniGUI::run() {
    try {
        imdb->changeFilmInternet("lord of the ring");
    } catch (ExceptionDonnees e) {
        qDebug() << e.str;
        exit(1);
    }
}


void MiniGUI::afficheFilm(const QMap<QString,QStringList> &film, const QPixmap &image) {
    titre_lb->setText(film.value("title",QStringList() << "")[0]);
    affiche_lb->setPixmap(image);
}
