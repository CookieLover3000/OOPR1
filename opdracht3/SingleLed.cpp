#include "SingleLed.h"

SingleLed::SingleLed(RaspberryPi *raspi, int nummer, const Weerstand *stand, string ledkleur, string naam, double sterkte) : Led(naam, sterkte), kleur(ledkleur), status(0), pinNummer(nummer), pi(raspi), weer(stand), aangesloten(1)
{
    pi->koppelAansluiting(pinNummer);
    pi->zetPinMode(pinNummer, OUTPUT);
    pi->pinWaarde(pinNummer, OUTPUT);
}
SingleLed::~SingleLed()
{
}

bool SingleLed::zetAan(string k)
{
    if (kleur.compare(k) == 0)
    {
        status = 1;
        pi->pinWaarde(pinNummer, status);
        return true;
    }
    return false;
}
void SingleLed::zetUit()
{
    pi->pinWaarde(pinNummer, 0);
}

int SingleLed::connectie()
{
    return aangesloten;
}
int SingleLed::ledStatus()
{
    return 0;
}