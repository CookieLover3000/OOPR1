#ifndef SINGLELED_H
#define SINGLELED_H

#include <string>
#include "Led.h"
#include "weerstand.h"
#include "RaspberryPi.h"

using namespace std;
#pragma once

#define OUTPUT 1

class SingleLed : public Led
{
public:
    SingleLed(RaspberryPi *, int, const Weerstand *, string, string, double);
    SingleLed(const SingleLed& r);
    ~SingleLed();
    bool zetAan(string);
    void zetUit();
    string connectie();
    int ledStatus();

private:
    string kleur;
    int status;
    int pinNummer;
    int aangesloten;
    RaspberryPi *pi;
    const Weerstand *weer;
    Led *led;
    bool aangemaakt = false;
};
#endif