#include "LedLamp.h"

bool LedLamp::zetAan(string k)
{
    bool waarde = false;

    for(int i = 0; i < leds.size();i++)
    {
        if(leds.at(i) != NULL)
        waarde |= leds.at(i)->zetAan(k);
    }    
}

void LedLamp::zetUit()
{
}
string LedLamp::connectie()
{
}
void LedLamp::voegLedToe(Led *L)
{
    leds.push_back(L);
}

bool LedLamp::ledStatus()
{
}