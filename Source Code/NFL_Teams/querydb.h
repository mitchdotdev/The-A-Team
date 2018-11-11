#ifndef QUERYDB_H
#define QUERYDB_H
#include "constants.h"

class queryDB
{
    QString conference;
    QString division;
public:
    queryDB();
    void setConference(QString);
    QString getConference();
    void setDivision(QString);
    QString getDivision();
    QSqlQuery queryConference(QString);
    QSqlQuery queryDivision(QString);
};

#endif // QUERYDB_H
