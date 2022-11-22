#include "RaspberryPiPin.h"


RaspberryPiPin::RaspberryPiPin(int r,int p):richting(r),pinNr(p),status(0)
{
   
   pinMode(pinNr,richting);

}

RaspberryPiPin::RaspberryPiPin():pinNr(0),status(0)
{

}


RaspberryPiPin::~RaspberryPiPin()
{

}

void RaspberryPiPin::waardePin(int x) {
       if(richting == OUTPUT)
           digitalWrite (pinNr,x);
}

void RaspberryPiPin::zetInMode(int m) {
                richting=m;
                pinMode(pinNr,m);

}

int RaspberryPiPin::leesPinWaarde() const {
       return digitalRead(pinNr);
}


int RaspberryPiPin::gpioPin()const {
       return pinNr;
}

void RaspberryPiPin::gpioNr(int n) {
       pinNr=n;
}
