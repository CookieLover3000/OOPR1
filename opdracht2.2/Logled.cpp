/* 20148410  - Iwan van Oort */
#include "Logled.h"

using namespace std;

Logled::Logled(RaspberryPi *pi, int pin, string kleur, string naam, int d) : status(0), eigendomVan(naam), Pi(pi), branduren(d), pinNr(pin)
{
    pi->koppelAansluiting(pin);
}
Logled::~Logled()
{
}

void Logled::zetAan()
{
    status = 1;
    Pi->pinWaarde(pinNr, status);
}

void Logled::zetUit()
{
    status = 0;
    Pi->pinWaarde(pinNr, status);
}

bool Logled::ledStatus()
{
    return 0;
}

unsigned int Logled::hoeveelTijdTeGaan()
{
    return 0;
}