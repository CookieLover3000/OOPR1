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
    Led(RaspberryPi*,int);
    Led(RaspberryPi*,int, string, string);
    ~Led();
    void zetAan();
    void zetUit();
    string ledKleur()const;
    int isLedAan()const;
    int pinNummer() const;
    string deEigenaar();

  private:
    string kleur;
    int pinNr=-1;
    string eigenaar; 
    int status=0;
    RaspberryPi* Pi;
};
#endif