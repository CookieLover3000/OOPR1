#ifndef LOGLED_H
#define LOGLED_H

#include "Tijdsduur.h"
#include "Stopwatch.h"
#include "RaspberryPi.h"
#include <string>

using namespace std;
#pragma once

class Logled
{
public:
    Logled(RaspberryPi *, int, string, string, int);
    ~Logled();
    void zetAan();
    void zetUit();
    bool ledStatus();
    unsigned int hoeveelTijdTeGaan();

private:
    bool status;
    string eigendomVan;
    Tijdsduur branduren;
    Stopwatch tijdmeting;
    RaspberryPi *Pi;
};
#endif