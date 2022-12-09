#ifndef SINGLELED_H
#define SINGLELED_H

#include <string>
#include "Led.h"
#include "RaspberryPi.h"
#include "weerstand.h"

using namespace std;
#pragma once

#define OUTPUT 1

class SingleLed
{
public:
    SingleLed(RaspberryPi*,int,Weerstand*,string,string, double);
    ~SingleLed();
    virtual bool zetAan(string);
    virtual void zetUit();
    virtual int connectie();
    virtual int ledStatus();

private:
    string kleur;
    int status;
    int pinNummer;
    int aangesloten;
    RaspberryPi* pi;
    Weerstand* weerstand;
};
#endif