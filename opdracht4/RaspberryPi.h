#ifndef RASPBERRYPI_H
#define RASPBERRYPI_H

#pragma once

#include "RaspberryPiPin.h"
#include "connectionPlatform.h"

#define AANTALPINNEN 4
class RaspberryPi : public ConnectionPlatform
{
public:
  RaspberryPi(int);
  ~RaspberryPi();
  void zetPinMode(int, int);
  void pinWaarde(int, int);
  bool koppelAansluiting(int);
  int hetProductienummer() const;

private:
  int productienummer;
  RaspberryPiPin pinnen[AANTALPINNEN];
};

#endif
