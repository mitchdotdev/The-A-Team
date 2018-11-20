#ifndef CONSTANTS_H
#define CONSTANTS_H
#include <QDir>
#include <QDebug>
#include <QSysInfo>

// Defines the database path for different system architectures
#define Path (QSysInfo::kernelType() == "winnt" ? "\\NFLDB.db" : "/NFLDB.db")

const QString DB_PATH = QDir::currentPath() + Path;  // DB PATH

#endif // CONSTANTS_H
