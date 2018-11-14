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
    QLabel *backgroundField_label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(851, 532);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setEnabled(true);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setAutoFillBackground(false);
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 851, 461));
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        home_page = new QWidget();
        home_page->setObjectName(QStringLiteral("home_page"));
        home_page->setStyleSheet(QStringLiteral(""));
        backgroundLogo_label = new QLabel(home_page);
        backgroundLogo_label->setObjectName(QStringLiteral("backgroundLogo_label"));
        backgroundLogo_label->setGeometry(QRect(410, -10, 451, 471));
        backgroundLogo_label->setPixmap(QPixmap(QString::fromUtf8(":/files/images/NFLLogo.png")));
        backgroundLogo_label->setScaledContents(true);
        backgroundLogo_label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        pushButton_viewConferences = new QPushButton(home_page);
        pushButton_viewConferences->setObjectName(QStringLiteral("pushButton_viewConferences"));
        pushButton_viewConferences->setGeometry(QRect(30, 50, 161, 41));
        QFont font;
        font.setPointSize(15);
        pushButton_viewConferences->setFont(font);
        pushButton_viewConferences->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127); color:white"));
        pushButton_viewConferences->setIconSize(QSize(100, 100));
        pushButton_Stadiums = new QPushButton(home_page);
        pushButton_Stadiums->setObjectName(QStringLiteral("pushButton_Stadiums"));
        pushButton_Stadiums->setGeometry(QRect(30, 130, 161, 41));
        QFont font1;
        font1.setPointSize(14);
        pushButton_Stadiums->setFont(font1);
        pushButton_Stadiums->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127); color:white"));
        pushButton_Stadiums->setIconSize(QSize(100, 100));
        pushButton_3 = new QPushButton(home_page);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 290, 161, 41));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        pushButton_3->setIconSize(QSize(100, 100));
        pushButton_TeamInfo = new QPushButton(home_page);
        pushButton_TeamInfo->setObjectName(QStringLiteral("pushButton_TeamInfo"));
        pushButton_TeamInfo->setGeometry(QRect(30, 210, 161, 41));
        pushButton_TeamInfo->setFont(font1);
        pushButton_TeamInfo->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127); color:white"));
        pushButton_TeamInfo->setIconSize(QSize(100, 100));
        stackedWidget->addWidget(home_page);
        conferenceView_page = new QWidget();
        conferenceView_page->setObjectName(QStringLiteral("conferenceView_page"));
        tableView_conferences = new QTableView(conferenceView_page);
        tableView_conferences->setObjectName(QStringLiteral("tableView_conferences"));
        tableView_conferences->setGeometry(QRect(10, 10, 401, 441));
        tableView_conferences->setStyleSheet(QStringLiteral("color: white; background: rgba(0, 0, 0, 127)"));
        pushButton_viewNFC = new QPushButton(conferenceView_page);
        pushButton_viewNFC->setObjectName(QStringLiteral("pushButton_viewNFC"));
        pushButton_viewNFC->setGeometry(QRect(650, 80, 161, 91));
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
        pushButton_viewAFC->setGeometry(QRect(450, 80, 161, 91));
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
        label_conferences->setGeometry(QRect(540, 20, 181, 41));
        QFont font3;
        font3.setPointSize(20);
        label_conferences->setFont(font3);
        label_conferences->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        label_conferences->setAlignment(Qt::AlignCenter);
        label_divisions = new QLabel(conferenceView_page);
        label_divisions->setObjectName(QStringLiteral("label_divisions"));
        label_divisions->setGeometry(QRect(540, 200, 181, 41));
        label_divisions->setFont(font3);
        label_divisions->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        label_divisions->setAlignment(Qt::AlignCenter);
        pushButton_northDiv = new QPushButton(conferenceView_page);
        pushButton_northDiv->setObjectName(QStringLiteral("pushButton_northDiv"));
        pushButton_northDiv->setGeometry(QRect(450, 260, 161, 91));
        QFont font4;
        font4.setPointSize(43);
        pushButton_northDiv->setFont(font4);
        pushButton_northDiv->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        pushButton_northDiv->setIconSize(QSize(100, 100));
        pushButton_westDiv = new QPushButton(conferenceView_page);
        pushButton_westDiv->setObjectName(QStringLiteral("pushButton_westDiv"));
        pushButton_westDiv->setGeometry(QRect(650, 360, 161, 91));
        pushButton_westDiv->setFont(font4);
        pushButton_westDiv->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        pushButton_westDiv->setIconSize(QSize(100, 100));
        pushButton_southDiv = new QPushButton(conferenceView_page);
        pushButton_southDiv->setObjectName(QStringLiteral("pushButton_southDiv"));
        pushButton_southDiv->setGeometry(QRect(650, 260, 161, 91));
        pushButton_southDiv->setFont(font4);
        pushButton_southDiv->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        pushButton_southDiv->setIconSize(QSize(100, 100));
        pushButton_eastDiv = new QPushButton(conferenceView_page);
        pushButton_eastDiv->setObjectName(QStringLiteral("pushButton_eastDiv"));
        pushButton_eastDiv->setGeometry(QRect(450, 360, 161, 91));
        pushButton_eastDiv->setFont(font4);
        pushButton_eastDiv->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        pushButton_eastDiv->setIconSize(QSize(100, 100));
        pushButton_home = new QPushButton(conferenceView_page);
        pushButton_home->setObjectName(QStringLiteral("pushButton_home"));
        pushButton_home->setGeometry(QRect(760, 0, 91, 31));
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
        tableView_Stadiums->setGeometry(QRect(10, 10, 441, 441));
        tableView_Stadiums->setStyleSheet(QStringLiteral("color: white; background: rgba(0, 0, 0, 127)"));
        tableView_Stadiums->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_Stadiums->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_Stadiums->setSelectionBehavior(QAbstractItemView::SelectColumns);
        pushButton_home_2 = new QPushButton(stadium_page);
        pushButton_home_2->setObjectName(QStringLiteral("pushButton_home_2"));
        pushButton_home_2->setGeometry(QRect(760, 0, 91, 31));
        pushButton_home_2->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        backgroundLogo_label_2 = new QLabel(stadium_page);
        backgroundLogo_label_2->setObjectName(QStringLiteral("backgroundLogo_label_2"));
        backgroundLogo_label_2->setGeometry(QRect(410, -10, 451, 471));
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
        comboBox_teamDropdown->setGeometry(QRect(10, 10, 141, 21));
        tableView_allTeamInfo = new QTableView(allTeamInfo_page);
        tableView_allTeamInfo->setObjectName(QStringLiteral("tableView_allTeamInfo"));
        tableView_allTeamInfo->setGeometry(QRect(10, 40, 831, 411));
        tableView_allTeamInfo->setStyleSheet(QStringLiteral("color: white; background: rgba(0, 0, 0, 127)"));
        tableView_allTeamInfo->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_allTeamInfo->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_allTeamInfo->setSelectionBehavior(QAbstractItemView::SelectColumns);
        pushButton_home_3 = new QPushButton(allTeamInfo_page);
        pushButton_home_3->setObjectName(QStringLiteral("pushButton_home_3"));
        pushButton_home_3->setGeometry(QRect(760, 0, 91, 31));
        pushButton_home_3->setStyleSheet(QStringLiteral("background: rgba(0, 0, 0, 127)"));
        stackedWidget->addWidget(allTeamInfo_page);
        backgroundField_label = new QLabel(centralWidget);
        backgroundField_label->setObjectName(QStringLiteral("backgroundField_label"));
        backgroundField_label->setGeometry(QRect(0, 0, 851, 481));
        backgroundField_label->setPixmap(QPixmap(QString::fromUtf8(":/files/images/NFLField.jpg")));
        backgroundField_label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        MainWindow->setCentralWidget(centralWidget);
        backgroundField_label->raise();
        stackedWidget->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 851, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        backgroundLogo_label->setText(QString());
        pushButton_viewConferences->setText(QApplication::translate("MainWindow", "View Conferences", nullptr));
        pushButton_Stadiums->setText(QApplication::translate("MainWindow", "View Stadiums", nullptr));
        pushButton_3->setText(QString());
        pushButton_TeamInfo->setText(QApplication::translate("MainWindow", "View Team Info", nullptr));
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
        backgroundField_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
