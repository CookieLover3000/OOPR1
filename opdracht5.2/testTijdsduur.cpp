#include <CppUTest/CommandLineTestRunner.h>
#include <CppUTest/TestHarness.h>
#include <iostream>
#include <unistd.h>

using namespace std;
#include "Tijdsduur.h"
#include "Logled.h"

TEST_GROUP(TestGroep){};
TEST_GROUP(TestGroep2){};

TEST(TestGroep, checkDeTimerTijd)
{
    Tijdsduur tijd(5, 8);
    CHECK_EQUAL(308, tijd.deTimerTijd());
}

TEST(TestGroep, checkEraf)
{
    Tijdsduur tijd(-1,8);
    tijd.eraf(80);
    CHECK_EQUAL(0, tijd.deTimerTijd());
}
TEST(TestGroep, checkErbij)
{
    Tijdsduur tijd(-8);
    tijd.erbij(10);
    CHECK_EQUAL(2, tijd.deTimerTijd());
}
TEST(TestGroep, checkMaal)
{
    Tijdsduur tijd(5,8);
    tijd.maal(2);
    CHECK_EQUAL(616, tijd.deTimerTijd());
}

TEST(TestGroep2, checkTijdTeGaan)
{
    RaspberryPi pi(20148410);
    Logled led(&pi, 18, "Rood", "Iwan van Oort", 4);

    CHECK_EQUAL(4, led.hoeveelTijdTeGaan());
}

TEST(TestGroep2, checkTijdTeGaan2)
{
    RaspberryPi pi(20148410);
    Logled led(&pi, 18, "Rood", "Iwan van Oort", 4);
    
    led.zetAan();
    sleep(1);
    led.zetUit();
    led.zetAan();
    sleep(4);
    led.zetUit();

    CHECK_EQUAL(0, led.hoeveelTijdTeGaan());
}

int main(int argc, char *argv[])
{
    CommandLineTestRunner::RunAllTests(argc, argv);
    return 0;
}