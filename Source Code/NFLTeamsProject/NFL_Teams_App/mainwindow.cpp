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
    numberOfColumns = 0;
    allTeamInfoTable = nullptr;
    stadiumsTable = nullptr;
    advancedQueryTable = nullptr;
    teamInfoTableMethod = { -1, Qt::SortOrder::DescendingOrder };
    stadiumTableMethod = { -1, Qt::SortOrder::DescendingOrder };
}

MainWindow::~MainWindow()
{
    freeAllocatedMemory(allTeamInfoTable);
    freeAllocatedMemory(stadiumsTable);
    freeAllocatedMemory(advancedQueryTable);
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

    freeAllocatedMemory(stadiumsTable);
    QSqlTableModel *stadiumsTable = new QSqlTableModel(this, dbmanager::instance().getDatabase());

    stadiumsTable->setTable("TeamInfo");
    stadiumsTable->setSort(0, Qt::SortOrder::AscendingOrder);
    stadiumsTable->select();

    ui->tableView_Stadiums->setModel(stadiumsTable);

    for (int i = 2; i < 9; i++) { ui->tableView_Stadiums->hideColumn(i); }

    ui->tableView_Stadiums->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView_Stadiums->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView_Stadiums->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->tableView_Stadiums->setSortingEnabled(true);
}

void MainWindow::on_pushButton_home_2_clicked() { ui->stackedWidget->setCurrentIndex(0); }

void MainWindow::on_pushButton_home_3_clicked() { ui->stackedWidget->setCurrentIndex(0); }

void MainWindow::on_pushButton_home_4_clicked() { ui->stackedWidget->setCurrentIndex(0); }

void MainWindow::on_pushButton_home_5_clicked() { ui->stackedWidget->setCurrentIndex(0); }

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

    freeAllocatedMemory(allTeamInfoTable);
    QSqlTableModel *allTeamInfoTable = new QSqlTableModel(this, dbmanager::instance().getDatabase());

    allTeamInfoTable->setTable("TeamInfo");

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
    ui->tableView_allTeamInfo->setSortingEnabled(true);
}

void MainWindow::on_comboBox_teamDropdown_currentIndexChanged(const QString &arg1)
{
    if (ui->comboBox_teamDropdown->count() >= numberOfTeams)
        populateAllTeamInfo(arg1);
}

void MainWindow::on_pushButton_advancedQuery_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    setUpAdvancedQuery();
}

void MainWindow::setUpAdvancedQuery()
{
    QSqlQuery query;
    numberOfColumns = 0;

    ui->comboBox_AdvancedQuery->clear();
    query.exec("PRAGMA table_info(teamInfo);");

    while (query.next())
    {
        ui->comboBox_AdvancedQuery->addItem(query.value(1).toString());
        numberOfColumns++;
    }
}

void MainWindow::on_comboBox_AdvancedQuery_currentIndexChanged(const QString &arg1)
{
    ui->listWidget_AdvancedQueryCriteria->clear();

    if (ui->comboBox_AdvancedQuery->count() >= numberOfColumns)
    {
        QSqlQuery query;
        query.exec("SELECT DISTINCT "+arg1+" FROM TeamInfo;");

        while (query.next())
        {
            QListWidgetItem *listItem = new QListWidgetItem(query.value(0).toString());
            listItem->setCheckState(Qt::Unchecked);
            ui->listWidget_AdvancedQueryCriteria->addItem(listItem);
        }
    }

    else
        ui->listWidget_AdvancedQueryCriteria->addItem("Failed to Query Database");

    ui->listWidget_AdvancedQueryCriteria->sortItems();
}

void MainWindow::on_pushButton_back_clicked() { on_pushButton_advancedQuery_clicked(); }

void MainWindow::on_pushButton_QuerySelection_clicked()
{
    QStringList checkedData;

    for (int i = 0; i < ui->listWidget_AdvancedQueryCriteria->model()->rowCount(); i++)
        if (ui->listWidget_AdvancedQueryCriteria->item(i)->checkState())
            checkedData.append(ui->listWidget_AdvancedQueryCriteria->item(i)->text());

    if (checkedData.size() <= 0)
        QMessageBox::warning(this, "Error", "Please Select At Least One Criterion!");
    else
    {
        ui->stackedWidget->setCurrentIndex(5);

        freeAllocatedMemory(advancedQueryTable);
        advancedQueryTable = new QSqlTableModel(this, dbmanager::instance().getDatabase());

        advancedQueryTable->setTable("TeamInfo");

        QString selectedColumn = ui->comboBox_AdvancedQuery->currentText();
        QString filter = selectedColumn+"=\""+checkedData.front()+"\"";
        checkedData.pop_front();

        while (checkedData.size() > 0)
        {
            filter += " OR " +selectedColumn+"=\""+checkedData.front()+"\"";
            checkedData.pop_front();
        }

        advancedQueryTable->setFilter(filter);
        advancedQueryTable->select();

        ui->tableView_advancedQueryResults->setModel(advancedQueryTable);
        ui->tableView_advancedQueryResults->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        ui->tableView_advancedQueryResults->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
        ui->tableView_advancedQueryResults->setSortingEnabled(true);
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    QSqlQuery query;
    query.exec("SELECT DISTINCT BeginningStadium "
               "FROM Distances");

    QVector<QString> vertices;
    while(query.next())
        vertices.push_back(query.value(0).toString());

    // Creates graph object with the size of the vertices
    Graph<QString, int> g(vertices.size());

    // Populates the graphs vertices
    for(int i = 0; i < vertices.size(); ++i)
        g.addVertex(new Vertex<QString>(vertices.at(i)));

    query.exec("SELECT DISTINCT BeginningStadium, EndingStadium, Distance "
               "FROM Distances");

    while(query.next())
        g.addEdge(new Edge<QString, int>(query.value(0).toString(), query.value(1).toString(), query.value(2).toInt()));

    g.dijkstra(g.findVertexPosition("Heinz Field"));
    g.primMST();
}
