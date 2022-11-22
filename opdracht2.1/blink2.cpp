#include <iostream>
#include <unistd.h>
#include <wiringPi.h>

using namespace std;

#include "Led.h"
#include "RaspberryPi.h"

#define TIMELEDON 1000000
#define TIMELEDOFF 500000

int main (void)
{
  cout<<"hoi opgave2"<<endl;
 
 /* 
    De raspberry pi wordt gebruikt om de pinnen aan te sturen.
 */

  RaspberryPi miniC(123456); //vul hier je eigen studienummer in.

/*
 De led ld1 wordt aangesloten op pin18 en heeft
 als eigenaar Pietje Puk.
 Bij ld2 is de eigenaar anoniem.
*/ 


  Led ld1(&miniC,18, "Rood", "Pietje Puk");
  Led ld2(&miniC,23);


  cout<<"De eigenaar van ld1="<<ld1.deEigenaar()<<endl;
  cout<<"De eigenaar van ld1="<<ld2.deEigenaar()<<endl;

  for (;;)
  {
    ld1.zetAan();
    ld2.zetUit();
    usleep(TIMELEDON);
    ld1.zetUit();
    ld2.zetAan();
    usleep(TIMELEDOFF);
  }
  return 0 ;
}
