#include <iostream>
#include <unistd.h>
#include <wiringPi.h>

using namespace std;

#include "Led.h"

#define TIMELEDON 1000000
#define TIMELEDOFF 500000

/* V2 van blink1 */
int main (void)
{
cout<<"hoi opgave1"<<endl;
wiringPiSetupGpio(); //moet worden aangeroepen
/*
De led ld1 wordt aangesloten op pin18
en heeft als eigenaar Pietje Puk.
Bij ld2 is de eigenaar anoniem.
*/
Led ld1(18, "Rood", "Iwan"); //Zet hier je eigen naam in
Led ld2(23);
cout<<"De eigenaar van ld1 is "<<ld1.deEigenaar()<<endl;
cout<<"De eigenaar van ld1 is"<<ld2.deEigenaar()<<endl;

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

/* V1 van blink1
int main (void)
{
  cout<<"hoi opgave1"<<endl;
  wiringPiSetupGpio();  //moet worden aangeroepen 
  Led ld(18);

  for (;;)
  {
    ld.zetAan();
    usleep(TIMELEDON);
    ld.zetUit();
    usleep(TIMELEDOFF);
  }
  return 0 ;
}
*/