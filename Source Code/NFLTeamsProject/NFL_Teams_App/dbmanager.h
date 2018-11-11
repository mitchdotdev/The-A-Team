#ifndef DBMANAGER_H
#define DBMANAGER_H
#include <QSqlDatabase>     /// Used for synatax for qt (SQL)
#include <QDebug>           /// For debug purposes (outputs to console)
#include <QFile>            /// For reading in a file
#include <QSqlRecord>       /// For SQL
#include <QVector>          /// class template that provides a dynamic array

#include "constants.h"      /// constants header

class dbmanager
{
public:

    /// Create a static object of the dbmanager
    static dbmanager& instance();
    /// delete dbmanager copy constructor
    dbmanager(const dbmanager&) = delete;
    /// delete dbmanager assignment operator
    void operator =(const dbmanager&) = delete;
    /// checks if database is open
    bool isOpen() const;

private:
     dbmanager();                   ///< Dbmanager constructor
    ~dbmanager();                   ///< Dbmanager destructor
    QSqlDatabase programDatabase;   ///< database
};

#endif // DBMANAGER_H
