#include "dbmanager.h"

dbmanager::dbmanager()
{
    programDatabase = QSqlDatabase::addDatabase("QSQLITE");                             // adds the database
    programDatabase.setDatabaseName(DB_PATH);                                           // sets database path

    if(QFile::exists(DB_PATH)) {                                                        // checks if the path exists
        if(!programDatabase.open())                                                     // error check if it is not open
            qDebug() << "ERROR: Could not open connection to database.";                // output error message
        else
            qDebug() << "Database connection is open.";                                 // output success message
    }
    else
        qDebug() << "Cannot open database because the database path does not exist.";   // output fail message
}

dbmanager::~dbmanager()
{
    if(programDatabase.open())
        programDatabase.close();
    qDebug() << "Destroying database manager";
}

dbmanager& dbmanager::instance()
{
    static dbmanager dmInstance;
    return dmInstance;
}

QSqlDatabase dbmanager::getDatabase() const { return programDatabase; }
