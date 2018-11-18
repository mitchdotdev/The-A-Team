#ifndef CONSTANTS_H
#define CONSTANTS_H
#include <QDir>
#include <QString>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QSysInfo>
//#include <QMessageBox>

#define Path (QSysInfo::kernelType() == "winnt" ? "\\NFLDB.db" : "/NFLDB.db")

const QString DB_PATH = QDir::currentPath() + Path;  // DB PATH

#endif // CONSTANTS_H
