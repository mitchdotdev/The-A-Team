#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidget->currentWidget()->setWindowOpacity(0);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_pushButton_viewConferences_clicked() { ui->stackedWidget->setCurrentIndex(1); }

void MainWindow::on_pushButton_home_clicked() { ui->stackedWidget->setCurrentIndex(0); }

void MainWindow::on_pushButton_viewAFC_clicked()
{
    QSqlQueryModel* qModel = new QSqlQueryModel;

    dbQuery.setConference("American Football Conference");
    qModel->setQuery(dbQuery.queryConference(dbQuery.getConference()));
    ui->tableView_conferences->setModel(qModel);

    qModel->setHeaderData(0, Qt::Horizontal, tr("Team Name"));
    ui->tableView_conferences->setColumnWidth(0, ui->tableView_conferences->width());
}

void MainWindow::on_pushButton_viewNFC_clicked()
{
    QSqlQueryModel* qModel = new QSqlQueryModel;

    dbQuery.setConference("National Football Conference");
    qModel->setQuery(dbQuery.queryConference(dbQuery.getConference()));
    ui->tableView_conferences->setModel(qModel);

    qModel->setHeaderData(0, Qt::Horizontal, tr("Team Name"));
    ui->tableView_conferences->setColumnWidth(0, ui->tableView_conferences->width());
}

void MainWindow::on_pushButton_northDiv_clicked()
{
    QSqlQueryModel* qModel = new QSqlQueryModel;

    dbQuery.setDivision("North");
    qModel->setQuery(dbQuery.queryDivision(dbQuery.getDivision()));
    ui->tableView_conferences->setModel(qModel);

    qModel->setHeaderData(0, Qt::Horizontal, tr("Team Name"));
    ui->tableView_conferences->setColumnWidth(0, ui->tableView_conferences->width());
}

void MainWindow::on_pushButton_southDiv_clicked()
{
    QSqlQueryModel* qModel = new QSqlQueryModel;

    dbQuery.setDivision("South");
    qModel->setQuery(dbQuery.queryDivision(dbQuery.getDivision()));
    ui->tableView_conferences->setModel(qModel);

    qModel->setHeaderData(0, Qt::Horizontal, tr("Team Name"));
    ui->tableView_conferences->setColumnWidth(0, ui->tableView_conferences->width());
}

void MainWindow::on_pushButton_eastDiv_clicked()
{
    QSqlQueryModel* qModel = new QSqlQueryModel;

    dbQuery.setDivision("East");
    qModel->setQuery(dbQuery.queryDivision(dbQuery.getDivision()));
    ui->tableView_conferences->setModel(qModel);

    qModel->setHeaderData(0, Qt::Horizontal, tr("Team Name"));
    ui->tableView_conferences->setColumnWidth(0, ui->tableView_conferences->width());
}

void MainWindow::on_pushButton_westDiv_clicked()
{
    QSqlQueryModel* qModel = new QSqlQueryModel;

    dbQuery.setDivision("West");
    qModel->setQuery(dbQuery.queryDivision(dbQuery.getDivision()));
    ui->tableView_conferences->setModel(qModel);

    qModel->setHeaderData(0, Qt::Horizontal, tr("Team Name"));
    ui->tableView_conferences->setColumnWidth(0, ui->tableView_conferences->width());
}
