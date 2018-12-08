#include "trips.h"

Trips::Trips() { }

QStringList Trips::addStopsList(QString bTeam)
{
    QStringList teamNames;
    QSqlQuery query;
    query.prepare("SELECT TeamName "
                  "FROM TeamInfo "
                  "WHERE TeamName != :bTeam");
    query.bindValue(":bTeam", bTeam);
    query.exec();

    while( query.next() )
        teamNames.push_back( query.value(0).toString() );

    return teamNames;
}

QSqlQuery Trips::singleTripSearch(QString bCity, QString eCity)
{
    QSqlQuery query;                                                        /// query
    query.prepare("SELECT Starting_City, Ending_City, Distance "            /// select start city, ending city, and distance
                  "FROM Distances "                                         /// from distance table
                  "WHERE Starting_City = :bCity AND Ending_City = :eCity"); /// checks which citys
    query.bindValue(":bCity", bCity);                                       /// allows use of this variable in SQL - bCity
    query.bindValue(":eCity", eCity);                                       /// allows use of this variable in SQL - eCity

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
