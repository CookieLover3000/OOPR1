#include <CppUTest/CommandLineTestRunner.h>
#include <CppUTest/TestHarness.h>
#include <iostream>

using namespace std;
#include "FrontBoek.h"

/* The definition of a TEST_GROUP, the name is sample */
TEST_GROUP(FirstTestGroup)
{
    void setup()
    {
        cout << "voor de test" << endl;

    }

    void teardown()
    {
        cout << "na de test" << endl;
    }
};

TEST(FirstTestGroup, boektest1)
{
    FrontBoek fb1("L&B", "lab");
    STRCMP_EQUAL("L&B", fb1.naamSchrijver().c_str());
}
TEST(FirstTestGroup, boektest2)
{
    string test1;
    string test2;
    FrontBoek fb2("Iwan", "boekNaam");
    test1 = fb2.naamSchrijver();
    fb2.verhoogSchrijver();
    test2 = fb2.naamSchrijver();
    STRCMP_EQUAL(test1.c_str(), test2.c_str());
}
TEST(FirstTestGroup, boektest3)
{
    FrontBoek fb3("Iwan", "Super cool boek");

    FrontBoek fb31 = *fb3.maakKopie();

    CHECK(true);
}

/* The definition of a belonging to the TEST_GROUP TEST, the name is ret_int_success */
TEST(FirstTestGroup, FirstTest)
{
    FAIL("Fail me!");
}

/* The definition of a belonging to the TEST_GROUP TEST, the name is ret_int_failed */
TEST(FirstTestGroup, SecondTest)
{
    STRCMP_EQUAL("hello", "hello");
}
TEST(FirstTestGroup, ThirdTest)
{
    LONGS_EQUAL(10, 15);
}

int main(int argc, char *argv[])
{
    CommandLineTestRunner::RunAllTests(argc, argv);
    return 0;
}