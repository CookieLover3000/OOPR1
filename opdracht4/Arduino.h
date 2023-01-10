#ifndef ARDUINO_H
#define ARDUINO_H

#include <string>
#include <Led.h>
#include <iostream>

#include "connectionPlatform.h"

using namespace std;
#pragma once

#define OUTPUT 1

class Arduino : public ConnectionPlatform
{
public:
void pinWaarde(int,int);
void zetPinMode(int,int);
bool koppelAansluiting();

private:
string fabrikant;
};
#endif