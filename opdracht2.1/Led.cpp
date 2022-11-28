#include "Led.h"
#include "RaspberryPi.h"
#include <wiringPi.h>

Led::Led(RaspberryPi* pi,int n): pinNr(n),eigenaar("Een geheim"),status(0), Pi(pi)
{
    pi->koppelAansluiting(n);
}

Led::Led(RaspberryPi* pi,int n, string a, string b): pinNr(n),kleur(a),eigenaar(b),status(0), Pi(pi)
{
    pi->koppelAansluiting(n);
} 


Led::~Led()
{
}

void Led::zetAan() {
  //  digitalWrite (pinNr,1);
    status=1;
    Pi->pinWaarde(pinNr, status);
}

int Led::isLedAan()const {
    return status;
}

void Led::zetUit() {
 //    digitalWrite (pinNr,0);
     status=0;
     Pi->pinWaarde(pinNr, status);
     
}
string  Led::ledKleur()const {
  return kleur;        
}

int Led::pinNummer() const {
    return pinNr;
}

string Led::deEigenaar() {
    return eigenaar;
}


