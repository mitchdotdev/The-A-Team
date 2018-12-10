#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QListWidget>
#include <QMessageBox>
#include <QSqlTableModel>
#include "dbmanager.h"
#include "conferenceview.h"
#include "graph.h"
#include "map.h"
#include "trips.h"

struct CurrentSortMethod
{
    int column;
    Qt::SortOrder sort;
};

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    Ui::MainWindow *ui;

    void populateTeamDropdown();
    void populateSTeamDropdown();
    void populateS2TeamDropdown();
    void populateAllTeamInfo(const QString&);
    template <class Type>
    void freeAllocatedMemory(Type *pointer);
    void setUpAdvancedQuery();
    conferenceView dbQuery;
    int numberOfTeams;
    int numberOfColumns;
    QSqlTableModel *allTeamInfoTable;
    QSqlTableModel *stadiumsTable;
    QSqlTableModel *advancedQueryTable;
    QSqlTableModel *souvenirTable;
    CurrentSortMethod teamInfoTableMethod;
    CurrentSortMethod stadiumTableMethod;
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_home_clicked();
    void on_pushButton_home_2_clicked();
    void on_pushButton_home_3_clicked();
    void on_pushButton_home_4_clicked();
    void on_pushButton_home_5_clicked();
    void on_pushButton_home_6_clicked();
    void on_pushButton_home_7_clicked();
    void on_pushButton_home_8_clicked();

    void on_pushButton_viewConferences_clicked();
    void on_pushButton_viewAFC_clicked();
    void on_pushButton_viewNFC_clicked();
    void on_pushButton_northDiv_clicked();
    void on_pushButton_southDiv_clicked();
    void on_pushButton_eastDiv_clicked();
    void on_pushButton_westDiv_clicked();

    void on_pushButton_Stadiums_clicked();

    void on_pushButton_TeamInfo_clicked();
    void on_comboBox_teamDropdown_currentIndexChanged(const QString &arg1);
    void on_pushButton_SouvenirList_clicked();
    void on_comboBox_SouvenirDropDown_currentIndexChanged(const QString &arg1);
    void on_pushButton_advancedQuery_clicked();
    void on_comboBox_AdvancedQuery_currentIndexChanged(const QString &arg1);
    void on_pushButton_back_clicked();
    void on_pushButton_QuerySelection_clicked();

    void on_pushButton_Edit_clicked();
    void on_pushButton_Souvenirs_clicked();
    void on_pushButton_Login_clicked();
    void on_pushButton_Souvenir_clicked();
    void on_pushButton_Delete_clicked();
    void on_pushButton_Add_clicked();
    void on_pushButton_Modify_clicked();
    void on_pushButton_AddTeam_clicked();
    void on_comboBox_teamSouvenirs_currentIndexChanged(const QString &selectedTeam);

    void on_pushButton_3_clicked();

    void on_pushButton_PlanTrip_clicked();
    void on_comboBox_TeamNames_currentTextChanged(const QString &arg1);
    void on_listWidget_stopList_itemClicked(QListWidgetItem *item);

    void on_pushButton_orderSelected_clicked();
};
template <class Type>
void MainWindow::freeAllocatedMemory(Type *pointer)
{
    if (pointer != nullptr)
        delete pointer;
}

#endif // MAINWINDOW_H
