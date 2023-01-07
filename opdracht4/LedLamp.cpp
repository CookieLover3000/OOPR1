#include "LedLamp.h"

bool LedLamp::zetAan(string k)
{
    bool waarde = false;

    for (int i = 0; i < leds.size(); i++)
    {
        if (leds.at(i) != NULL)
            waarde |= leds.at(i)->zetAan(k);
    }
    return waarde;
}

void LedLamp::zetUit()
{
    for (int i = 0; i < leds.size(); i++)
    {
        if (leds.at(i) != NULL)
            leds.at(i)->zetUit();
    }
}
string LedLamp::connectie()
{
    string waarde;
    string kluis;
    for (int i = 0; i < leds.size(); i++)
    {
        if (leds.at(i) != NULL)
        {
            waarde = leds.at(i)->connectie();
            kluis = kluis + " " + waarde;
        }
    }
    return kluis;
}
void LedLamp::voegLedToe(Led *L)
{
    leds.push_back(L);
}

bool LedLamp::ledStatus()
{
    bool waarde;
    for (int i = 0; i < leds.size(); i++)
    {
        if (leds.at(i) != NULL)
            waarde |= leds.at(i)->ledStatus();
    }
    return waarde;
}