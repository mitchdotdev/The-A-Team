#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <dbmanager.h>
#include "querydb.h"

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

private:
    Ui::MainWindow *ui;
    queryDB dbQuery;
};

#endif // MAINWINDOW_H
