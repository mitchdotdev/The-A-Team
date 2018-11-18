#ifndef CONFERENCEVIEW_H
#define CONFERENCEVIEW_H
#include "constants.h"

class conferenceView
{
    QString conference; // Holds the current conference selected by the fan
    QString division;   // Holds the current division selected by the fan
public:
    conferenceView(); // Default Constructor
    void setConference(QString);    // Sets the current conference of the fan
    QString getConference();    // Returns the current conference of the fan
    void setDivision(QString);  // Sets the current division of the fan
    QString getDivision();  // Gets the current division of the fan
    QSqlQuery queryConference(QString); // Returns a query for the teams in a specified conference
    QSqlQuery queryDivision(QString);   // Returns a query for the teams in a specified conference
    QSqlQueryModel* populateView(QString, int); // Returns a QSqlQueryModel index to display the queried data to the table view
};

#endif // CONFERENCEVIEW_H
