/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed Feb 9 19:58:19 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSplitter>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *film_cover;
    QLabel *film_title;
    QLabel *film_rating;
    QLabel *film_rank;
    QLabel *film_country;
    QLabel *film_runtime;
    QLabel *film_director;
    QPlainTextEdit *film_plot;
    QFrame *line;
    QPushButton *details_button;
    QPushButton *search_history;
    QListWidget *film_actors;
    QSplitter *splitter;
    QLabel *label;
    QLineEdit *search_field;
    QPushButton *search_button;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(702, 461);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        film_cover = new QLabel(centralWidget);
        film_cover->setObjectName(QString::fromUtf8("film_cover"));
        film_cover->setGeometry(QRect(20, 60, 96, 96));
        film_title = new QLabel(centralWidget);
        film_title->setObjectName(QString::fromUtf8("film_title"));
        film_title->setGeometry(QRect(150, 60, 301, 21));
        QFont font;
        font.setPointSize(20);
        film_title->setFont(font);
        film_rating = new QLabel(centralWidget);
        film_rating->setObjectName(QString::fromUtf8("film_rating"));
        film_rating->setGeometry(QRect(150, 100, 59, 15));
        film_rank = new QLabel(centralWidget);
        film_rank->setObjectName(QString::fromUtf8("film_rank"));
        film_rank->setGeometry(QRect(240, 100, 59, 15));
        film_country = new QLabel(centralWidget);
        film_country->setObjectName(QString::fromUtf8("film_country"));
        film_country->setGeometry(QRect(20, 180, 59, 15));
        film_runtime = new QLabel(centralWidget);
        film_runtime->setObjectName(QString::fromUtf8("film_runtime"));
        film_runtime->setGeometry(QRect(150, 180, 59, 15));
        film_director = new QLabel(centralWidget);
        film_director->setObjectName(QString::fromUtf8("film_director"));
        film_director->setGeometry(QRect(20, 220, 241, 16));
        film_plot = new QPlainTextEdit(centralWidget);
        film_plot->setObjectName(QString::fromUtf8("film_plot"));
        film_plot->setGeometry(QRect(310, 130, 371, 311));
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 40, 761, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        details_button = new QPushButton(centralWidget);
        details_button->setObjectName(QString::fromUtf8("details_button"));
        details_button->setGeometry(QRect(150, 140, 61, 20));
        search_history = new QPushButton(centralWidget);
        search_history->setObjectName(QString::fromUtf8("search_history"));
        search_history->setGeometry(QRect(590, 10, 90, 21));
        film_actors = new QListWidget(centralWidget);
        film_actors->setObjectName(QString::fromUtf8("film_actors"));
        film_actors->setGeometry(QRect(20, 240, 256, 192));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(10, 10, 491, 21));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setOpaqueResize(true);
        splitter->setHandleWidth(6);
        label = new QLabel(splitter);
        label->setObjectName(QString::fromUtf8("label"));
        splitter->addWidget(label);
        search_field = new QLineEdit(splitter);
        search_field->setObjectName(QString::fromUtf8("search_field"));
        search_field->setMinimumSize(QSize(200, 0));
        splitter->addWidget(search_field);
        search_button = new QPushButton(splitter);
        search_button->setObjectName(QString::fromUtf8("search_button"));
        search_button->setDefault(true);
        splitter->addWidget(search_button);
        MainWindow->setCentralWidget(centralWidget);
        QWidget::setTabOrder(search_field, search_button);
        QWidget::setTabOrder(search_button, search_history);
        QWidget::setTabOrder(search_history, details_button);
        QWidget::setTabOrder(details_button, film_plot);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        film_cover->setText(QApplication::translate("MainWindow", "cover", 0, QApplication::UnicodeUTF8));
        film_title->setText(QApplication::translate("MainWindow", "title", 0, QApplication::UnicodeUTF8));
        film_rating->setText(QApplication::translate("MainWindow", "rating", 0, QApplication::UnicodeUTF8));
        film_rank->setText(QApplication::translate("MainWindow", "rank", 0, QApplication::UnicodeUTF8));
        film_country->setText(QApplication::translate("MainWindow", "country", 0, QApplication::UnicodeUTF8));
        film_runtime->setText(QApplication::translate("MainWindow", "length", 0, QApplication::UnicodeUTF8));
        film_director->setText(QApplication::translate("MainWindow", "director", 0, QApplication::UnicodeUTF8));
        details_button->setText(QApplication::translate("MainWindow", "D\303\251tails", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        search_history->setToolTip(QApplication::translate("MainWindow", "Historique de recherche", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        search_history->setText(QApplication::translate("MainWindow", "Historique", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Titre:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        search_field->setToolTip(QApplication::translate("MainWindow", "Titre du film", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        search_button->setToolTip(QApplication::translate("MainWindow", "Chercher le film", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        search_button->setText(QApplication::translate("MainWindow", "Chercher", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
