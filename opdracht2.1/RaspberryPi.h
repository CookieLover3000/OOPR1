#ifndef RASPBERRYPI_H
#define RASPBERRYPI_H

#pragma once

#include "RaspberryPiPin.h"

#define AANTALPINNEN 4
class RaspberryPi
{
  public:
    RaspberryPi(int);
    ~RaspberryPi();
    void zetPinMode(int,int );
    void pinWaarde(int, int );
    bool koppelAansluiting(int);
    int hetProductienummer() const;
    
  private:
    int productienummer;
    RaspberryPiPin pinnen[AANTALPINNEN];
   
};

#endif
