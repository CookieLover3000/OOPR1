#include "RaspberryPi.h"
#include <wiringPi.h>

RaspberryPi::RaspberryPi(int nr):productienummer(nr)
{
  wiringPiSetupGpio();
}

RaspberryPi::~RaspberryPi()
{

}

//Test eerst of de pin aanwezig is.
void RaspberryPi::zetPinMode(int nr,int m) {
    for(int i=0; i < sizeof(pinnen);++i) {
         if(pinnen[i].gpioPin()==nr) {
              pinMode(nr,m);
             
         }
    }
}

void RaspberryPi::pinWaarde(int nr,int x) {
    digitalWrite(nr,x);
}

 bool RaspberryPi::koppelAansluiting(int nr) {
    bool alAanwezig=false;
    for(int i=0; i < AANTALPINNEN;++i) {
        if(pinnen[i].gpioPin()==nr)
               return 0;  //pin is al bezet
    }

    //pin is niet aanwezig.
    for(int i=0; i < AANTALPINNEN;++i) {
       if(pinnen[i].gpioPin() == 0) { // pin=vrij
            pinnen[i].gpioNr(nr);
                  return true;
                }
            }
    return 0;
   }

   int  RaspberryPi::hetProductienummer() const {
        return productienummer;
   }
