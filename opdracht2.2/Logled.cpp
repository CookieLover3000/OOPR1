/* 20148410  - Iwan van Oort */
#include "Logled.h"

using namespace std;

Logled::Logled(RaspberryPi *pi, int pinNr, string kleur, string naam, int d) : status(0), eigendomVan(naam), Pi(pi), branduren(d)
{
    pi->koppelAansluiting(pinNr);
}
Logled::~Logled()
{
}

void Logled::zetAan()
{
    status = 1;
}

void Logled::zetUit()
{
    status = 0;
}

bool Logled::ledStatus()
{
    return 0;
}

unsigned int Logled::hoeveelTijdTeGaan()
{
    return 0;
}