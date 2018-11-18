#include "conferenceview.h"

conferenceView::conferenceView()
{
    this->conference = "";
    this->division = "";
}

// Assigns conference to passed in QString
void conferenceView::setConference(QString conference) { this->conference = conference; }

// Returns conference
QString conferenceView::getConference() { return this->conference; };

// Assigns division to passed in QString
void conferenceView::setDivision(QString division) { this->division = division; }

// Returns division
QString conferenceView::getDivision() { return this->division; }

QSqlQuery conferenceView::queryConference(QString conference)
{
    this->setConference(conference); // Sets current conference

    // Queries database for team names by conference order by team name
    QSqlQuery q;
    q.prepare("SELECT TeamName "
              "FROM TeamInfo "
              "WHERE Conference = :conf "
              "ORDER BY TeamName");
    q.bindValue(":conf", conference);
    q.exec();

    return q;
}

QSqlQuery conferenceView::queryDivision(QString division)
{
    // Sets current division
    if( this->conference == "American Football Conference")
        this->setDivision(division.prepend("AFC "));
    else
        this->setDivision(division.prepend("NFC "));

    // Queries database for team names by division order by team name
    QSqlQuery q;
    q.prepare("SELECT TeamName "
              "FROM TeamInfo "
              "WHERE Division = :div "
              "ORDER BY TeamName");
    q.bindValue(":div", division);
    q.exec();

    return q;
}

QSqlQueryModel* conferenceView::populateView(QString str, int id)
{
    QSqlQueryModel* qModel = new QSqlQueryModel;

    // if id == 0, sets the qModel to the conference teams
    if(id == 0)
    {
        this->setConference(str);
        qModel->setQuery(this->queryConference(this->getConference()));
    }
    // if id == 1, sets the qModel to the division teams
    else
    {
        this->setDivision(str);
        qModel->setQuery(this->queryDivision(this->getDivision()));
    }

    // Sets the header title of the table view
    qModel->setHeaderData(0, Qt::Horizontal, QObject::tr("Team Name"));

    return qModel;
}
