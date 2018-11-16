#include "tst_stadiumpage.h"

StadiumPage::StadiumPage()
{
    num1 = 5;
    num2 = 10;
}

void StadiumPage::exampleTstPass()
{
    QVERIFY(this->num1*2 == this->num2);
}

void StadiumPage::exampleTstFail()
{
    QVERIFY(this->num1 == this->num2);
}
