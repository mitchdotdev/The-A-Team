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
#include <QtWidgets/QLineEdit>
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
    QPushButton *pushButton_3;
    QPushButton *pushButton_TeamInfo;
    QPushButton *pushButton_PlanTrip;
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
    QPushButton *pushButton_SouvenirList;
    QComboBox *comboBox_SouvenirDropDown;
    QLabel *label_sortBy;
    QWidget *trip_page;
    QPushButton *pushButton_home_6;
    QComboBox *comboBox_TeamNames;
    QLabel *label_3;
    QListWidget *listWidget_stopList;
    QLabel *label_mileage;
    QLabel *label_distance;
    QPushButton *pushButton_orderSelected;
    QLabel *label_orderSpecified;
    QLabel *label_efficientOrder;
    QPushButton *pushButton_efficientOrder;
    QTableView *tableView_trip;
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
    QLabel *label_Seating;
    QLabel *label_Open;
    QLineEdit *lineEdit_total;
    QWidget *Admin;
    QPushButton *pushButton_AddTeam;
    QPushButton *pushButton_Souvenir;
    QPushButton *pushButton_home_7;
    QPushButton *pushButton_Edit;
    QWidget *SouvEdit;
    QComboBox *comboBox_teamSouvenirs;
    QPushButton *pushButton_Add;
    QTableView *tableView_Souvenirs;
    QLineEdit *lineEdit_Souv;
    QPushButton *pushButton_Delete;
    QLabel *label_10;
    QPushButton *pushButton_home_8;
    QLabel *label_9;
    QPushButton *pushButton_Modify;
    QLineEdit *lineEdit_Price;
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
        pushButton_3 = new QPushButton(home_page);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(580, 30, 200, 60));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        pushButton_3->setIconSize(QSize(100, 100));
        pushButton_TeamInfo = new QPushButton(home_page);
        pushButton_TeamInfo->setObjectName(QStringLiteral("pushButton_TeamInfo"));
        pushButton_TeamInfo->setGeometry(QRect(110, 360, 200, 60));
        pushButton_TeamInfo->setFont(font);
        pushButton_TeamInfo->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127); color:white"));
        pushButton_TeamInfo->setIconSize(QSize(100, 100));
        pushButton_PlanTrip = new QPushButton(home_page);
        pushButton_PlanTrip->setObjectName(QStringLiteral("pushButton_PlanTrip"));
        pushButton_PlanTrip->setGeometry(QRect(110, 480, 200, 60));
        pushButton_PlanTrip->setFont(font);
        pushButton_PlanTrip->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127); color:white"));
        pushButton_PlanTrip->setIconSize(QSize(100, 100));
        pushButton_Login = new QPushButton(home_page);
        pushButton_Login->setObjectName(QStringLiteral("pushButton_Login"));
        pushButton_Login->setGeometry(QRect(480, 310, 200, 60));
        pushButton_Login->setFont(font);
        pushButton_Login->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127); color:white"));
        pushButton_Login->setIconSize(QSize(100, 100));
        stackedWidget->addWidget(home_page);
        conferenceView_page = new QWidget();
        conferenceView_page->setObjectName(QStringLiteral("conferenceView_page"));
        tableView_conferences = new QTableView(conferenceView_page);
        tableView_conferences->setObjectName(QStringLiteral("tableView_conferences"));
        tableView_conferences->setGeometry(QRect(10, 10, 491, 661));
        QFont font1;
        font1.setPointSize(17);
        tableView_conferences->setFont(font1);
        tableView_conferences->setStyleSheet(QStringLiteral("color: white; background: rgba(0, 0, 0, 127)"));
        tableView_conferences->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableView_conferences->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView_conferences->setShowGrid(false);
        pushButton_viewNFC = new QPushButton(conferenceView_page);
        pushButton_viewNFC->setObjectName(QStringLiteral("pushButton_viewNFC"));
        pushButton_viewNFC->setGeometry(QRect(950, 190, 161, 91));
        QFont font2;
        font2.setPointSize(70);
        pushButton_viewNFC->setFont(font2);
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
        pushButton_viewAFC->setFont(font2);
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
        QFont font3;
        font3.setPointSize(20);
        label_conferences->setFont(font3);
        label_conferences->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        label_conferences->setAlignment(Qt::AlignCenter);
        label_divisions = new QLabel(conferenceView_page);
        label_divisions->setObjectName(QStringLiteral("label_divisions"));
        label_divisions->setGeometry(QRect(840, 330, 181, 41));
        label_divisions->setFont(font3);
        label_divisions->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        label_divisions->setAlignment(Qt::AlignCenter);
        pushButton_northDiv = new QPushButton(conferenceView_page);
        pushButton_northDiv->setObjectName(QStringLiteral("pushButton_northDiv"));
        pushButton_northDiv->setGeometry(QRect(750, 400, 161, 91));
        QFont font4;
        font4.setPointSize(43);
        pushButton_northDiv->setFont(font4);
        pushButton_northDiv->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        pushButton_northDiv->setIconSize(QSize(100, 100));
        pushButton_westDiv = new QPushButton(conferenceView_page);
        pushButton_westDiv->setObjectName(QStringLiteral("pushButton_westDiv"));
        pushButton_westDiv->setGeometry(QRect(950, 540, 161, 91));
        pushButton_westDiv->setFont(font4);
        pushButton_westDiv->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        pushButton_westDiv->setIconSize(QSize(100, 100));
        pushButton_southDiv = new QPushButton(conferenceView_page);
        pushButton_southDiv->setObjectName(QStringLiteral("pushButton_southDiv"));
        pushButton_southDiv->setGeometry(QRect(950, 400, 161, 91));
        pushButton_southDiv->setFont(font4);
        pushButton_southDiv->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        pushButton_southDiv->setIconSize(QSize(100, 100));
        pushButton_eastDiv = new QPushButton(conferenceView_page);
        pushButton_eastDiv->setObjectName(QStringLiteral("pushButton_eastDiv"));
        pushButton_eastDiv->setGeometry(QRect(750, 540, 161, 91));
        pushButton_eastDiv->setFont(font4);
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
        tableView_Stadiums->setFont(font1);
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
        pushButton_SouvenirList = new QPushButton(allTeamInfo_page);
        pushButton_SouvenirList->setObjectName(QStringLiteral("pushButton_SouvenirList"));
        pushButton_SouvenirList->setGeometry(QRect(814, 0, 141, 31));
        pushButton_SouvenirList->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        comboBox_SouvenirDropDown = new QComboBox(allTeamInfo_page);
        comboBox_SouvenirDropDown->setObjectName(QStringLiteral("comboBox_SouvenirDropDown"));
        comboBox_SouvenirDropDown->setGeometry(QRect(660, 10, 141, 22));
        comboBox_SouvenirDropDown->setStyleSheet(QStringLiteral("color: white; background: rgba(0, 0, 0, 127)"));
        label_sortBy = new QLabel(allTeamInfo_page);
        label_sortBy->setObjectName(QStringLiteral("label_sortBy"));
        label_sortBy->setGeometry(QRect(600, 10, 51, 21));
        label_sortBy->setStyleSheet(QStringLiteral("color: white; background: rgba(0, 0, 0, 127)"));
        stackedWidget->addWidget(allTeamInfo_page);
        trip_page = new QWidget();
        trip_page->setObjectName(QStringLiteral("trip_page"));
        pushButton_home_6 = new QPushButton(trip_page);
        pushButton_home_6->setObjectName(QStringLiteral("pushButton_home_6"));
        pushButton_home_6->setGeometry(QRect(1110, 0, 91, 31));
        pushButton_home_6->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        comboBox_TeamNames = new QComboBox(trip_page);
        comboBox_TeamNames->setObjectName(QStringLiteral("comboBox_TeamNames"));
        comboBox_TeamNames->setGeometry(QRect(30, 230, 291, 41));
        comboBox_TeamNames->setFont(font1);
        comboBox_TeamNames->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        label_3 = new QLabel(trip_page);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 190, 301, 41));
        listWidget_stopList = new QListWidget(trip_page);
        listWidget_stopList->setObjectName(QStringLiteral("listWidget_stopList"));
        listWidget_stopList->setGeometry(QRect(30, 280, 291, 331));
        listWidget_stopList->setFont(font1);
        listWidget_stopList->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        listWidget_stopList->setFrameShape(QFrame::NoFrame);
        listWidget_stopList->setLineWidth(0);
        listWidget_stopList->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_stopList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_mileage = new QLabel(trip_page);
        label_mileage->setObjectName(QStringLiteral("label_mileage"));
        label_mileage->setGeometry(QRect(450, 40, 241, 41));
        label_mileage->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        label_distance = new QLabel(trip_page);
        label_distance->setObjectName(QStringLiteral("label_distance"));
        label_distance->setGeometry(QRect(450, 90, 241, 41));
        label_distance->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        pushButton_orderSelected = new QPushButton(trip_page);
        pushButton_orderSelected->setObjectName(QStringLiteral("pushButton_orderSelected"));
        pushButton_orderSelected->setGeometry(QRect(340, 230, 281, 111));
        pushButton_orderSelected->setLayoutDirection(Qt::LeftToRight);
        pushButton_orderSelected->setAutoFillBackground(false);
        pushButton_orderSelected->setStyleSheet(QStringLiteral("background: rgba(255, 255, 255, 0);"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/files/images/arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_orderSelected->setIcon(icon2);
        pushButton_orderSelected->setIconSize(QSize(300, 300));
        label_orderSpecified = new QLabel(trip_page);
        label_orderSpecified->setObjectName(QStringLiteral("label_orderSpecified"));
        label_orderSpecified->setGeometry(QRect(380, 250, 171, 40));
        QFont font5;
        font5.setPointSize(17);
        font5.setBold(true);
        font5.setWeight(75);
        label_orderSpecified->setFont(font5);
        label_orderSpecified->setStyleSheet(QStringLiteral(""));
        label_efficientOrder = new QLabel(trip_page);
        label_efficientOrder->setObjectName(QStringLiteral("label_efficientOrder"));
        label_efficientOrder->setGeometry(QRect(360, 520, 211, 40));
        label_efficientOrder->setFont(font5);
        label_efficientOrder->setStyleSheet(QStringLiteral(""));
        pushButton_efficientOrder = new QPushButton(trip_page);
        pushButton_efficientOrder->setObjectName(QStringLiteral("pushButton_efficientOrder"));
        pushButton_efficientOrder->setGeometry(QRect(340, 500, 281, 111));
        pushButton_efficientOrder->setLayoutDirection(Qt::LeftToRight);
        pushButton_efficientOrder->setAutoFillBackground(false);
        pushButton_efficientOrder->setStyleSheet(QStringLiteral("background: rgba(255, 255, 255, 0);"));
        pushButton_efficientOrder->setIcon(icon2);
        pushButton_efficientOrder->setIconSize(QSize(300, 300));
        tableView_trip = new QTableView(trip_page);
        tableView_trip->setObjectName(QStringLiteral("tableView_trip"));
        tableView_trip->setGeometry(QRect(725, 50, 451, 561));
        tableView_trip->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        tableView_trip->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView_trip->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView_trip->setShowGrid(false);
        stackedWidget->addWidget(trip_page);
        pushButton_home_6->raise();
        comboBox_TeamNames->raise();
        label_3->raise();
        listWidget_stopList->raise();
        label_mileage->raise();
        label_distance->raise();
        pushButton_orderSelected->raise();
        label_orderSpecified->raise();
        pushButton_efficientOrder->raise();
        label_efficientOrder->raise();
        tableView_trip->raise();
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
        QFont font6;
        font6.setPointSize(14);
        label->setFont(font6);
        label->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127); color:white"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(advancedQuery_page);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 130, 391, 31));
        label_2->setFont(font6);
        label_2->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127); color:white"));
        label_2->setAlignment(Qt::AlignCenter);
        listWidget_AdvancedQueryCriteria = new QListWidget(advancedQuery_page);
        listWidget_AdvancedQueryCriteria->setObjectName(QStringLiteral("listWidget_AdvancedQueryCriteria"));
        listWidget_AdvancedQueryCriteria->setGeometry(QRect(30, 170, 391, 421));
        QFont font7;
        font7.setPointSize(16);
        listWidget_AdvancedQueryCriteria->setFont(font7);
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
        label_Seating = new QLabel(advancedQueryResults_page);
        label_Seating->setObjectName(QStringLiteral("label_Seating"));
        label_Seating->setGeometry(QRect(270, 10, 121, 21));
        label_Seating->setStyleSheet(QStringLiteral("color: white; background: rgba(0, 0, 0, 127)"));
        label_Open = new QLabel(advancedQueryResults_page);
        label_Open->setObjectName(QStringLiteral("label_Open"));
        label_Open->setGeometry(QRect(270, 10, 111, 21));
        label_Open->setStyleSheet(QStringLiteral("color: white; background: rgba(0, 0, 0, 127)"));
        lineEdit_total = new QLineEdit(advancedQueryResults_page);
        lineEdit_total->setObjectName(QStringLiteral("lineEdit_total"));
        lineEdit_total->setGeometry(QRect(402, 10, 91, 21));
        lineEdit_total->setStyleSheet(QStringLiteral("color: white; background: rgba(0, 0, 0, 127)"));
        lineEdit_total->setReadOnly(true);
        stackedWidget->addWidget(advancedQueryResults_page);
        pushButton_home_5->raise();
        tableView_advancedQueryResults->raise();
        pushButton_back->raise();
        label_Open->raise();
        lineEdit_total->raise();
        label_Seating->raise();
        Admin = new QWidget();
        Admin->setObjectName(QStringLiteral("Admin"));
        pushButton_AddTeam = new QPushButton(Admin);
        pushButton_AddTeam->setObjectName(QStringLiteral("pushButton_AddTeam"));
        pushButton_AddTeam->setGeometry(QRect(670, 380, 91, 31));
        pushButton_AddTeam->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127); color:white"));
        pushButton_Souvenir = new QPushButton(Admin);
        pushButton_Souvenir->setObjectName(QStringLiteral("pushButton_Souvenir"));
        pushButton_Souvenir->setGeometry(QRect(670, 480, 91, 31));
        pushButton_Souvenir->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127); color:white"));
        pushButton_home_7 = new QPushButton(Admin);
        pushButton_home_7->setObjectName(QStringLiteral("pushButton_home_7"));
        pushButton_home_7->setGeometry(QRect(860, 230, 91, 31));
        pushButton_home_7->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        pushButton_Edit = new QPushButton(Admin);
        pushButton_Edit->setObjectName(QStringLiteral("pushButton_Edit"));
        pushButton_Edit->setGeometry(QRect(670, 430, 91, 31));
        pushButton_Edit->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127); color:white"));
        stackedWidget->addWidget(Admin);
        SouvEdit = new QWidget();
        SouvEdit->setObjectName(QStringLiteral("SouvEdit"));
        comboBox_teamSouvenirs = new QComboBox(SouvEdit);
        comboBox_teamSouvenirs->setObjectName(QStringLiteral("comboBox_teamSouvenirs"));
        comboBox_teamSouvenirs->setGeometry(QRect(280, 250, 161, 22));
        pushButton_Add = new QPushButton(SouvEdit);
        pushButton_Add->setObjectName(QStringLiteral("pushButton_Add"));
        pushButton_Add->setGeometry(QRect(770, 500, 91, 31));
        pushButton_Add->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127); color:white"));
        tableView_Souvenirs = new QTableView(SouvEdit);
        tableView_Souvenirs->setObjectName(QStringLiteral("tableView_Souvenirs"));
        tableView_Souvenirs->setGeometry(QRect(280, 300, 581, 181));
        lineEdit_Souv = new QLineEdit(SouvEdit);
        lineEdit_Souv->setObjectName(QStringLiteral("lineEdit_Souv"));
        lineEdit_Souv->setGeometry(QRect(650, 530, 113, 21));
        pushButton_Delete = new QPushButton(SouvEdit);
        pushButton_Delete->setObjectName(QStringLiteral("pushButton_Delete"));
        pushButton_Delete->setGeometry(QRect(770, 540, 91, 31));
        pushButton_Delete->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127); color:white"));
        label_10 = new QLabel(SouvEdit);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(590, 530, 47, 16));
        pushButton_home_8 = new QPushButton(SouvEdit);
        pushButton_home_8->setObjectName(QStringLiteral("pushButton_home_8"));
        pushButton_home_8->setGeometry(QRect(770, 250, 91, 31));
        pushButton_home_8->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        label_9 = new QLabel(SouvEdit);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(610, 560, 47, 13));
        pushButton_Modify = new QPushButton(SouvEdit);
        pushButton_Modify->setObjectName(QStringLiteral("pushButton_Modify"));
        pushButton_Modify->setGeometry(QRect(770, 580, 91, 31));
        pushButton_Modify->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127); color:white"));
        lineEdit_Price = new QLineEdit(SouvEdit);
        lineEdit_Price->setObjectName(QStringLiteral("lineEdit_Price"));
        lineEdit_Price->setGeometry(QRect(650, 560, 113, 21));
        stackedWidget->addWidget(SouvEdit);
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

        stackedWidget->setCurrentIndex(7);
        comboBox_TeamNames->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        backgroundLogo_label->setText(QString());
        pushButton_viewConferences->setText(QApplication::translate("MainWindow", "View Conferences", nullptr));
        pushButton_Stadiums->setText(QApplication::translate("MainWindow", "View Stadiums", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Dijkstra/MST ?", nullptr));
        pushButton_TeamInfo->setText(QApplication::translate("MainWindow", "View Team Info", nullptr));
        pushButton_PlanTrip->setText(QApplication::translate("MainWindow", "Plan a Trip!", nullptr));
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
        pushButton_SouvenirList->setText(QApplication::translate("MainWindow", "Souvenir List", nullptr));
        label_sortBy->setText(QApplication::translate("MainWindow", "Sort By:", nullptr));
        pushButton_home_6->setText(QApplication::translate("MainWindow", "HOME", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Select the team you want to start your trip with:", nullptr));
        label_mileage->setText(QApplication::translate("MainWindow", "MST Associated Mileage: ", nullptr));
        label_distance->setText(QApplication::translate("MainWindow", "Distance traveled: ", nullptr));
        pushButton_orderSelected->setText(QString());
        label_orderSpecified->setText(QApplication::translate("MainWindow", "Use order specified", nullptr));
        label_efficientOrder->setText(QApplication::translate("MainWindow", "Use most efficient order", nullptr));
        pushButton_efficientOrder->setText(QString());
        pushButton_home_4->setText(QApplication::translate("MainWindow", "HOME", nullptr));
        backgroundLogo_label_3->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Select Information Type", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Display Results From", nullptr));
        pushButton_QuerySelection->setText(QApplication::translate("MainWindow", "Query", nullptr));
        pushButton_home_5->setText(QApplication::translate("MainWindow", "HOME", nullptr));
        pushButton_back->setText(QApplication::translate("MainWindow", "BACK", nullptr));
        label_Seating->setText(QApplication::translate("MainWindow", "Total Seating Capqacity:", nullptr));
        label_Open->setText(QApplication::translate("MainWindow", "Total Open Stadiums:", nullptr));
        pushButton_AddTeam->setText(QApplication::translate("MainWindow", "Add Team", nullptr));
        pushButton_Souvenir->setText(QApplication::translate("MainWindow", "Souvenirs", nullptr));
        pushButton_home_7->setText(QApplication::translate("MainWindow", "HOME", nullptr));
        pushButton_Edit->setText(QApplication::translate("MainWindow", "Edit Stadium Info", nullptr));
        pushButton_Add->setText(QApplication::translate("MainWindow", "Add", nullptr));
        pushButton_Delete->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Souvenir:", nullptr));
        pushButton_home_8->setText(QApplication::translate("MainWindow", "HOME", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Price:", nullptr));
        pushButton_Modify->setText(QApplication::translate("MainWindow", "Modify", nullptr));
        backgroundField_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
