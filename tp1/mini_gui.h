/*
 * mini_gui.h
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
#ifndef MINI_H
#define MINI_H

#include <QWidget>
#include <QMap>
#include <QPixmap>

class QLabel;
class IMDb;

class MiniGUI : public QWidget {
Q_OBJECT
    public:
        MiniGUI();
        void run();

    public slots:
        void afficheFilm(const QMap<QString,QStringList> &film, const QPixmap &image);

    private:
        QLabel *titre_lb;
        QLabel *affiche_lb;
        IMDb *imdb;
};
#endif
