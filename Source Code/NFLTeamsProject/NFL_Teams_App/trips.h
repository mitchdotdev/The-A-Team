#ifndef TRIPS_H
#define TRIPS_H
#include <QStringList>
#include <QSqlQuery>
#include <QtSql>

class Trips
{
public:
    Trips();
    /// populates additional stops menu
    QStringList addStopsList(QString);
    /// trip search
    QSqlQuery singleTripSearch(QString, QString);
    /// custom trip
    QStringList customTrip(QStringList, int, QStringList);
};

/// shortest distance
int getDistance(QString city1, QString city2);

#endif // TRIPS_H
