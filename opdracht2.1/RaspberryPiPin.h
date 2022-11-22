#ifndef RaspbERRYPIPIN_H
#define RaspbERRYPIPIN_H

#include <wiringPi.h>
#pragma once

class RaspberryPiPin
{
public:
    RaspberryPiPin();
    RaspberryPiPin(int r, int p);
    ~RaspberryPiPin();
    void zetInMode(int);
    void waardePin(int);
    int leesPinWaarde() const;
    int gpioPin()const;
    void gpioNr(int);
    
private:

   int richting=INPUT;
   int pinNr;
   int status;

};

#endif