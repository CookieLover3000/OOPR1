/* 20148410  - Iwan van Oort */
#include "Logled.h"
#include <iostream>
#include <unistd.h>

using namespace std;

Logled::Logled(RaspberryPi *pi, int pin, string kleur, string naam, int duratie) : status(false), eigendomVan(naam), Pi(pi), branduren(duratie), pinNr(pin), tijdmeting()
{
    pi->koppelAansluiting(pin);
}

Logled::Logled(RaspberryPi *pi, int pin, int duratie) : status(false), eigendomVan("Geheim"), Pi(pi), branduren(duratie), pinNr(pin), tijdmeting()
{
    pi->koppelAansluiting(pin);
}

Logled::~Logled()
{
}

void Logled::zetAan()
{
    tijdmeting.reset();
    tijdmeting.begin();
    status = true;
    Pi->pinWaarde(pinNr, status);
}

void Logled::zetUit()
{
    tijdmeting.stop();
    status = false;
    Pi->pinWaarde(pinNr, status);
}

bool Logled::ledStatus()
{
    return status;
}

// doet niks ???
unsigned int Logled::hoeveelTijdTeGaan()
{
/*    tijdmeting.stop();
    int temp = branduren.deTimerTijd() - tijdmeting.deTijd();
    branduren.eraf(temp);
    return temp; */
    return 0;
}

string Logled::deEigenaar() {
    return eigendomVan;
}