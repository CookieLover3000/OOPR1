#ifndef WEERSTAND_H
#define WEERSTAND_H

#include <string>
#include <iostream>
// #include "SingleLed.h"
// #include "DualLed.h"

using namespace std;
#pragma once

class Weerstand
{
public:
    Weerstand(int);
    ~Weerstand();
    int weerstandsWaarde();

private:
    int waarde;
};
#endif