#include "tst_conferencepage.h"
#include "tst_stadiumpage.h"

int main()
{
    ConferencePage conferenceTest;
    QTest::qExec(&conferenceTest);

    StadiumPage stadiumTest;
    QTest::qExec(&stadiumTest);

}
