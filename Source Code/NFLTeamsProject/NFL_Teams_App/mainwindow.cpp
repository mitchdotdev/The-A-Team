#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidget->currentWidget()->setWindowOpacity(0);
    numberOfTeams = 0;
    allTeamInfoTable = nullptr;
    stadiumsTable = nullptr;
    teamInfoTableMethod = { -1, Qt::SortOrder::DescendingOrder };
    stadiumTableMethod = { -1, Qt::SortOrder::DescendingOrder };
}

MainWindow::~MainWindow()
{
    freeAllocatedMemory(allTeamInfoTable);
    freeAllocatedMemory(stadiumsTable);
    delete ui;
}

// Goes to view conferences page
void MainWindow::on_pushButton_viewConferences_clicked() { ui->stackedWidget->setCurrentIndex(1); }

// Goes to the home page
void MainWindow::on_pushButton_home_clicked() { ui->stackedWidget->setCurrentIndex(0); }

/*
 * on_pushButton_viewAFC_clicked(),
 * on_pushButton_viewNFC_clicked(),
 * on_pushButton_northDiv_clicked(),
 * on_pushButton_southDiv_clicked(),
 * on_pushButton_eastDiv_clicked(), and
 * on_pushButton_westDiv_clicked() set tableView_conferences model to the returned QSqlQueryModel from the populateView function
 */

void MainWindow::on_pushButton_viewAFC_clicked()
{
    ui->tableView_conferences->setModel(dbQuery.populateView("American Football Conference", 0));
    ui->tableView_conferences->setColumnWidth(0, ui->tableView_conferences->width());
}

void MainWindow::on_pushButton_viewNFC_clicked()
{
    ui->tableView_conferences->setModel(dbQuery.populateView("National Football Conference", 0));
    ui->tableView_conferences->setColumnWidth(0, ui->tableView_conferences->width());
}

void MainWindow::on_pushButton_northDiv_clicked()
{
    ui->tableView_conferences->setModel(dbQuery.populateView("North", 1));
    ui->tableView_conferences->setColumnWidth(0, ui->tableView_conferences->width());
}

void MainWindow::on_pushButton_southDiv_clicked()
{
    ui->tableView_conferences->setModel(dbQuery.populateView("South", 1));
    ui->tableView_conferences->setColumnWidth(0, ui->tableView_conferences->width());
}

void MainWindow::on_pushButton_eastDiv_clicked()
{
    ui->tableView_conferences->setModel(dbQuery.populateView("East", 1));
    ui->tableView_conferences->setColumnWidth(0, ui->tableView_conferences->width());
}

void MainWindow::on_pushButton_westDiv_clicked()
{
    ui->tableView_conferences->setModel(dbQuery.populateView("West", 1));
    ui->tableView_conferences->setColumnWidth(0, ui->tableView_conferences->width());
}

void MainWindow::on_pushButton_Stadiums_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    QSqlTableModel *stadiumsTable = new QSqlTableModel(this, dbmanager::instance().getDatabase());

    stadiumsTable->setTable("TeamInfo");
    stadiumsTable->setSort(0, Qt::SortOrder::AscendingOrder);
    stadiumsTable->select();

    ui->tableView_Stadiums->setModel(stadiumsTable);

    for (int i = 2; i < 9; i++) { ui->tableView_Stadiums->hideColumn(i); }

    ui->tableView_Stadiums->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView_Stadiums->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView_Stadiums->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
}

void MainWindow::on_pushButton_home_2_clicked() { ui->stackedWidget->setCurrentIndex(0); }

void MainWindow::on_pushButton_home_3_clicked() { ui->stackedWidget->setCurrentIndex(0); }

void MainWindow::on_pushButton_TeamInfo_clicked()
{
    populateTeamDropdown();
    populateAllTeamInfo("All Teams");
}

void MainWindow::populateTeamDropdown()
{
    QSqlQuery query;
    numberOfTeams = 0;

    query.exec("SELECT TeamName FROM TeamInfo;");

    ui->comboBox_teamDropdown->clear();

    ui->comboBox_teamDropdown->addItem("All Teams");
    numberOfTeams++;

    while (query.next())
    {
        ui->comboBox_teamDropdown->addItem(query.value(0).toString());
        numberOfTeams++;
    }
}

void MainWindow::populateAllTeamInfo(const QString &selectedTeam)
{
    ui->stackedWidget->setCurrentIndex(3);
    ui->label_currItem->hide();

    QSqlTableModel *allTeamInfoTable = new QSqlTableModel(this, dbmanager::instance().getDatabase());

    allTeamInfoTable->setTable("TeamInfo");
    allTeamInfoTable->setHeaderData(0, Qt::Horizontal, QObject::tr("Team"));
    allTeamInfoTable->setHeaderData(1, Qt::Horizontal, QObject::tr("Stadium"));
    allTeamInfoTable->setHeaderData(2, Qt::Horizontal, QObject::tr("Capacity"));
    allTeamInfoTable->setHeaderData(6, Qt::Horizontal, QObject::tr("Surface"));
    allTeamInfoTable->setHeaderData(7, Qt::Horizontal, QObject::tr("Roof"));

    if (selectedTeam != "All Teams")
        allTeamInfoTable->setFilter("TeamName=\""+selectedTeam+"\"");
    else
        allTeamInfoTable->setFilter("");

    allTeamInfoTable->setSort(4, Qt::SortOrder::AscendingOrder);

    allTeamInfoTable->select();

    ui->tableView_allTeamInfo->setModel(allTeamInfoTable);

    ui->tableView_allTeamInfo->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView_allTeamInfo->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView_allTeamInfo->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);

}

void MainWindow::on_comboBox_teamDropdown_currentIndexChanged(const QString &arg1)
{
    if (ui->comboBox_teamDropdown->count() >= numberOfTeams)
        populateAllTeamInfo(arg1);
}

template <class Type>
void MainWindow::freeAllocatedMemory(Type *pointer)
{
    if (pointer != nullptr)
        delete pointer;
}

void MainWindow::on_tableView_allTeamInfo_doubleClicked(const QModelIndex &index)
{
    if (teamInfoTableMethod.column == index.column())
    {
        if (teamInfoTableMethod.sort == Qt::SortOrder::AscendingOrder)
            teamInfoTableMethod.sort = Qt::SortOrder::DescendingOrder;
        else
            teamInfoTableMethod.sort = Qt::SortOrder::AscendingOrder;
    }

    else
    {
        teamInfoTableMethod.column = index.column();
        teamInfoTableMethod.sort = Qt::SortOrder::AscendingOrder;
    }


    ui->tableView_allTeamInfo->sortByColumn(teamInfoTableMethod.column, teamInfoTableMethod.sort);
}

void MainWindow::on_tableView_Stadiums_doubleClicked(const QModelIndex &index)
{
    if (stadiumTableMethod.column == index.column())
    {
        if (stadiumTableMethod.sort == Qt::SortOrder::AscendingOrder)
            stadiumTableMethod.sort = Qt::SortOrder::DescendingOrder;
        else
            stadiumTableMethod.sort = Qt::SortOrder::AscendingOrder;
    }

    else
    {
        stadiumTableMethod.column = index.column();
        stadiumTableMethod.sort = Qt::SortOrder::AscendingOrder;
    }

    ui->tableView_Stadiums->sortByColumn(stadiumTableMethod.column, stadiumTableMethod.sort);
}

void MainWindow::on_tableView_allTeamInfo_clicked(const QModelIndex &index)
{
    ui->label_currItem->show();
    ui->label_currItem->setText(index.data(Qt::DisplayRole).toString());
}
