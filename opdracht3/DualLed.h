#ifndef DUALLED_H
#define DUALLED_H

#include <string>
#include "Led.h"
#include "RaspberryPi.h"
#include "weerstand.h"

using namespace std;
#pragma once

#define OUTPUT 1

class DualLed : public Led
{
public:
    DualLed();
    DualLed(RaspberryPi *, const Weerstand *,const Weerstand *,int,int,string,string,string, double);
    ~DualLed();
    virtual bool zetAan(string);
    virtual void zetUit();
    virtual int connectie();
    virtual int ledStatus();

private:
    string kleur1;
    string kleur;
    int status;
    int pinnummer1;
    int pinnummer2;
    int aangesloten;
    RaspberryPi *pi;
    const Weerstand *weerstand1;
    const Weerstand *weerstand2;
};
#endif