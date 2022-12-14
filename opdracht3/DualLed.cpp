#include "DualLed.h"

bool DualLed::zetAan(string k)
{
    if(kleur.compare(k) == 0)
    {
        pi->pinWaarde(pinnummer1, 1);
        return true;
    }

    if(kleur1.compare(k) == 0)
    {
        pi->pinWaarde(pinnummer2,1);
        return true;
    }
    return 0;
}

void DualLed::zetUit()
{
    pi->pinWaarde(pinnummer1,1);
    pi->pinWaarde(pinnummer2,1);
}

int DualLed::connectie()
{
    return aangesloten;
}

int DualLed::ledStatus()
{
    return 1;
}