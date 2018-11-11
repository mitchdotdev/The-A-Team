#include <QtTest>
//#include "../NFL_Teams_App/conferenceview.h"

class ConferencePage : public QObject
{
    Q_OBJECT
    QVector<QString> AFC;
    QVector<QString> AFCNorth;
    QVector<QString> AFCSouth;
    QVector<QString> AFCEast;
    QVector<QString> AFCWest;

    QVector<QString> NFC;
    QVector<QString> NFCNorth;
    QVector<QString> NFCSouth;
    QVector<QString> NFCEast;
    QVector<QString> NFCWest;

public:
    ConferencePage();
private slots:
    void testAFCConference();
    void testNFCConference();
    void testAFCDivisions();
    void testNFCDivisions();
};

ConferencePage::ConferencePage()
{
    this->AFC = {"Baltimore Ravens", "Buffalo Bills", "Cincinnati Bengals",
                 "Cleveland Browns", "Denver Broncos", "Houston Texans",
                 "Indianapolis Colts", "Jacksonville Jaguars", "Kansas City Chiefs",
                 "Los Angeles Chargers", "Miami Dolphins", "New England Patriots",
                 "New York Jets", "Oakland Raiders", "Pittsburgh Steelers", "Tennessee Titans"};
    this->AFCNorth = {"Baltimore Ravens", "Cincinnati Bengals", "Cleveland Browns"};
    this->AFCSouth = {"Houston Texans", "Indianapolis Colts", "Jacksonville Jaguars", "Tennessee Titans"};
    this->AFCEast = {"Buffalo Bills", "Maimi Dolphins", "New England Patriots", "New York Jets"};
    this->AFCWest = {"Denver Broncos", "Kansas City Cheifs", "Los Angeles Chargers", "Oakland Raiders"};

    this->NFC = {"Arizona Cardinals", "Atlanta Falcons", "Carolina Panthers",
                 "Chicago Bears", "Dallas Cowboys", "Detroit Lions",
                 "Green Bay Packers", "Los Angeles Rams", "Minnesota Vikings",
                 "New Orleans Saints", "New York Giants", "Philadelphia Eagles",
                 "San Fransisco 49ers", "Seattle Seahawks", "Tampa Bay Buccaneers", "Washington Redskins"};
    this->NFCNorth = {"Chicago Bears", "Detroit Lions", "Green Bay Packers", "Minnesota Vikings"};
    this->NFCSouth = {"Atlanta Falcons", "Carolina Panthers", "New Orleans Saints", "Tampa Bay Buccaneers"};
    this->NFCEast = {"Dallas Cowboys", "New York Giants", "Philadelphia Eagles", "Washington Redskins"};
    this->NFCWest = {"Arizona Cardinals", "Los Angeles Rams", "San Fransisco 49ers", "Seattle Seahawks"};
}

void ConferencePage::testAFCConference()
{
//    conferenceView c;
//    QSqlQuery query = c.queryConference("American Football Conference");
//    int index = 0;
//    while(query.next())
//    {
//        QVERIFY(AFC.at(index) == query.value(index));
//    }
}

void ConferencePage::testNFCConference()
{
//    conferenceView c;
//    QSqlQuery query = c.queryConference("National Football Conference");
//    int index = 0;
//    while(query.next())
//    {
//        QVERIFY(NFC.at(index) == query.value(index));
//    }
}

void ConferencePage::testAFCDivisions()
{
//    conferenceView c;
//    c.setConference("American Football Conference");
//    QSqlQuery query = c.queryDivision("North");
//    int index = 0;
//    while(query.next())
//    {
//        QVERIFY(AFCNorth.at(index) == query.value(index));
//    }
//    index = 0;
//    query = c.queryDivision("South");
//    while( query.next())
//    {
//        QVERIFY(AFCSouth.at(index) == query.value(index));
//    }
//    query = c.queryDivision("East");
//    index = 0;
//    while(query.next())
//    {
//        QVERIFY(AFCEast.at(index) == query.value(index));
//    }
//    index = 0;
//    query = c.queryDivision("West");
//    while( query.next())
//    {
//        QVERIFY(AFCWest.at(index) == query.value(index));
//    }
}

void ConferencePage::testNFCDivisions()
{
//    conferenceView c;
//    c.setConference("National Football Conference");
//    QSqlQuery query = c.queryDivision("North");
//    int index = 0;
//    while(query.next())
//    {
//        QVERIFY(NFCNorth.at(index) == query.value(index));
//    }
//    index = 0;
//    query = c.queryDivision("South");
//    while( query.next())
//    {
//        QVERIFY(NFCSouth.at(index) == query.value(index));
//    }
//    query = c.queryDivision("East");
//    index = 0;
//    while(query.next())
//    {
//        QVERIFY(NFCEast.at(index) == query.value(index));
//    }
//    index = 0;
//    query = c.queryDivision("West");
//    while( query.next())
//    {
//        QVERIFY(NFCWest.at(index) == query.value(index));
//    }
}

QTEST_APPLESS_MAIN(ConferencePage)

#include "tst_conferencepage.moc"
