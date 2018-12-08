#ifndef TST_STADIUMPAGE_H
#define TST_STADIUMPAGE_H
#include <QtTest>
//#include "../NFL_Teams_App/mainwindow.h"

class StadiumPage : public QObject
{
    Q_OBJECT
    int num1;
    int num2;
public:
    StadiumPage();
private slots:
    void exampleTstPass();
    void exampleTstFail();
};
#endif // TST_STADIUMPAGE_H
