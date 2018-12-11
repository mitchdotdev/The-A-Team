/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *home_page;
    QLabel *backgroundLogo_label;
    QPushButton *pushButton_viewConferences;
    QPushButton *pushButton_Stadiums;
    QPushButton *pushButton_Souvenirs;
    QPushButton *pushButton_TeamInfo;
    QPushButton *pushButton_Login;
    QWidget *conferenceView_page;
    QTableView *tableView_conferences;
    QPushButton *pushButton_viewNFC;
    QPushButton *pushButton_viewAFC;
    QLabel *label_conferences;
    QLabel *label_divisions;
    QPushButton *pushButton_northDiv;
    QPushButton *pushButton_westDiv;
    QPushButton *pushButton_southDiv;
    QPushButton *pushButton_eastDiv;
    QPushButton *pushButton_home;
    QWidget *stadium_page;
    QTableView *tableView_Stadiums;
    QPushButton *pushButton_home_2;
    QLabel *backgroundLogo_label_2;
    QWidget *allTeamInfo_page;
    QComboBox *comboBox_teamDropdown;
    QTableView *tableView_allTeamInfo;
    QPushButton *pushButton_home_3;
    QPushButton *pushButton_advancedQuery;
    QWidget *advancedQuery_page;
    QPushButton *pushButton_home_4;
    QLabel *backgroundLogo_label_3;
    QComboBox *comboBox_AdvancedQuery;
    QLabel *label;
    QLabel *label_2;
    QListWidget *listWidget_AdvancedQueryCriteria;
    QPushButton *pushButton_QuerySelection;
    QWidget *advancedQueryResults_page;
    QPushButton *pushButton_home_5;
    QTableView *tableView_advancedQueryResults;
    QPushButton *pushButton_back;
    QWidget *souvenirInfo;
    QTableView *tableView_Souvenirs;
    QComboBox *comboBox_teamSouvenirs;
    QPushButton *pushButton_home_6;
    QWidget *admin;
    QPushButton *pushButton_home_7;
    QPushButton *pushButton_AddTeam;
    QPushButton *pushButton_Edit;
    QPushButton *pushButton_ChangePrice;
    QPushButton *pushButton_AddSouvenir;
    QPushButton *pushButton_RemoveSouvenir;
    QWidget *page;
    QTableView *tableView_Souvenirs_2;
    QComboBox *comboBox_teamSouvenirs_2;
    QPushButton *pushButton_home_8;
    QPushButton *pushButton_Delete;
    QLabel *backgroundField_label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1196, 732);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1196, 732));
        MainWindow->setMaximumSize(QSize(1196, 732));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setEnabled(true);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setAutoFillBackground(false);
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1196, 732));
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setMinimumSize(QSize(1196, 732));
        stackedWidget->setMaximumSize(QSize(1196, 732));
        home_page = new QWidget();
        home_page->setObjectName(QStringLiteral("home_page"));
        home_page->setStyleSheet(QStringLiteral(""));
        backgroundLogo_label = new QLabel(home_page);
        backgroundLogo_label->setObjectName(QStringLiteral("backgroundLogo_label"));
        backgroundLogo_label->setGeometry(QRect(710, 100, 451, 471));
        backgroundLogo_label->setPixmap(QPixmap(QString::fromUtf8(":/files/images/NFLLogo.png")));
        backgroundLogo_label->setScaledContents(true);
        backgroundLogo_label->setAlignment(Qt::AlignCenter);
        pushButton_viewConferences = new QPushButton(home_page);
        pushButton_viewConferences->setObjectName(QStringLiteral("pushButton_viewConferences"));
        pushButton_viewConferences->setGeometry(QRect(110, 120, 200, 60));
        QFont font;
        font.setPointSize(15);
        pushButton_viewConferences->setFont(font);
        pushButton_viewConferences->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127); color:white"));
        pushButton_viewConferences->setIconSize(QSize(100, 100));
        pushButton_Stadiums = new QPushButton(home_page);
        pushButton_Stadiums->setObjectName(QStringLiteral("pushButton_Stadiums"));
        pushButton_Stadiums->setGeometry(QRect(110, 240, 200, 60));
        pushButton_Stadiums->setFont(font);
        pushButton_Stadiums->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127); color:white"));
        pushButton_Stadiums->setIconSize(QSize(100, 100));
        pushButton_Souvenirs = new QPushButton(home_page);
        pushButton_Souvenirs->setObjectName(QStringLiteral("pushButton_Souvenirs"));
        pushButton_Souvenirs->setEnabled(true);
        pushButton_Souvenirs->setGeometry(QRect(110, 450, 200, 60));
        pushButton_Souvenirs->setFont(font);
        pushButton_Souvenirs->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127); color:white"));
        pushButton_Souvenirs->setIconSize(QSize(100, 100));
        pushButton_TeamInfo = new QPushButton(home_page);
        pushButton_TeamInfo->setObjectName(QStringLiteral("pushButton_TeamInfo"));
        pushButton_TeamInfo->setGeometry(QRect(110, 360, 200, 60));
        pushButton_TeamInfo->setFont(font);
        pushButton_TeamInfo->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127); color:white"));
        pushButton_TeamInfo->setIconSize(QSize(100, 100));
        pushButton_Login = new QPushButton(home_page);
        pushButton_Login->setObjectName(QStringLiteral("pushButton_Login"));
        pushButton_Login->setGeometry(QRect(490, 120, 200, 60));
        pushButton_Login->setFont(font);
        pushButton_Login->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127); color:white"));
        pushButton_Login->setIconSize(QSize(100, 100));
        stackedWidget->addWidget(home_page);
        backgroundLogo_label->raise();
        pushButton_viewConferences->raise();
        pushButton_Stadiums->raise();
        pushButton_TeamInfo->raise();
        pushButton_Souvenirs->raise();
        pushButton_Login->raise();
        conferenceView_page = new QWidget();
        conferenceView_page->setObjectName(QStringLiteral("conferenceView_page"));
        tableView_conferences = new QTableView(conferenceView_page);
        tableView_conferences->setObjectName(QStringLiteral("tableView_conferences"));
        tableView_conferences->setGeometry(QRect(10, 10, 491, 661));
        tableView_conferences->setStyleSheet(QStringLiteral("color: white; background: rgba(0, 0, 0, 127)"));
        tableView_conferences->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableView_conferences->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView_conferences->setShowGrid(false);
        pushButton_viewNFC = new QPushButton(conferenceView_page);
        pushButton_viewNFC->setObjectName(QStringLiteral("pushButton_viewNFC"));
        pushButton_viewNFC->setGeometry(QRect(950, 190, 161, 91));
        QFont font1;
        font1.setPointSize(70);
        pushButton_viewNFC->setFont(font1);
        pushButton_viewNFC->setStyleSheet(QStringLiteral("background: rgba(255, 255, 255, 0)"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/files/images/NFCLogo.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_viewNFC->setIcon(icon);
        pushButton_viewNFC->setIconSize(QSize(90, 90));
        pushButton_viewNFC->setCheckable(false);
        pushButton_viewNFC->setAutoExclusive(false);
        pushButton_viewAFC = new QPushButton(conferenceView_page);
        pushButton_viewAFC->setObjectName(QStringLiteral("pushButton_viewAFC"));
        pushButton_viewAFC->setGeometry(QRect(750, 190, 161, 91));
        pushButton_viewAFC->setFont(font1);
        pushButton_viewAFC->setStyleSheet(QStringLiteral("background: rgba(255, 255, 255, 0)"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/files/images/AFCLogo.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_viewAFC->setIcon(icon1);
        pushButton_viewAFC->setIconSize(QSize(100, 100));
        pushButton_viewAFC->setCheckable(false);
        pushButton_viewAFC->setAutoExclusive(false);
        label_conferences = new QLabel(conferenceView_page);
        label_conferences->setObjectName(QStringLiteral("label_conferences"));
        label_conferences->setGeometry(QRect(840, 120, 181, 41));
        QFont font2;
        font2.setPointSize(20);
        label_conferences->setFont(font2);
        label_conferences->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        label_conferences->setAlignment(Qt::AlignCenter);
        label_divisions = new QLabel(conferenceView_page);
        label_divisions->setObjectName(QStringLiteral("label_divisions"));
        label_divisions->setGeometry(QRect(840, 330, 181, 41));
        label_divisions->setFont(font2);
        label_divisions->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        label_divisions->setAlignment(Qt::AlignCenter);
        pushButton_northDiv = new QPushButton(conferenceView_page);
        pushButton_northDiv->setObjectName(QStringLiteral("pushButton_northDiv"));
        pushButton_northDiv->setGeometry(QRect(750, 400, 161, 91));
        QFont font3;
        font3.setPointSize(43);
        pushButton_northDiv->setFont(font3);
        pushButton_northDiv->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        pushButton_northDiv->setIconSize(QSize(100, 100));
        pushButton_westDiv = new QPushButton(conferenceView_page);
        pushButton_westDiv->setObjectName(QStringLiteral("pushButton_westDiv"));
        pushButton_westDiv->setGeometry(QRect(950, 540, 161, 91));
        pushButton_westDiv->setFont(font3);
        pushButton_westDiv->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        pushButton_westDiv->setIconSize(QSize(100, 100));
        pushButton_southDiv = new QPushButton(conferenceView_page);
        pushButton_southDiv->setObjectName(QStringLiteral("pushButton_southDiv"));
        pushButton_southDiv->setGeometry(QRect(950, 400, 161, 91));
        pushButton_southDiv->setFont(font3);
        pushButton_southDiv->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        pushButton_southDiv->setIconSize(QSize(100, 100));
        pushButton_eastDiv = new QPushButton(conferenceView_page);
        pushButton_eastDiv->setObjectName(QStringLiteral("pushButton_eastDiv"));
        pushButton_eastDiv->setGeometry(QRect(750, 540, 161, 91));
        pushButton_eastDiv->setFont(font3);
        pushButton_eastDiv->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        pushButton_eastDiv->setIconSize(QSize(100, 100));
        pushButton_home = new QPushButton(conferenceView_page);
        pushButton_home->setObjectName(QStringLiteral("pushButton_home"));
        pushButton_home->setGeometry(QRect(1110, 0, 91, 31));
        pushButton_home->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        stackedWidget->addWidget(conferenceView_page);
        tableView_conferences->raise();
        pushButton_viewAFC->raise();
        pushButton_viewNFC->raise();
        label_conferences->raise();
        label_divisions->raise();
        pushButton_northDiv->raise();
        pushButton_westDiv->raise();
        pushButton_southDiv->raise();
        pushButton_eastDiv->raise();
        pushButton_home->raise();
        stadium_page = new QWidget();
        stadium_page->setObjectName(QStringLiteral("stadium_page"));
        tableView_Stadiums = new QTableView(stadium_page);
        tableView_Stadiums->setObjectName(QStringLiteral("tableView_Stadiums"));
        tableView_Stadiums->setGeometry(QRect(10, 10, 651, 661));
        tableView_Stadiums->setStyleSheet(QStringLiteral("color: white; background: rgba(0, 0, 0, 127)"));
        tableView_Stadiums->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_Stadiums->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_Stadiums->setSelectionBehavior(QAbstractItemView::SelectColumns);
        tableView_Stadiums->setShowGrid(false);
        pushButton_home_2 = new QPushButton(stadium_page);
        pushButton_home_2->setObjectName(QStringLiteral("pushButton_home_2"));
        pushButton_home_2->setGeometry(QRect(1110, 0, 91, 31));
        pushButton_home_2->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        backgroundLogo_label_2 = new QLabel(stadium_page);
        backgroundLogo_label_2->setObjectName(QStringLiteral("backgroundLogo_label_2"));
        backgroundLogo_label_2->setGeometry(QRect(710, 100, 451, 471));
        backgroundLogo_label_2->setPixmap(QPixmap(QString::fromUtf8(":/files/images/NFLLogo.png")));
        backgroundLogo_label_2->setScaledContents(true);
        backgroundLogo_label_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        stackedWidget->addWidget(stadium_page);
        backgroundLogo_label_2->raise();
        tableView_Stadiums->raise();
        pushButton_home_2->raise();
        allTeamInfo_page = new QWidget();
        allTeamInfo_page->setObjectName(QStringLiteral("allTeamInfo_page"));
        comboBox_teamDropdown = new QComboBox(allTeamInfo_page);
        comboBox_teamDropdown->setObjectName(QStringLiteral("comboBox_teamDropdown"));
        comboBox_teamDropdown->setGeometry(QRect(10, 10, 231, 21));
        comboBox_teamDropdown->setStyleSheet(QStringLiteral("color: white; background: rgba(0, 0, 0, 127)"));
        tableView_allTeamInfo = new QTableView(allTeamInfo_page);
        tableView_allTeamInfo->setObjectName(QStringLiteral("tableView_allTeamInfo"));
        tableView_allTeamInfo->setGeometry(QRect(10, 40, 1181, 631));
        tableView_allTeamInfo->setStyleSheet(QStringLiteral("color: white; background: rgba(0, 0, 0, 127)"));
        tableView_allTeamInfo->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_allTeamInfo->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_allTeamInfo->setSelectionBehavior(QAbstractItemView::SelectColumns);
        tableView_allTeamInfo->setShowGrid(true);
        tableView_allTeamInfo->setGridStyle(Qt::SolidLine);
        pushButton_home_3 = new QPushButton(allTeamInfo_page);
        pushButton_home_3->setObjectName(QStringLiteral("pushButton_home_3"));
        pushButton_home_3->setGeometry(QRect(1110, 0, 91, 31));
        pushButton_home_3->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        pushButton_advancedQuery = new QPushButton(allTeamInfo_page);
        pushButton_advancedQuery->setObjectName(QStringLiteral("pushButton_advancedQuery"));
        pushButton_advancedQuery->setGeometry(QRect(960, 0, 141, 31));
        pushButton_advancedQuery->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        stackedWidget->addWidget(allTeamInfo_page);
        advancedQuery_page = new QWidget();
        advancedQuery_page->setObjectName(QStringLiteral("advancedQuery_page"));
        pushButton_home_4 = new QPushButton(advancedQuery_page);
        pushButton_home_4->setObjectName(QStringLiteral("pushButton_home_4"));
        pushButton_home_4->setGeometry(QRect(1110, 0, 91, 31));
        pushButton_home_4->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        backgroundLogo_label_3 = new QLabel(advancedQuery_page);
        backgroundLogo_label_3->setObjectName(QStringLiteral("backgroundLogo_label_3"));
        backgroundLogo_label_3->setGeometry(QRect(710, 100, 451, 471));
        backgroundLogo_label_3->setPixmap(QPixmap(QString::fromUtf8(":/files/images/NFLLogo.png")));
        backgroundLogo_label_3->setScaledContents(true);
        backgroundLogo_label_3->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        comboBox_AdvancedQuery = new QComboBox(advancedQuery_page);
        comboBox_AdvancedQuery->setObjectName(QStringLiteral("comboBox_AdvancedQuery"));
        comboBox_AdvancedQuery->setGeometry(QRect(30, 90, 171, 31));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox_AdvancedQuery->sizePolicy().hasHeightForWidth());
        comboBox_AdvancedQuery->setSizePolicy(sizePolicy1);
        comboBox_AdvancedQuery->setStyleSheet(QStringLiteral("color: white; background: rgba(0, 0, 0, 127)"));
        label = new QLabel(advancedQuery_page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 40, 171, 31));
        QFont font4;
        font4.setPointSize(14);
        label->setFont(font4);
        label->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127); color:white"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(advancedQuery_page);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 130, 391, 31));
        label_2->setFont(font4);
        label_2->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127); color:white"));
        label_2->setAlignment(Qt::AlignCenter);
        listWidget_AdvancedQueryCriteria = new QListWidget(advancedQuery_page);
        listWidget_AdvancedQueryCriteria->setObjectName(QStringLiteral("listWidget_AdvancedQueryCriteria"));
        listWidget_AdvancedQueryCriteria->setGeometry(QRect(30, 170, 391, 421));
        listWidget_AdvancedQueryCriteria->setStyleSheet(QStringLiteral("color: white; background: rgba(0, 0, 0, 127)"));
        listWidget_AdvancedQueryCriteria->setEditTriggers(QAbstractItemView::NoEditTriggers);
        pushButton_QuerySelection = new QPushButton(advancedQuery_page);
        pushButton_QuerySelection->setObjectName(QStringLiteral("pushButton_QuerySelection"));
        pushButton_QuerySelection->setGeometry(QRect(340, 610, 81, 31));
        pushButton_QuerySelection->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        stackedWidget->addWidget(advancedQuery_page);
        backgroundLogo_label_3->raise();
        pushButton_home_4->raise();
        comboBox_AdvancedQuery->raise();
        label->raise();
        label_2->raise();
        listWidget_AdvancedQueryCriteria->raise();
        pushButton_QuerySelection->raise();
        advancedQueryResults_page = new QWidget();
        advancedQueryResults_page->setObjectName(QStringLiteral("advancedQueryResults_page"));
        pushButton_home_5 = new QPushButton(advancedQueryResults_page);
        pushButton_home_5->setObjectName(QStringLiteral("pushButton_home_5"));
        pushButton_home_5->setGeometry(QRect(1110, 0, 91, 31));
        pushButton_home_5->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        tableView_advancedQueryResults = new QTableView(advancedQueryResults_page);
        tableView_advancedQueryResults->setObjectName(QStringLiteral("tableView_advancedQueryResults"));
        tableView_advancedQueryResults->setGeometry(QRect(10, 40, 1181, 641));
        tableView_advancedQueryResults->setStyleSheet(QStringLiteral("color: white; background: rgba(0, 0, 0, 127)"));
        tableView_advancedQueryResults->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_advancedQueryResults->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_advancedQueryResults->setSelectionBehavior(QAbstractItemView::SelectColumns);
        tableView_advancedQueryResults->setShowGrid(true);
        pushButton_back = new QPushButton(advancedQueryResults_page);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(0, 0, 101, 31));
        pushButton_back->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        stackedWidget->addWidget(advancedQueryResults_page);
        souvenirInfo = new QWidget();
        souvenirInfo->setObjectName(QStringLiteral("souvenirInfo"));
        tableView_Souvenirs = new QTableView(souvenirInfo);
        tableView_Souvenirs->setObjectName(QStringLiteral("tableView_Souvenirs"));
        tableView_Souvenirs->setGeometry(QRect(250, 190, 581, 181));
        comboBox_teamSouvenirs = new QComboBox(souvenirInfo);
        comboBox_teamSouvenirs->setObjectName(QStringLiteral("comboBox_teamSouvenirs"));
        comboBox_teamSouvenirs->setGeometry(QRect(250, 140, 161, 22));
        pushButton_home_6 = new QPushButton(souvenirInfo);
        pushButton_home_6->setObjectName(QStringLiteral("pushButton_home_6"));
        pushButton_home_6->setGeometry(QRect(740, 140, 91, 31));
        pushButton_home_6->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        stackedWidget->addWidget(souvenirInfo);
        admin = new QWidget();
        admin->setObjectName(QStringLiteral("admin"));
        pushButton_home_7 = new QPushButton(admin);
        pushButton_home_7->setObjectName(QStringLiteral("pushButton_home_7"));
        pushButton_home_7->setGeometry(QRect(780, 160, 91, 31));
        pushButton_home_7->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        pushButton_AddTeam = new QPushButton(admin);
        pushButton_AddTeam->setObjectName(QStringLiteral("pushButton_AddTeam"));
        pushButton_AddTeam->setGeometry(QRect(590, 310, 91, 31));
        pushButton_AddTeam->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127); color:white"));
        pushButton_Edit = new QPushButton(admin);
        pushButton_Edit->setObjectName(QStringLiteral("pushButton_Edit"));
        pushButton_Edit->setGeometry(QRect(590, 360, 91, 31));
        pushButton_Edit->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127); color:white"));
        pushButton_ChangePrice = new QPushButton(admin);
        pushButton_ChangePrice->setObjectName(QStringLiteral("pushButton_ChangePrice"));
        pushButton_ChangePrice->setGeometry(QRect(590, 410, 91, 31));
        pushButton_ChangePrice->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127); color:white"));
        pushButton_AddSouvenir = new QPushButton(admin);
        pushButton_AddSouvenir->setObjectName(QStringLiteral("pushButton_AddSouvenir"));
        pushButton_AddSouvenir->setGeometry(QRect(590, 460, 91, 31));
        pushButton_AddSouvenir->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127); color:white"));
        pushButton_RemoveSouvenir = new QPushButton(admin);
        pushButton_RemoveSouvenir->setObjectName(QStringLiteral("pushButton_RemoveSouvenir"));
        pushButton_RemoveSouvenir->setGeometry(QRect(590, 510, 91, 31));
        pushButton_RemoveSouvenir->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127); color:white"));
        stackedWidget->addWidget(admin);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        tableView_Souvenirs_2 = new QTableView(page);
        tableView_Souvenirs_2->setObjectName(QStringLiteral("tableView_Souvenirs_2"));
        tableView_Souvenirs_2->setGeometry(QRect(340, 180, 581, 181));
        comboBox_teamSouvenirs_2 = new QComboBox(page);
        comboBox_teamSouvenirs_2->setObjectName(QStringLiteral("comboBox_teamSouvenirs_2"));
        comboBox_teamSouvenirs_2->setGeometry(QRect(340, 130, 161, 22));
        pushButton_home_8 = new QPushButton(page);
        pushButton_home_8->setObjectName(QStringLiteral("pushButton_home_8"));
        pushButton_home_8->setGeometry(QRect(830, 130, 91, 31));
        pushButton_home_8->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        pushButton_Delete = new QPushButton(page);
        pushButton_Delete->setObjectName(QStringLiteral("pushButton_Delete"));
        pushButton_Delete->setGeometry(QRect(830, 380, 91, 31));
        pushButton_Delete->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127); color:white"));
        stackedWidget->addWidget(page);
        backgroundField_label = new QLabel(centralWidget);
        backgroundField_label->setObjectName(QStringLiteral("backgroundField_label"));
        backgroundField_label->setGeometry(QRect(0, 0, 1196, 732));
        backgroundField_label->setMinimumSize(QSize(1196, 732));
        backgroundField_label->setMaximumSize(QSize(1196, 732));
        backgroundField_label->setPixmap(QPixmap(QString::fromUtf8(":/files/images/NFLField.jpg")));
        backgroundField_label->setScaledContents(true);
        backgroundField_label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        MainWindow->setCentralWidget(centralWidget);
        backgroundField_label->raise();
        stackedWidget->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1196, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        backgroundLogo_label->setText(QString());
        pushButton_viewConferences->setText(QApplication::translate("MainWindow", "View Conferences", nullptr));
        pushButton_Stadiums->setText(QApplication::translate("MainWindow", "View Stadiums", nullptr));
        pushButton_Souvenirs->setText(QApplication::translate("MainWindow", "View Souvenirs", nullptr));
        pushButton_TeamInfo->setText(QApplication::translate("MainWindow", "View Team Info", nullptr));
        pushButton_Login->setText(QApplication::translate("MainWindow", "Login", nullptr));
        pushButton_viewNFC->setText(QString());
        pushButton_viewAFC->setText(QString());
        label_conferences->setText(QApplication::translate("MainWindow", "CONFERENCES", nullptr));
        label_divisions->setText(QApplication::translate("MainWindow", "DIVISIONS", nullptr));
        pushButton_northDiv->setText(QApplication::translate("MainWindow", "NORTH", nullptr));
        pushButton_westDiv->setText(QApplication::translate("MainWindow", "WEST", nullptr));
        pushButton_southDiv->setText(QApplication::translate("MainWindow", "SOUTH", nullptr));
        pushButton_eastDiv->setText(QApplication::translate("MainWindow", "EAST", nullptr));
        pushButton_home->setText(QApplication::translate("MainWindow", "HOME", nullptr));
        pushButton_home_2->setText(QApplication::translate("MainWindow", "HOME", nullptr));
        backgroundLogo_label_2->setText(QString());
        pushButton_home_3->setText(QApplication::translate("MainWindow", "HOME", nullptr));
        pushButton_advancedQuery->setText(QApplication::translate("MainWindow", "Advanced Query", nullptr));
        pushButton_home_4->setText(QApplication::translate("MainWindow", "HOME", nullptr));
        backgroundLogo_label_3->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Select Information Type", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Display Results From", nullptr));
        pushButton_QuerySelection->setText(QApplication::translate("MainWindow", "Query", nullptr));
        pushButton_home_5->setText(QApplication::translate("MainWindow", "HOME", nullptr));
        pushButton_back->setText(QApplication::translate("MainWindow", "BACK", nullptr));
        pushButton_home_6->setText(QApplication::translate("MainWindow", "HOME", nullptr));
        pushButton_home_7->setText(QApplication::translate("MainWindow", "HOME", nullptr));
        pushButton_AddTeam->setText(QApplication::translate("MainWindow", "Add Team", nullptr));
        pushButton_Edit->setText(QApplication::translate("MainWindow", "Edit Stadium Info", nullptr));
        pushButton_ChangePrice->setText(QApplication::translate("MainWindow", "Change Price", nullptr));
        pushButton_AddSouvenir->setText(QApplication::translate("MainWindow", "Add Souvenir", nullptr));
        pushButton_RemoveSouvenir->setText(QApplication::translate("MainWindow", "Remove Souvenir", nullptr));
        pushButton_home_8->setText(QApplication::translate("MainWindow", "HOME", nullptr));
        pushButton_Delete->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        backgroundField_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
