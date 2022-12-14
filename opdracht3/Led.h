#ifndef LED_H
#define LED_H

#include <string>

using namespace std;
#pragma once

#define OUTPUT 1

class Led
{
public:
  virtual bool zetAan(string) = 0;
  virtual void zetUit() = 0;
  virtual int connectie() = 0;
  virtual int ledStatus() = 0;
  void veranderLichtsterkte(double);
  double hoeveelheidlicht();
  string deEigenaar();

protected:
  string eigenaar;

private:
  double lichtsterkte;
};
#endif