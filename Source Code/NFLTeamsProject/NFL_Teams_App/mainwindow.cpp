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

// Goes to the home page
void MainWindow::on_pushButton_home_clicked()   { ui->stackedWidget->setCurrentIndex(0); }
void MainWindow::on_pushButton_home_2_clicked() { ui->stackedWidget->setCurrentIndex(0); }
void MainWindow::on_pushButton_home_3_clicked() { ui->stackedWidget->setCurrentIndex(0); }
void MainWindow::on_pushButton_home_4_clicked() { ui->stackedWidget->setCurrentIndex(0); }
void MainWindow::on_pushButton_home_5_clicked() { ui->stackedWidget->setCurrentIndex(0); }
void MainWindow::on_pushButton_home_6_clicked() { ui->stackedWidget->setCurrentIndex(0); }

// Goes to view conferences page
void MainWindow::on_pushButton_viewConferences_clicked() { ui->stackedWidget->setCurrentIndex(1); }

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

// Goes to stadium page
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


void MainWindow::on_pushButton_TeamInfo_clicked()
{
    populateTeamDropdown();
    populateAllTeamInfo("All Teams");
    ui->comboBox_SouvenirDropDown->hide();
    ui->label_sortBy->hide();
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
    ui->comboBox_SouvenirDropDown->hide();
    ui->label_sortBy->hide();
    if (ui->comboBox_teamDropdown->count() >= numberOfTeams)
        populateAllTeamInfo(arg1);
}

void MainWindow::on_pushButton_advancedQuery_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
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
        if(arg1 == "SeatingCapacity"){
            QListWidgetItem *listItem1 = new QListWidgetItem("All");
            listItem1->setCheckState(Qt::Unchecked);
            ui->listWidget_AdvancedQueryCriteria->addItem(listItem1);
        }
        else if(arg1 == "StarPlayer"){
            QListWidgetItem *listItem2 = new QListWidgetItem("ALL");
            listItem2->setCheckState(Qt::Unchecked);
            ui->listWidget_AdvancedQueryCriteria->addItem(listItem2);
        }
        while (query.next())
        {
            QListWidgetItem *listItem = new QListWidgetItem(query.value(0).toString());
            listItem->setCheckState(Qt::Unchecked);
            ui->listWidget_AdvancedQueryCriteria->addItem(listItem);
        }

    }
    else
    {
        ui->listWidget_AdvancedQueryCriteria->addItem("Failed to Query Database");
    }
    ui->listWidget_AdvancedQueryCriteria->sortItems();
}

void MainWindow::on_pushButton_back_clicked() { on_pushButton_advancedQuery_clicked(); }

void MainWindow::on_pushButton_QuerySelection_clicked()
{
    ui->lineEdit_total->hide();
    ui->label_Open->hide();
    ui->label_Seating->hide();
    ui->label_Grass->hide();

    QStringList checkedData;

    for (int i = 0; i < ui->listWidget_AdvancedQueryCriteria->model()->rowCount(); i++)
        if (ui->listWidget_AdvancedQueryCriteria->item(i)->checkState())
            checkedData.append(ui->listWidget_AdvancedQueryCriteria->item(i)->text());

    if (checkedData.size() <= 0)
        QMessageBox::warning(this, "Error", "Please Select At Least One Criterion!");
    else if(checkedData.at(0) == "ALL"){
        ui->stackedWidget->setCurrentIndex(6);
        QSqlQueryModel* model = new QSqlQueryModel;
        model->setQuery("SELECT StarPlayer, TeamName FROM TeamInfo ORDER BY TeamName");


        ui->tableView_advancedQueryResults->setModel(model);
        ui->tableView_advancedQueryResults->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        ui->tableView_advancedQueryResults->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
        ui->tableView_advancedQueryResults->setSortingEnabled(true);
    }
    else if(checkedData.at(0) == "All"){
        ui->lineEdit_total->show();
        ui->label_Seating->show();
        ui->stackedWidget->setCurrentIndex(6);
        QSqlQueryModel* model = new QSqlQueryModel;
        QSqlQueryModel* model1 = new QSqlQueryModel;
        model->setQuery("SELECT StadiumName, TeamName, SeatingCapacity FROM TeamInfo ORDER BY SeatingCapacity");
        model1->setQuery("SELECT sum(distinct SeatingCapacity) FROM TeamInfo");


        ui->tableView_advancedQueryResults->setModel(model);
        ui->tableView_advancedQueryResults->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        ui->tableView_advancedQueryResults->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
        ui->tableView_advancedQueryResults->setSortingEnabled(true);

        ui->lineEdit_total->insert(model1->record(0).value(0).toString());
    }
    else if(checkedData.at(0) == "Open"){
        ui->lineEdit_total->show();
        ui->label_Open->show();
        ui->stackedWidget->setCurrentIndex(6);
        QSqlQueryModel* model = new QSqlQueryModel;
        QSqlQueryModel* model1 = new QSqlQueryModel;

        model->setQuery("SELECT StadiumName, TeamName FROM TeamInfo WHERE StadiumRoofType = 'Open' ORDER BY StadiumName");
        model1->setQuery("SELECT count(distinct StadiumName) FROM TeamInfo WHERE StadiumRoofType = 'Open'");

        ui->tableView_advancedQueryResults->setModel(model);
        ui->tableView_advancedQueryResults->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        ui->tableView_advancedQueryResults->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
        ui->tableView_advancedQueryResults->setSortingEnabled(true);

        ui->lineEdit_total->insert(model1->record(0).value(0).toString());
    }
    else if(checkedData.at(0) == "Bermuda Grass"){
        ui->lineEdit_total->show();
        ui->label_Grass->show();
        ui->stackedWidget->setCurrentIndex(6);
        QSqlQueryModel* model = new QSqlQueryModel;
        QSqlQueryModel* model1 = new QSqlQueryModel;

        model->setQuery("SELECT TeamName, SurfaceType FROM TeamInfo WHERE SurfaceType = 'Bermuda Grass' ORDER BY TeamName");
        model1->setQuery("SELECT count(distinct StadiumName) FROM TeamInfo WHERE SurfaceType = 'Bermuda Grass'");

        ui->tableView_advancedQueryResults->setModel(model);
        ui->tableView_advancedQueryResults->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        ui->tableView_advancedQueryResults->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
        ui->tableView_advancedQueryResults->setSortingEnabled(true);

        ui->lineEdit_total->insert(model1->record(0).value(0).toString());

    }
    else
    {
        ui->stackedWidget->setCurrentIndex(6);

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


// Goes to trip planning page
void MainWindow::on_pushButton_PlanTrip_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    ui->listWidget_stopList->clear();
    ui->label_distance->clear();
    ui->comboBox_TeamNames->clear();

    QSqlQuery query;
    query.exec("SELECT DISTINCT StadiumName "
               "FROM TeamInfo");
    while(query.next())
        ui->comboBox_TeamNames->addItem(query.value(0).toString());

    Map<QString>::instance().clearContents();
    Map<QString>::instance().insertNode(Map<QString>::instance().getSize(), ui->comboBox_TeamNames->itemText(0));

//    Map<QString>::instance().print();

    QVector<QString> vertices;
    query.exec("SELECT DISTINCT BeginningStadium "
               "FROM Distances");
    while(query.next())
        vertices.push_back(query.value(0).toString());

    // Creates graph object with the size of the vertices
    Graph<QString, int> g(vertices.size());

    // Populates the graphs vertices
    for(int i = 0; i < vertices.size(); ++i)
        g.addVertex(Vertex<QString>(vertices.at(i)));

    query.exec("SELECT BeginningStadium, EndingStadium, Distance "
               "FROM Distances");
    while(query.next())
        g.addEdge(Edge<QString, int>(query.value(0).toString(), query.value(1).toString(), query.value(2).toInt()));

    QString MSTMileage;
    MSTMileage.setNum(g.primMST());
    ui->label_mileage->setText("MST Associated Mileage: " + MSTMileage);

}

void MainWindow::on_pushButton_3_clicked()
{
    QVector<QString> vertices;
    QSqlQuery query;

    query.exec("SELECT DISTINCT BeginningStadium "
               "FROM Distances");
    while(query.next())
        vertices.push_back(query.value(0).toString());

    // Creates graph object with the size of the vertices
    Graph<QString, int> g(vertices.size());

    // Populates the graphs vertices
    for(int i = 0; i < vertices.size(); ++i)
        g.addVertex(Vertex<QString>(vertices.at(i)));

    query.exec("SELECT BeginningStadium, EndingStadium, Distance "
               "FROM Distances");
    while(query.next())
        g.addEdge(Edge<QString, int>(query.value(0).toString(), query.value(1).toString(), query.value(2).toInt()));

    g.dijkstra(g.findVertexPosition("Heinz Field"), -1);
    g.primMST();
}

void MainWindow::on_comboBox_TeamNames_currentTextChanged(const QString &arg1)
{
    ui->listWidget_stopList->clear();
    ui->listWidget_stopList->show();

    Trips t;
    QStringList stadiumName = t.addStopsList( arg1 );
    for(int i = 0; i < stadiumName.size(); ++i)
        ui->listWidget_stopList->addItem( stadiumName.at(i) );

    Map<QString>::instance().clearContents();
    Map<QString>::instance().insertNode(Map<QString>::instance().getSize(), arg1);
}

void MainWindow::on_listWidget_stopList_itemClicked(QListWidgetItem *item)
{
    if( ui->listWidget_stopList->currentItem()->text().contains("✓", Qt::CaseSensitivity::CaseInsensitive) )
    {
        ui->listWidget_stopList->currentItem()->setText(item->text().remove(" ✓", Qt::CaseSensitivity::CaseInsensitive));
        Map<QString>::instance().removeHash(item->text());
    }
    else
    {
        Map<QString>::instance().insertNode(Map<QString>::instance().getSize(), item->text());
        ui->listWidget_stopList->currentItem()->setText(item->text().append(+ " ✓"));
    }
}

void MainWindow::on_pushButton_SouvenirList_clicked()
{
    ui->comboBox_SouvenirDropDown->show();
    ui->label_sortBy->show();
    QSqlQuery query;
    QSqlQuery query1;
    numberOfColumns = 0;

    ui->comboBox_AdvancedQuery->clear();
    query.exec("SELECT DISTINCT TeamName FROM SouvenirList");

    while (query.next())
    {
        ui->comboBox_SouvenirDropDown->addItem(query.value(0).toString());
    }
    query1.prepare("SELECT Souvenir, Price FROM SouvenirList WHERE TeamName = :TeamName");
    query1.bindValue(":TeamName", "Arizona Cardinals");
    query1.exec();
    QSqlQueryModel* model = new QSqlQueryModel;
    model->setQuery(query1);
    ui->tableView_allTeamInfo->setModel(model);
}

void MainWindow::on_comboBox_SouvenirDropDown_currentIndexChanged(const QString &arg1)
{

    QSqlQueryModel* model = new QSqlQueryModel;
    QSqlQuery query;
    query.prepare("SELECT Souvenir, Price FROM SouvenirList WHERE TeamName = :TeamName");
    query.bindValue(":TeamName", arg1);
    query.exec();
    model->setQuery(query);
    ui->tableView_allTeamInfo->setModel(model);
}

void MainWindow::on_pushButton_orderSelected_clicked()
{
    Map<QString>::instance().print();
    ui->listWidget_stopList->clear();
    ui->label_distance->clear();



    QVector<QString> vertices;
    QSqlQuery query;

    query.exec("SELECT DISTINCT BeginningStadium "
               "FROM Distances");
    while(query.next())
        vertices.push_back(query.value(0).toString());

    // Creates graph object with the size of the vertices
    Graph<QString, int> g(vertices.size());

    // Populates the graphs vertices
    for(int i = 0; i < vertices.size(); ++i)
        g.addVertex(Vertex<QString>(vertices.at(i)));

    query.exec("SELECT BeginningStadium, EndingStadium, Distance "
               "FROM Distances");
    while(query.next())
        g.addEdge(Edge<QString, int>(query.value(0).toString(), query.value(1).toString(), query.value(2).toInt()));


    QSqlQuery q;
    int distance = 0;

    q.exec("CREATE TABLE IF NOT EXISTS temp( Stadium TEXT)");
    int index = 0;
    q.prepare("INSERT INTO temp(Stadium) "
              "VALUES(:stad)");
    int j = 0;
    bool kys = false;
    while( index < Map<QString>::instance().getSize() )
    {
        if( !Map<QString>::instance().mapTable()[index].isEmpty() )
        {
            qDebug() << Map<QString>::instance().mapTable()[index].getKey() << " - " << Map<QString>::instance().mapTable()[index].getValue();
            q.bindValue(":stad", Map<QString>::instance().mapTable().at(index).getValue());
            q.exec();
            if(!kys)
            {
                j = index;
                kys = true;
            }
            else
            {
                distance += g.dijkstra(g.findVertexPosition(Map<QString>::instance().mapTable()[j].getValue()), g.findVertexPosition(Map<QString>::instance().mapTable()[index].getValue()));
                j = index;
            }

        }
        ++index;
    }

    QSqlQueryModel* mod = new QSqlQueryModel;
    q.exec("SELECT * FROM temp");
    mod->setQuery(q);
    ui->tableView_trip->setModel(mod);


    q.exec("DROP TABLE temp");
    Map<QString>::instance().clearContents();

    QString out = QString("Distance Traveled: %1").arg(distance);

    ui->label_distance->setText(out);
}
