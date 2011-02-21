/*
 * imdb.h
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
#ifndef IMDB_H
#define IMDB_H

#include <QObject>
#include <QMap>
#include <QPixmap>


int telechargeImage(const QString &adresse, QPixmap &image);

class IMDb : public QObject {
        Q_OBJECT
        public:
        IMDb(QObject* =0);

    public slots:
        void changeFilmLocal(const QString &fichier);
        void changeFilmInternet(const QString &film);

    signals:
        void filmDispo(const QMap<QString,QStringList> &film, const QPixmap &image);

    private:
        void extrait();

    private:
        QString donnees;
};

struct ExceptionDonnees {
        ExceptionDonnees(QString str) : str(str) {}
        QString str;
};

#endif
