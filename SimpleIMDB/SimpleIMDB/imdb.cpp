/*
 * imdb.cpp
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
#include "imdb.h"
#include <QtCore>
#include <QtNetwork>

IMDb::IMDb(QObject *parent) : QObject(parent) {
}

void IMDb::changeFilmLocal(const QString &fichier) {
    QFile f(fichier);
    if (!f.open(QIODevice::ReadOnly)) {
        throw ExceptionDonnees(trUtf8("Le fichier <%1> n'a pu être lu").arg(fichier));
    }
    donnees = QString::fromUtf8(f.readAll().data());

    extrait();
}

void IMDb::changeFilmInternet(const QString &film) {
    QProcess proc;
    proc.start("./imdbScript.py", QStringList() << film);
    if (!proc.waitForFinished()) {
        throw ExceptionDonnees(trUtf8("N'a pas pu trouvé de réponses à la requête pour le film <%1>").arg(film));
    }
    donnees = QString::fromUtf8(proc.readAllStandardOutput().data());

    extrait();
}

int telechargeImage(const QString &adresse, QPixmap &image) {
    if (adresse == "") return 1;
    QNetworkAccessManager manager;
    QNetworkReply *reply = manager.get(QNetworkRequest(QUrl(adresse)));
    QEventLoop loop;
    QObject::connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
    loop.exec();

    if (reply->error() != QNetworkReply::NoError) {
        manager.setProxy(QNetworkProxy());
        reply = manager.get(QNetworkRequest(QUrl(adresse)));
        QObject::connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
        loop.exec();
    }

    image.loadFromData(reply->readAll());

    delete reply;
    return 0;
}

void IMDb::extrait() {
    QMap<QString,QStringList> entries;
    QStringList list = donnees.split("\n");
    QString cur_entry;
    foreach(QString entry, list)
    {
        if (!entry.startsWith('\t')) {
            cur_entry = entry.remove(QChar(':')).trimmed();
            entries[cur_entry] = QStringList();
        } else {
            entries[cur_entry] += entry.trimmed();
        }
    }

    QPixmap image;
    if (telechargeImage(entries.value("cover url",QStringList()<<"")[0], image) ) {
    } else {
        if (image.height()>96)
            image = image.scaledToHeight(96);
    }

    emit filmDispo(entries, image);
}
