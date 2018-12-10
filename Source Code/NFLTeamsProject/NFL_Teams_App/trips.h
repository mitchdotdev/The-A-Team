#ifndef TRIPS_H
#define TRIPS_H
#include <QStringList>
#include <QSqlQuery>
#include <QtSql>

class Trips
{
public:
    Trips();
    QStringList addStopsList(QString);
    QSqlQuery singleTripSearch(QString, QString);
    QStringList customTrip(QStringList, int, QStringList);
};

int getDistance(QString city1, QString city2);

#endif // TRIPS_H
