/* 20148410  - Iwan van Oort */
#include "Logled.h"
#include <iostream>
#include <unistd.h>

using namespace std;

Logled::Logled(RaspberryPi *pi, int pin, string kleur, string naam, int duratie) : status(false), eigendomVan(naam), Pi(pi), branduren(duratie), pinNr(pin)
{
    pi->koppelAansluiting(pin);
    pi->zetPinMode(pin,OUTPUT);
}

Logled::Logled(RaspberryPi *pi, int pin, int duratie) : status(false), eigendomVan("Geheim"), Pi(pi), branduren(duratie), pinNr(pin)
{
    pi->koppelAansluiting(pin);
    pi->zetPinMode(pin,OUTPUT);
}

Logled::~Logled()
{
}

void Logled::zetAan()
{
    tijdmeting.reset();
    if (hoeveelTijdTeGaan() > 0)
    {

        tijdmeting.begin();
        status = true;
        Pi->pinWaarde(pinNr, status);
    }
}

void Logled::zetUit()
{
    tijdmeting.stop();
    branduren.eraf(tijdmeting.deTijd());
    status = false;
    Pi->pinWaarde(pinNr, status);
}

bool Logled::ledStatus()
{
    return status;
}

unsigned int Logled::hoeveelTijdTeGaan()
{
//    branduren.eraf(tijdmeting.deTijd());
    return branduren.deTimerTijd();
}

string Logled::deEigenaar()
{
    return eigendomVan;
}