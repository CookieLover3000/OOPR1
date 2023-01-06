#ifndef DUALLED_H
#define DUALLED_H

#include <string>
#include <iostream>
#include <tuple>
#include <vector>

#include "Led.h"
#include "connectionPlatform.h"
#include "weerstand.h"

using namespace std;
#pragma once

#define OUTPUT 1

class DualLed : public Led
{
public:
    DualLed();
    DualLed(ConnectionPlatform *, const Weerstand *, const Weerstand *, int, int, string, string, string, double);
    ~DualLed();
    bool zetAan(string);
    void zetUit();
    string connectie();
    int ledStatus();

private:
    string kleur1;
    string kleur;
    int status;
    int pinnummer1;
    int pinnummer2;
    int aangesloten;
    ConnectionPlatform *pi;
    const Weerstand *weerstand1;
    const Weerstand *weerstand2;
};
#endif