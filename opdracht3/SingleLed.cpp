#include "SingleLed.h"

SingleLed::SingleLed(RaspberryPi *raspi, int nummer, const Weerstand *stand, string ledkleur, string eigenaar, double sterkte) : kleur(ledkleur), status(0), pinNummer(nummer), pi(raspi), weer(stand)
{
    veranderLichtsterkte(sterkte);
    eigenaar = eigenaar;
}
SingleLed::SingleLed(const SingleLed &led)
{
    eigenaar = led.eigenaar;
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
    return pinNummer;
}
int SingleLed::ledStatus()
{
    return 0;
}