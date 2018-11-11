#include "querydb.h"

queryDB::queryDB()
{
    conference = "American Football Conference";
    division = "AFC North";
}

void queryDB::setConference(QString conference) { this->conference = conference; }

QString queryDB::getConference() { return this->conference; };

void queryDB::setDivision(QString division) { this->division = division; }

QString queryDB::getDivision() { return this->division; }

QSqlQuery queryDB::queryConference(QString conference)
{
    this->conference = conference;

    QSqlQuery q;
    q.prepare("SELECT TeamName "
              "FROM TeamInfo "
              "WHERE Conference = :conf "
              "ORDER BY TeamName");
    q.bindValue(":conf", conference);
    q.exec();

    return q;
}

QSqlQuery queryDB::queryDivision(QString division)
{
    if( this->conference == "American Football Conference")
        this->division = division.prepend("AFC ");
    else
        this->division = division.prepend("NFC ");

    QSqlQuery q;
    q.prepare("SELECT TeamName "
              "FROM TeamInfo "
              "WHERE Division = :div "
              "ORDER BY TeamName");
    q.bindValue(":div", division);
    q.exec();

    return q;
}
