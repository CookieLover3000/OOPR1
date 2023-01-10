#include "weerstand.h"

Weerstand::Weerstand(int a) : waarde(a)
{
}
Weerstand::~Weerstand()
{
    // cout << "hi" << endl;
}

int Weerstand::weerstandsWaarde()
{
    return waarde;
}