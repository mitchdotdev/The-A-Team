#include "trips.h"

Trips::Trips() { }

QStringList Trips::addStopsList(QString stadiumName)
{
    QStringList teamNames;
    QSqlQuery query;
    query.prepare("SELECT DISTINCT StadiumName "
                  "FROM TeamInfo "
                  "WHERE StadiumName != :stadiumName");
    query.bindValue(":stadiumName", stadiumName);
    query.exec();

    while( query.next() )
        teamNames.push_back( query.value(0).toString() );

    return teamNames;
}

QSqlQuery Trips::singleTripSearch(QString bCity, QString eCity)
{
    QSqlQuery query;
    query.prepare("SELECT Starting_City, Ending_City, Distance "
                  "FROM Distances "
                  "WHERE Starting_City = :bCity AND Ending_City = :eCity");
    query.bindValue(":bCity", bCity);
    query.bindValue(":eCity", eCity);

    query.exec();
    return query;
}

QStringList Trips::customTrip(QStringList OGList, int cityNum, QStringList efficientList)
{
    if(cityNum == 0)
        return efficientList;
    if( efficientList.size() == 0 )
    {
        efficientList.push_back(OGList.at(0));
        OGList.pop_front();
        --cityNum;

        return customTrip(OGList, cityNum, efficientList);
    }

    int dist = getDistance(OGList.at(0), efficientList.at(efficientList.size()-1));
    QString temp2;

    for(int i = 0; i < OGList.length(); ++i)
    {
        if( getDistance(OGList.at(i), efficientList.at(efficientList.size()-1)) <= dist)
        {
            dist = getDistance(OGList.at(i), efficientList.at(efficientList.size()-1));
            temp2 = OGList.at(i);
        }
        else if(OGList.size() == 1)
            temp2 = OGList.at(0);
    }

    efficientList.push_back(temp2);
    OGList.removeAll(temp2);
    --cityNum;
    return customTrip(OGList, cityNum, efficientList);
}

int getDistance(QString city1, QString city2)
{
    QSqlQuery query;
    query.prepare("SELECT Distance "
                  "FROM Distances "
                  "WHERE Starting_City = :city1 AND Ending_City = :city2");
    query.bindValue(":city1", city1);
    query.bindValue(":city2", city2);

    query.exec();
    return query.value(0).toInt();
}
