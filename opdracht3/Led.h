#ifndef LED_H
#define LED_H

#include <string>

using namespace std;
#pragma once

#define OUTPUT 1

class Led
{
public:
  Led();
  Led(string en, double l);
  ~Led();
  virtual bool zetAan(string) = 0;
  virtual void zetUit() = 0;
  virtual int connectie() = 0;
  virtual int ledStatus() = 0;
  void veranderLichtsterkte(double);
  double hoeveelheidlicht();
  string deEigenaar(string);

private:
  double lichtsterkte;
  string eigenaar;
};
#endif