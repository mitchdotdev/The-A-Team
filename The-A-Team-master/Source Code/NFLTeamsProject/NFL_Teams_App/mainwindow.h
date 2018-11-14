#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dbmanager.h"
#include "conferenceview.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pushButton_viewConferences_clicked();

    void on_pushButton_home_clicked();

    void on_pushButton_viewAFC_clicked();

    void on_pushButton_viewNFC_clicked();

    void on_pushButton_northDiv_clicked();

    void on_pushButton_southDiv_clicked();

    void on_pushButton_eastDiv_clicked();

    void on_pushButton_westDiv_clicked();

    void on_pushButton_Stadiums_clicked();

    void on_pushButton_home_2_clicked();

    void on_pushButton_home_3_clicked();

    void on_pushButton_TeamInfo_clicked();

    void on_comboBox_teamDropdown_currentIndexChanged(const QString &arg1);

private:
    void populateTeamDropdown();
    void populateAllTeamInfo(const QString&);

    Ui::MainWindow *ui;
    conferenceView dbQuery;
    int numberOfTeams;
};

#endif // MAINWINDOW_H
