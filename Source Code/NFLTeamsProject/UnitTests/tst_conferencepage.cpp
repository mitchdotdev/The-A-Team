#include "tst_conferencepage.h"

ConferencePage::ConferencePage()
{
    dbmanager::instance();
    this->AFC = {"Baltimore Ravens", "Buffalo Bills", "Cincinnati Bengals",
                 "Cleveland Browns", "Denver Broncos", "Houston Texans",
                 "Indianapolis Colts", "Jacksonville Jaguars", "Kansas City Chiefs",
                 "Los Angeles Chargers", "Miami Dolphins", "New England Patriots",
                 "New York Jets", "Oakland Raiders", "Pittsburgh Steelers", "Tennessee Titans", "San Diego Sailors"};
    this->AFCNorth = {"Baltimore Ravens", "Cincinnati Bengals", "Cleveland Browns", "Pittsburgh Steelers"};
    this->AFCSouth = {"Houston Texans", "Indianapolis Colts", "Jacksonville Jaguars", "Tennessee Titans"};
    this->AFCEast = {"Buffalo Bills", "Miami Dolphins", "New England Patriots", "New York Jets"};
    this->AFCWest = {"Denver Broncos", "Kansas City Chiefs", "Los Angeles Chargers", "Oakland Raiders", "San Diego Sailors"};

    this->NFC = {"Arizona Cardinals", "Atlanta Falcons", "Carolina Panthers",
                 "Chicago Bears", "Dallas Cowboys", "Detroit Lions",
                 "Green Bay Packers", "Los Angeles Rams", "Minnesota Vikings",
                 "New Orleans Saints", "New York Giants", "Philadelphia Eagles",
                 "San Francisco 49ers", "Seattle Seahawks", "Tampa Bay Buccaneers", "Washington Redskins"};
    this->NFCNorth = {"Chicago Bears", "Detroit Lions", "Green Bay Packers", "Minnesota Vikings"};
    this->NFCSouth = {"Atlanta Falcons", "Carolina Panthers", "New Orleans Saints", "Tampa Bay Buccaneers"};
    this->NFCEast = {"Dallas Cowboys", "New York Giants", "Philadelphia Eagles", "Washington Redskins"};
    this->NFCWest = {"Arizona Cardinals", "Los Angeles Rams", "San Francisco 49ers", "Seattle Seahawks"};
}

void ConferencePage::testAFCConference()
{
    conferenceView c;
    QSqlQuery query = c.queryConference("American Football Conference");
    int index = 0;
    while(query.next())
    {
        QVERIFY(this->AFC.at(index) == query.value(0).toString());
        ++index;
    }
}

void ConferencePage::testNFCConference()
{
    conferenceView c;
    QSqlQuery query = c.queryConference("National Football Conference");
    int index = 0;
    while(query.next())
    {
        QVERIFY(this->NFC.at(index) == query.value(0).toString());
        ++index;
    }
}

void ConferencePage::testAFCDivisions()
{
    conferenceView c;
    c.setConference("American Football Conference");
    QSqlQuery query = c.queryDivision("North");
    int index = 0;
    while(query.next())
    {
        QVERIFY(AFCNorth.at(index) == query.value(0).toString());
        ++index;
    }
    index = 0;
    query = c.queryDivision("South");
    while( query.next())
    {
        QVERIFY(AFCSouth.at(index) == query.value(0).toString());
        ++index;
    }
    query = c.queryDivision("East");
    index = 0;
    while(query.next())
    {
        QVERIFY(AFCEast.at(index) == query.value(0).toString());
        ++index;
    }
    index = 0;
    query = c.queryDivision("West");
    while( query.next())
    {
        QVERIFY(AFCWest.at(index) == query.value(0).toString());
        ++index;
    }
}

void ConferencePage::testNFCDivisions()
{
    conferenceView c;
    c.setConference("National Football Conference");
    QSqlQuery query = c.queryDivision("North");
    int index = 0;
    while(query.next())
    {
        QVERIFY(NFCNorth.at(index) == query.value(0).toString());
        ++index;
    }
    index = 0;
    query = c.queryDivision("South");
    while( query.next())
    {
        QVERIFY(NFCSouth.at(index) == query.value(0).toString());
        ++index;
    }
    query = c.queryDivision("East");
    index = 0;
    while(query.next())
    {
        QVERIFY(NFCEast.at(index) == query.value(0).toString());
        ++index;
    }
    index = 0;
    query = c.queryDivision("West");
    while( query.next())
    {
        QVERIFY(NFCWest.at(index) == query.value(0).toString());
        ++index;
    }
}
