#include "DualLed.h"

DualLed::DualLed()
{
}

DualLed::DualLed(RaspberryPi *raspi, const Weerstand *resistance1, const Weerstand *resistance2, int pin1, int pin2, string color1, string color2, string naam, double sterkte) : Led(naam, sterkte), kleur(color1), kleur1(color2), status(0), pinnummer1(pin1), pinnummer2(pin2), pi(raspi), weerstand1(resistance1), weerstand2(resistance2), aangesloten(1)
{
    pi->koppelAansluiting(pin1);
    pi->zetPinMode(pin1, OUTPUT);
    pi->koppelAansluiting(pin2);
    pi->zetPinMode(pin2, OUTPUT);
}
DualLed::~DualLed()
{
}

bool DualLed::zetAan(string k)
{
    if (kleur.compare(k) == 0)
    {
        pi->pinWaarde(pinnummer1, 1);
        return true;
    }

    if (kleur1.compare(k) == 0)
    {
        pi->pinWaarde(pinnummer2, 1);
        return true;
    }
    return 0;
}

void DualLed::zetUit()
{
    pi->pinWaarde(pinnummer1, 1);
    pi->pinWaarde(pinnummer2, 1);
}

int DualLed::connectie()
{
    return aangesloten;
}

int DualLed::ledStatus()
{
    return 1;
}