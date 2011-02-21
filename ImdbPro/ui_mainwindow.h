/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Feb 21 14:45:51 2011
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
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *search_field;
    QPushButton *search_button;
    QTabWidget *tabWidget;
    QWidget *tab_general;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *film_cover;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *film_title;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *film_rating;
    QLabel *film_votes;
    QSpacerItem *verticalSpacer_7;
    QVBoxLayout *verticalLayout;
    QLabel *film_rank;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_9;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLabel *film_country_general;
    QLabel *label_4;
    QLabel *film_director;
    QLabel *label_5;
    QLabel *film_writer;
    QLabel *label_10;
    QLabel *film_original_music;
    QLabel *label_6;
    QLabel *film_languages;
    QLabel *label_7;
    QLabel *film_genres;
    QLabel *label_8;
    QLabel *film_runtime;
    QLabel *label_9;
    QLabel *film_aspect_ratio;
    QLabel *label_14;
    QLabel *film_year;
    QFormLayout *formLayout_2;
    QLabel *label_11;
    QLabel *film_mpaa_rating;
    QLabel *label_12;
    QLabel *label_13;
    QPlainTextEdit *film_plot;
    QListWidget *film_certificates;
    QLabel *label_15;
    QListWidget *film_akas;
    QWidget *tab_distribution;
    QFormLayout *formLayout_4;
    QLabel *film_casting_director_lbl;
    QLabel *film_casting_director;
    QLabel *film_cast_lbl;
    QListWidget *film_cast;
    QLabel *film_stunt_performer_lbl;
    QListWidget *film_stunt_performers;
    QWidget *tab_production;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_6;
    QFormLayout *formLayout_6;
    QLabel *film_producer_lbl;
    QListWidget *film_producer;
    QLabel *film_production_companies_lbl;
    QListWidget *film_production_companies;
    QLabel *film_distributors_lbl;
    QListWidget *film_distributors;
    QFormLayout *formLayout_5;
    QLabel *film_editor_lbl;
    QLabel *film_editor;
    QLabel *film_cinematographer_lbl;
    QLabel *film_cinematographer;
    QLabel *film_art_director_lbl;
    QListWidget *film_art_director;
    QLabel *film_makeup_lbl;
    QListWidget *film_makeup;
    QWidget *tab_technical;
    QLabel *film_music_department;
    QLabel *film_sound_crew;
    QLabel *film_visual_effects;
    QLabel *film_sfx_companies;
    QLabel *film_set_decoration;
    QLabel *film_costume_department;
    QLabel *film_sfx_department;
    QLabel *film_art_department;
    QLabel *film_camera_electricity;
    QLabel *label;
    QWidget *tab_misc;
    QVBoxLayout *verticalLayout_5;
    QFormLayout *formLayout_3;
    QLabel *film_transportation_lbl;
    QListWidget *film_transportation;
    QLabel *film_misc_crew_lbl;
    QListWidget *film_misc_crew;
    QLabel *film_misc_companies_lbl;
    QListWidget *film_misc_companies;
    QWidget *tab_fullcover;
    QVBoxLayout *verticalLayout_7;
    QLabel *film_fullsize_cover;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(755, 457);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_6 = new QVBoxLayout(centralWidget);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        search_field = new QLineEdit(centralWidget);
        search_field->setObjectName(QString::fromUtf8("search_field"));

        horizontalLayout_4->addWidget(search_field);

        search_button = new QPushButton(centralWidget);
        search_button->setObjectName(QString::fromUtf8("search_button"));
        search_button->setDefault(true);

        horizontalLayout_4->addWidget(search_button);


        verticalLayout_6->addLayout(horizontalLayout_4);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMaximumSize(QSize(16777215, 401));
        tab_general = new QWidget();
        tab_general->setObjectName(QString::fromUtf8("tab_general"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tab_general->sizePolicy().hasHeightForWidth());
        tab_general->setSizePolicy(sizePolicy);
        verticalLayout_8 = new QVBoxLayout(tab_general);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        film_cover = new QLabel(tab_general);
        film_cover->setObjectName(QString::fromUtf8("film_cover"));

        verticalLayout_4->addWidget(film_cover);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);


        horizontalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        film_title = new QLabel(tab_general);
        film_title->setObjectName(QString::fromUtf8("film_title"));
        QFont font;
        font.setPointSize(24);
        film_title->setFont(font);
        film_title->setWordWrap(true);

        horizontalLayout->addWidget(film_title);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        film_rating = new QLabel(tab_general);
        film_rating->setObjectName(QString::fromUtf8("film_rating"));

        verticalLayout_2->addWidget(film_rating);

        film_votes = new QLabel(tab_general);
        film_votes->setObjectName(QString::fromUtf8("film_votes"));

        verticalLayout_2->addWidget(film_votes);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_7);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        film_rank = new QLabel(tab_general);
        film_rank->setObjectName(QString::fromUtf8("film_rank"));

        verticalLayout->addWidget(film_rank);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_5->addLayout(verticalLayout_3);


        verticalLayout_8->addLayout(horizontalLayout_5);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_3 = new QLabel(tab_general);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        film_country_general = new QLabel(tab_general);
        film_country_general->setObjectName(QString::fromUtf8("film_country_general"));

        formLayout->setWidget(1, QFormLayout::FieldRole, film_country_general);

        label_4 = new QLabel(tab_general);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        film_director = new QLabel(tab_general);
        film_director->setObjectName(QString::fromUtf8("film_director"));

        formLayout->setWidget(2, QFormLayout::FieldRole, film_director);

        label_5 = new QLabel(tab_general);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        film_writer = new QLabel(tab_general);
        film_writer->setObjectName(QString::fromUtf8("film_writer"));

        formLayout->setWidget(3, QFormLayout::FieldRole, film_writer);

        label_10 = new QLabel(tab_general);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_10);

        film_original_music = new QLabel(tab_general);
        film_original_music->setObjectName(QString::fromUtf8("film_original_music"));

        formLayout->setWidget(4, QFormLayout::FieldRole, film_original_music);

        label_6 = new QLabel(tab_general);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        film_languages = new QLabel(tab_general);
        film_languages->setObjectName(QString::fromUtf8("film_languages"));

        formLayout->setWidget(5, QFormLayout::FieldRole, film_languages);

        label_7 = new QLabel(tab_general);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        film_genres = new QLabel(tab_general);
        film_genres->setObjectName(QString::fromUtf8("film_genres"));

        formLayout->setWidget(6, QFormLayout::FieldRole, film_genres);

        label_8 = new QLabel(tab_general);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_8);

        film_runtime = new QLabel(tab_general);
        film_runtime->setObjectName(QString::fromUtf8("film_runtime"));

        formLayout->setWidget(7, QFormLayout::FieldRole, film_runtime);

        label_9 = new QLabel(tab_general);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_9);

        film_aspect_ratio = new QLabel(tab_general);
        film_aspect_ratio->setObjectName(QString::fromUtf8("film_aspect_ratio"));

        formLayout->setWidget(8, QFormLayout::FieldRole, film_aspect_ratio);

        label_14 = new QLabel(tab_general);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_14);

        film_year = new QLabel(tab_general);
        film_year->setObjectName(QString::fromUtf8("film_year"));
        QFont font1;
        font1.setPointSize(9);
        film_year->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, film_year);


        horizontalLayout_9->addLayout(formLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        label_11 = new QLabel(tab_general);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_11);

        film_mpaa_rating = new QLabel(tab_general);
        film_mpaa_rating->setObjectName(QString::fromUtf8("film_mpaa_rating"));
        film_mpaa_rating->setWordWrap(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, film_mpaa_rating);

        label_12 = new QLabel(tab_general);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_12);

        label_13 = new QLabel(tab_general);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_13);

        film_plot = new QPlainTextEdit(tab_general);
        film_plot->setObjectName(QString::fromUtf8("film_plot"));
        film_plot->setEnabled(false);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, film_plot);

        film_certificates = new QListWidget(tab_general);
        film_certificates->setObjectName(QString::fromUtf8("film_certificates"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, film_certificates);

        label_15 = new QLabel(tab_general);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_15);

        film_akas = new QListWidget(tab_general);
        film_akas->setObjectName(QString::fromUtf8("film_akas"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, film_akas);


        horizontalLayout_9->addLayout(formLayout_2);


        verticalLayout_8->addLayout(horizontalLayout_9);

        tabWidget->addTab(tab_general, QString());
        tab_distribution = new QWidget();
        tab_distribution->setObjectName(QString::fromUtf8("tab_distribution"));
        formLayout_4 = new QFormLayout(tab_distribution);
        formLayout_4->setSpacing(6);
        formLayout_4->setContentsMargins(11, 11, 11, 11);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        film_casting_director_lbl = new QLabel(tab_distribution);
        film_casting_director_lbl->setObjectName(QString::fromUtf8("film_casting_director_lbl"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, film_casting_director_lbl);

        film_casting_director = new QLabel(tab_distribution);
        film_casting_director->setObjectName(QString::fromUtf8("film_casting_director"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, film_casting_director);

        film_cast_lbl = new QLabel(tab_distribution);
        film_cast_lbl->setObjectName(QString::fromUtf8("film_cast_lbl"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, film_cast_lbl);

        film_cast = new QListWidget(tab_distribution);
        film_cast->setObjectName(QString::fromUtf8("film_cast"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, film_cast);

        film_stunt_performer_lbl = new QLabel(tab_distribution);
        film_stunt_performer_lbl->setObjectName(QString::fromUtf8("film_stunt_performer_lbl"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, film_stunt_performer_lbl);

        film_stunt_performers = new QListWidget(tab_distribution);
        film_stunt_performers->setObjectName(QString::fromUtf8("film_stunt_performers"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, film_stunt_performers);

        tabWidget->addTab(tab_distribution, QString());
        tab_production = new QWidget();
        tab_production->setObjectName(QString::fromUtf8("tab_production"));
        verticalLayout_9 = new QVBoxLayout(tab_production);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        formLayout_6 = new QFormLayout();
        formLayout_6->setSpacing(6);
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        formLayout_6->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        film_producer_lbl = new QLabel(tab_production);
        film_producer_lbl->setObjectName(QString::fromUtf8("film_producer_lbl"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, film_producer_lbl);

        film_producer = new QListWidget(tab_production);
        film_producer->setObjectName(QString::fromUtf8("film_producer"));

        formLayout_6->setWidget(0, QFormLayout::FieldRole, film_producer);

        film_production_companies_lbl = new QLabel(tab_production);
        film_production_companies_lbl->setObjectName(QString::fromUtf8("film_production_companies_lbl"));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, film_production_companies_lbl);

        film_production_companies = new QListWidget(tab_production);
        film_production_companies->setObjectName(QString::fromUtf8("film_production_companies"));

        formLayout_6->setWidget(1, QFormLayout::FieldRole, film_production_companies);

        film_distributors_lbl = new QLabel(tab_production);
        film_distributors_lbl->setObjectName(QString::fromUtf8("film_distributors_lbl"));

        formLayout_6->setWidget(2, QFormLayout::LabelRole, film_distributors_lbl);

        film_distributors = new QListWidget(tab_production);
        film_distributors->setObjectName(QString::fromUtf8("film_distributors"));

        formLayout_6->setWidget(2, QFormLayout::FieldRole, film_distributors);


        horizontalLayout_6->addLayout(formLayout_6);

        formLayout_5 = new QFormLayout();
        formLayout_5->setSpacing(6);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        film_editor_lbl = new QLabel(tab_production);
        film_editor_lbl->setObjectName(QString::fromUtf8("film_editor_lbl"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, film_editor_lbl);

        film_editor = new QLabel(tab_production);
        film_editor->setObjectName(QString::fromUtf8("film_editor"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, film_editor);

        film_cinematographer_lbl = new QLabel(tab_production);
        film_cinematographer_lbl->setObjectName(QString::fromUtf8("film_cinematographer_lbl"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, film_cinematographer_lbl);

        film_cinematographer = new QLabel(tab_production);
        film_cinematographer->setObjectName(QString::fromUtf8("film_cinematographer"));

        formLayout_5->setWidget(1, QFormLayout::FieldRole, film_cinematographer);

        film_art_director_lbl = new QLabel(tab_production);
        film_art_director_lbl->setObjectName(QString::fromUtf8("film_art_director_lbl"));

        formLayout_5->setWidget(3, QFormLayout::LabelRole, film_art_director_lbl);

        film_art_director = new QListWidget(tab_production);
        film_art_director->setObjectName(QString::fromUtf8("film_art_director"));

        formLayout_5->setWidget(3, QFormLayout::FieldRole, film_art_director);

        film_makeup_lbl = new QLabel(tab_production);
        film_makeup_lbl->setObjectName(QString::fromUtf8("film_makeup_lbl"));

        formLayout_5->setWidget(4, QFormLayout::LabelRole, film_makeup_lbl);

        film_makeup = new QListWidget(tab_production);
        film_makeup->setObjectName(QString::fromUtf8("film_makeup"));

        formLayout_5->setWidget(4, QFormLayout::FieldRole, film_makeup);


        horizontalLayout_6->addLayout(formLayout_5);


        verticalLayout_9->addLayout(horizontalLayout_6);

        tabWidget->addTab(tab_production, QString());
        tab_technical = new QWidget();
        tab_technical->setObjectName(QString::fromUtf8("tab_technical"));
        film_music_department = new QLabel(tab_technical);
        film_music_department->setObjectName(QString::fromUtf8("film_music_department"));
        film_music_department->setGeometry(QRect(80, 30, 121, 16));
        film_sound_crew = new QLabel(tab_technical);
        film_sound_crew->setObjectName(QString::fromUtf8("film_sound_crew"));
        film_sound_crew->setGeometry(QRect(80, 110, 121, 16));
        film_visual_effects = new QLabel(tab_technical);
        film_visual_effects->setObjectName(QString::fromUtf8("film_visual_effects"));
        film_visual_effects->setGeometry(QRect(460, 180, 101, 16));
        film_sfx_companies = new QLabel(tab_technical);
        film_sfx_companies->setObjectName(QString::fromUtf8("film_sfx_companies"));
        film_sfx_companies->setGeometry(QRect(70, 190, 191, 16));
        film_set_decoration = new QLabel(tab_technical);
        film_set_decoration->setObjectName(QString::fromUtf8("film_set_decoration"));
        film_set_decoration->setGeometry(QRect(70, 260, 121, 16));
        film_costume_department = new QLabel(tab_technical);
        film_costume_department->setObjectName(QString::fromUtf8("film_costume_department"));
        film_costume_department->setGeometry(QRect(340, 270, 141, 16));
        film_sfx_department = new QLabel(tab_technical);
        film_sfx_department->setObjectName(QString::fromUtf8("film_sfx_department"));
        film_sfx_department->setGeometry(QRect(450, 230, 181, 16));
        film_art_department = new QLabel(tab_technical);
        film_art_department->setObjectName(QString::fromUtf8("film_art_department"));
        film_art_department->setGeometry(QRect(300, 150, 141, 16));
        film_camera_electricity = new QLabel(tab_technical);
        film_camera_electricity->setObjectName(QString::fromUtf8("film_camera_electricity"));
        film_camera_electricity->setGeometry(QRect(450, 50, 161, 16));
        label = new QLabel(tab_technical);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 290, 131, 16));
        tabWidget->addTab(tab_technical, QString());
        tab_misc = new QWidget();
        tab_misc->setObjectName(QString::fromUtf8("tab_misc"));
        verticalLayout_5 = new QVBoxLayout(tab_misc);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setSpacing(6);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        film_transportation_lbl = new QLabel(tab_misc);
        film_transportation_lbl->setObjectName(QString::fromUtf8("film_transportation_lbl"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, film_transportation_lbl);

        film_transportation = new QListWidget(tab_misc);
        film_transportation->setObjectName(QString::fromUtf8("film_transportation"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, film_transportation);

        film_misc_crew_lbl = new QLabel(tab_misc);
        film_misc_crew_lbl->setObjectName(QString::fromUtf8("film_misc_crew_lbl"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, film_misc_crew_lbl);

        film_misc_crew = new QListWidget(tab_misc);
        film_misc_crew->setObjectName(QString::fromUtf8("film_misc_crew"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, film_misc_crew);

        film_misc_companies_lbl = new QLabel(tab_misc);
        film_misc_companies_lbl->setObjectName(QString::fromUtf8("film_misc_companies_lbl"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, film_misc_companies_lbl);

        film_misc_companies = new QListWidget(tab_misc);
        film_misc_companies->setObjectName(QString::fromUtf8("film_misc_companies"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, film_misc_companies);


        verticalLayout_5->addLayout(formLayout_3);

        tabWidget->addTab(tab_misc, QString());
        tab_fullcover = new QWidget();
        tab_fullcover->setObjectName(QString::fromUtf8("tab_fullcover"));
        verticalLayout_7 = new QVBoxLayout(tab_fullcover);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        film_fullsize_cover = new QLabel(tab_fullcover);
        film_fullsize_cover->setObjectName(QString::fromUtf8("film_fullsize_cover"));
        film_fullsize_cover->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(film_fullsize_cover);

        tabWidget->addTab(tab_fullcover, QString());

        verticalLayout_6->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ImdbPro", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Titre:", 0, QApplication::UnicodeUTF8));
        search_button->setText(QApplication::translate("MainWindow", "Chercher", 0, QApplication::UnicodeUTF8));
        film_cover->setText(QApplication::translate("MainWindow", "cover", 0, QApplication::UnicodeUTF8));
        film_title->setText(QApplication::translate("MainWindow", "title", 0, QApplication::UnicodeUTF8));
        film_rating->setText(QApplication::translate("MainWindow", "rating", 0, QApplication::UnicodeUTF8));
        film_votes->setText(QApplication::translate("MainWindow", "votes", 0, QApplication::UnicodeUTF8));
        film_rank->setText(QApplication::translate("MainWindow", "rank", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Pays:", 0, QApplication::UnicodeUTF8));
        film_country_general->setText(QApplication::translate("MainWindow", "Pays", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "R\303\251alisateur:", 0, QApplication::UnicodeUTF8));
        film_director->setText(QApplication::translate("MainWindow", "R\303\251alisateurs", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Auteur:", 0, QApplication::UnicodeUTF8));
        film_writer->setText(QApplication::translate("MainWindow", "Auteur", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "Musique:", 0, QApplication::UnicodeUTF8));
        film_original_music->setText(QApplication::translate("MainWindow", "Musique originale", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Langue(s):", 0, QApplication::UnicodeUTF8));
        film_languages->setText(QApplication::translate("MainWindow", "language", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Genre(s):", 0, QApplication::UnicodeUTF8));
        film_genres->setText(QApplication::translate("MainWindow", "genres", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Dur\303\251e:", 0, QApplication::UnicodeUTF8));
        film_runtime->setText(QApplication::translate("MainWindow", "runtime", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Ratio:", 0, QApplication::UnicodeUTF8));
        film_aspect_ratio->setText(QApplication::translate("MainWindow", "aspectRatio", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "Ann\303\251e:", 0, QApplication::UnicodeUTF8));
        film_year->setText(QApplication::translate("MainWindow", "year", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "Note MPAA:", 0, QApplication::UnicodeUTF8));
        film_mpaa_rating->setText(QApplication::translate("MainWindow", "mpaa_rating", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "Certificats:", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "Synopsis:", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "Autres titres:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_general), QApplication::translate("MainWindow", "G\303\251n\303\251ral", 0, QApplication::UnicodeUTF8));
        film_casting_director_lbl->setText(QApplication::translate("MainWindow", "Directeur(s) de distribution", 0, QApplication::UnicodeUTF8));
        film_casting_director->setText(QApplication::translate("MainWindow", "Casting director", 0, QApplication::UnicodeUTF8));
        film_cast_lbl->setText(QApplication::translate("MainWindow", "Acteurs", 0, QApplication::UnicodeUTF8));
        film_stunt_performer_lbl->setText(QApplication::translate("MainWindow", "Cascadeurs", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_distribution), QApplication::translate("MainWindow", "Distribution", 0, QApplication::UnicodeUTF8));
        film_producer_lbl->setText(QApplication::translate("MainWindow", "Producteurs", 0, QApplication::UnicodeUTF8));
        film_production_companies_lbl->setText(QApplication::translate("MainWindow", "Soci\303\251t\303\251 de production", 0, QApplication::UnicodeUTF8));
        film_distributors_lbl->setText(QApplication::translate("MainWindow", "Distributeurs", 0, QApplication::UnicodeUTF8));
        film_editor_lbl->setText(QApplication::translate("MainWindow", "\303\211diteur", 0, QApplication::UnicodeUTF8));
        film_editor->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        film_cinematographer_lbl->setText(QApplication::translate("MainWindow", "Cin\303\251matographe", 0, QApplication::UnicodeUTF8));
        film_cinematographer->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        film_art_director_lbl->setText(QApplication::translate("MainWindow", "Direction artistique", 0, QApplication::UnicodeUTF8));
        film_makeup_lbl->setText(QApplication::translate("MainWindow", "Maquillages", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_production), QApplication::translate("MainWindow", "Production", 0, QApplication::UnicodeUTF8));
        film_music_department->setText(QApplication::translate("MainWindow", "\303\211quipe musicale", 0, QApplication::UnicodeUTF8));
        film_sound_crew->setText(QApplication::translate("MainWindow", "\303\211quipe de sons", 0, QApplication::UnicodeUTF8));
        film_visual_effects->setText(QApplication::translate("MainWindow", "Effets visuels", 0, QApplication::UnicodeUTF8));
        film_sfx_companies->setText(QApplication::translate("MainWindow", "Soci\303\251t\303\251s des effets sp\303\251ciaux", 0, QApplication::UnicodeUTF8));
        film_set_decoration->setText(QApplication::translate("MainWindow", "\303\211quipe des d\303\251cors", 0, QApplication::UnicodeUTF8));
        film_costume_department->setText(QApplication::translate("MainWindow", "\303\211quipe des costumes", 0, QApplication::UnicodeUTF8));
        film_sfx_department->setText(QApplication::translate("MainWindow", "\303\211quipe des effets sp\303\251ciaux", 0, QApplication::UnicodeUTF8));
        film_art_department->setText(QApplication::translate("MainWindow", "\303\211quipe artistique", 0, QApplication::UnicodeUTF8));
        film_camera_electricity->setText(QApplication::translate("MainWindow", "Cam\303\251ras et \303\251lectricit\303\251", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\303\211quipe d'animation", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_technical), QApplication::translate("MainWindow", "\303\211quipes techniques", 0, QApplication::UnicodeUTF8));
        film_transportation_lbl->setText(QApplication::translate("MainWindow", "Transport", 0, QApplication::UnicodeUTF8));
        film_misc_crew_lbl->setText(QApplication::translate("MainWindow", "\303\211quipe diverse", 0, QApplication::UnicodeUTF8));
        film_misc_companies_lbl->setText(QApplication::translate("MainWindow", "Compagnies diverses", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_misc), QApplication::translate("MainWindow", "Divers", 0, QApplication::UnicodeUTF8));
        film_fullsize_cover->setText(QApplication::translate("MainWindow", "fullSizeCover", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_fullcover), QApplication::translate("MainWindow", "Image", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
