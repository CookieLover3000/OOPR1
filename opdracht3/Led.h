#ifndef LED_H
#define LED_H

#include <string>
#include "RaspberryPi.h"

using namespace std;
#pragma once

#define OUTPUT 1

class Led
{
public:
  Led(int);
  Led(int, string, string);
  ~Led();
  virtual bool zetAan();
  virtual void zetUit();
  virtual int connectie();
  virtual int ledStatus();
  void veranderLichtsterkte(double);
  double hoeveelheidlicht();
  string deEigenaar();

private:
  string kleur;
  double lichtsterkte;
  RaspberryPi* pi;
};
#endif