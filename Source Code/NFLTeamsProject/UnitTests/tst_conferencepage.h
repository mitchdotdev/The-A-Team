#ifndef TST_CONFERENCEPAGE_H
#define TST_CONFERENCEPAGE_H
#include <QtTest>
#include "../NFL_Teams_App/dbmanager.h"
#include "../NFL_Teams_App/conferenceview.h"

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

#endif // TST_CONFERENCEPAGE_H
