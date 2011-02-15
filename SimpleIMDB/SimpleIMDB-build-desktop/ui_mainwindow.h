/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Feb 15 09:48:34 2011
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
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *search_field;
    QPushButton *search_button;
    QFrame *line;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *film_cover;
    QVBoxLayout *verticalLayout_2;
    QLabel *film_title;
    QVBoxLayout *verticalLayout_6;
    QLabel *film_rating;
    QLabel *film_rank;
    QSpacerItem *horizontalSpacer;
    QPlainTextEdit *film_plot;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QSplitter *splitter_2;
    QListWidget *film_actors;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLabel *film_director;
    QLabel *label_4;
    QLabel *film_country;
    QLabel *label_5;
    QLabel *film_runtime;
    QLabel *label_6;
    QLabel *film_genres;
    QLabel *label_7;
    QLabel *film_year;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(455, 411);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(96);
        sizePolicy.setVerticalStretch(96);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_5 = new QVBoxLayout(centralWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        search_field = new QLineEdit(centralWidget);
        search_field->setObjectName(QString::fromUtf8("search_field"));
        search_field->setMinimumSize(QSize(200, 0));

        horizontalLayout->addWidget(search_field);

        search_button = new QPushButton(centralWidget);
        search_button->setObjectName(QString::fromUtf8("search_button"));
        search_button->setAutoDefault(false);
        search_button->setDefault(false);

        horizontalLayout->addWidget(search_button);


        verticalLayout_5->addLayout(horizontalLayout);

        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        film_cover = new QLabel(centralWidget);
        film_cover->setObjectName(QString::fromUtf8("film_cover"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(96);
        sizePolicy1.setHeightForWidth(film_cover->sizePolicy().hasHeightForWidth());
        film_cover->setSizePolicy(sizePolicy1);
        film_cover->setMinimumSize(QSize(0, 96));

        horizontalLayout_2->addWidget(film_cover);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        film_title = new QLabel(centralWidget);
        film_title->setObjectName(QString::fromUtf8("film_title"));
        QFont font;
        font.setPointSize(20);
        film_title->setFont(font);

        verticalLayout_2->addWidget(film_title);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        film_rating = new QLabel(centralWidget);
        film_rating->setObjectName(QString::fromUtf8("film_rating"));

        verticalLayout_6->addWidget(film_rating);

        film_rank = new QLabel(centralWidget);
        film_rank->setObjectName(QString::fromUtf8("film_rank"));

        verticalLayout_6->addWidget(film_rank);


        verticalLayout_2->addLayout(verticalLayout_6);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_2);

        film_plot = new QPlainTextEdit(centralWidget);
        film_plot->setObjectName(QString::fromUtf8("film_plot"));

        verticalLayout_3->addWidget(film_plot);


        verticalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_4->addWidget(label_2);

        splitter_2 = new QSplitter(centralWidget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        film_actors = new QListWidget(splitter_2);
        film_actors->setObjectName(QString::fromUtf8("film_actors"));
        splitter_2->addWidget(film_actors);
        layoutWidget = new QWidget(splitter_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        film_director = new QLabel(layoutWidget);
        film_director->setObjectName(QString::fromUtf8("film_director"));

        formLayout->setWidget(0, QFormLayout::FieldRole, film_director);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        film_country = new QLabel(layoutWidget);
        film_country->setObjectName(QString::fromUtf8("film_country"));

        formLayout->setWidget(2, QFormLayout::FieldRole, film_country);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        film_runtime = new QLabel(layoutWidget);
        film_runtime->setObjectName(QString::fromUtf8("film_runtime"));

        formLayout->setWidget(3, QFormLayout::FieldRole, film_runtime);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        film_genres = new QLabel(layoutWidget);
        film_genres->setObjectName(QString::fromUtf8("film_genres"));

        formLayout->setWidget(4, QFormLayout::FieldRole, film_genres);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_7);

        film_year = new QLabel(layoutWidget);
        film_year->setObjectName(QString::fromUtf8("film_year"));

        formLayout->setWidget(1, QFormLayout::FieldRole, film_year);

        splitter_2->addWidget(layoutWidget);

        verticalLayout_4->addWidget(splitter_2);


        verticalLayout_5->addLayout(verticalLayout_4);

        MainWindow->setCentralWidget(centralWidget);
        QWidget::setTabOrder(search_field, search_button);
        QWidget::setTabOrder(search_button, film_plot);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SimpleIMDb", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Titre:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        search_field->setToolTip(QApplication::translate("MainWindow", "Titre du film", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        search_button->setToolTip(QApplication::translate("MainWindow", "Chercher le film", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        search_button->setText(QApplication::translate("MainWindow", "&Chercher", 0, QApplication::UnicodeUTF8));
        film_cover->setText(QString());
        film_title->setText(QString());
        film_rating->setText(QString());
        film_rank->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Distribution", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "R\303\251alisteur:", 0, QApplication::UnicodeUTF8));
        film_director->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "Pays:", 0, QApplication::UnicodeUTF8));
        film_country->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "Dur\303\251e:", 0, QApplication::UnicodeUTF8));
        film_runtime->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "Genres:", 0, QApplication::UnicodeUTF8));
        film_genres->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", "Ann\303\251e:", 0, QApplication::UnicodeUTF8));
        film_year->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
