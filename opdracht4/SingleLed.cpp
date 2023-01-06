#include "SingleLed.h"

SingleLed::SingleLed(ConnectionPlatform *raspi, int nummer, const Weerstand *stand, string ledkleur, string naam, double sterkte) : Led(naam, sterkte), kleur(ledkleur), status(0), pinNummer(nummer), pi(raspi), weer(stand), aangesloten(1)
{
    pi->koppelAansluiting(pinNummer);
    pi->zetPinMode(pinNummer, OUTPUT);
    pi->pinWaarde(pinNummer, OUTPUT);
}
SingleLed::SingleLed(const SingleLed &L) : Led(L), weer(0), kleur(L.kleur), status(L.status), pinNummer(L.pinNummer), aangesloten(L.aangesloten), pi(L.pi)
{
    if (L.weer != 0)
        weer = new Weerstand(*(L.weer));
    aangemaakt = true;
}
SingleLed::~SingleLed()
{
    if (aangemaakt)
        delete weer;
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

string SingleLed::connectie()
{
    string a = to_string(pinNummer);
    return a;
}
int SingleLed::ledStatus()
{
    return 0;
}