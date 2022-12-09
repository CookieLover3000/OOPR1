#include "SingleLed.h"
#include "DualLed.h"
#include "weerstand.h"
#include "RaspberryPi.h"

#include <iostream>
#include <unistd.h>


int main()
{
RaspberryPi miniC(20148410); //vul hier je eigen studienummer in.
const Weerstand r1(330);
string ledKleur="groen";
string eigenaar= "Pietje Puk";
SingleLed sl1(&miniC,134,&r1,ledKleur, eigenaar,0.9); //bij raspberry pi nr 18
SingleLed ledje2(sl1);
string testKleur="groen";
sl1.zetAan(testKleur);
sleep(1);
ledje2.zetUit();
}