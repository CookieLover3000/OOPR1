#include "Led.h"
#include <wiringPi.h>

Led::Led(int n): pinNr(n),eigenaar("Een geheim"),status(0)
{
    pinMode(pinNr,OUTPUT);
}

Led::Led(int n, string a, string b): pinNr(n),kleur(a),eigenaar(b),status(0)
{
    pinMode(pinNr,OUTPUT); 
}

Led::~Led()
{
}

void Led::zetAan() {
    digitalWrite (pinNr,1);
    status=1;
}

int Led::isLedAan()const {
    return status;
}

void Led::zetUit() {
     digitalWrite (pinNr,0);
     status=0;
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


