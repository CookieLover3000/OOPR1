#ifndef LEDLAMP_H
#define LEDLAMP_H

#include <string>
#include "Led.h"
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;
#pragma once

#define OUTPUT 1

class LedLamp
{
public:
    bool zetAan(string);
    void zetUit();
    string connectie();
    void voegLedToe(Led *);
    bool ledStatus();

private:
    vector<Led *> leds;
};
#endif