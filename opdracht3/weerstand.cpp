#include "weerstand.h"

Weerstand::Weerstand(int a) : waarde(a)
{
}
Weerstand::~Weerstand()
{
}

int Weerstand::weerstandsWaarde()
{
    return waarde;
}