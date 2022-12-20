#include "weerstand.h"
#include "RaspberryPi.h"
#include "SingleLed.h"
#include "DualLed.h"

#include <iostream>
#include <unistd.h>

void printConnecties(Led &l)
{
    cout << "Led verbonden op  de volgende poort(en): " << l.connectie() << endl;
}

int main()
{
    /* Opdracht 3 voor IV */
    RaspberryPi miniC(20148410); // vul hier je eigen studienummer in.
    const Weerstand r1(330);
    string ledKleur = "groen";
    string eigenaar = "Iwan";
    SingleLed sl1(&miniC, 18, &r1, ledKleur, eigenaar, 0.9); // bij raspberry pi nr 18
    SingleLed ledje2(sl1);
    string testKleur = "groen";
    sl1.zetAan(testKleur);
    sleep(1);
    ledje2.zetUit();
    

    return 0;
    

    /* Opdracht 3 IV
    RaspberryPi miniC(20148410); //vul hier je eigen studienummer in.
    const Weerstand r1(330);
    const Weerstand r2(330);
    const Weerstand r3(330);
    string ledKleur1="groen";
    string ledKleur2="rood";
    string eigenaar= "Iwan";

    SingleLed* sl1=new SingleLed(&miniC,18,&r1, ledKleur1, eigenaar,0.9);//nr 18
    DualLed* dl1=new DualLed(&miniC,&r2,&r3,23,24, ledKleur1, ledKleur2,eigenaar,1.2);// 23,24

    Led* l1=sl1;
    Led* l2=dl1;

    l1->zetAan("groen");
    sleep(1);
    l2->zetAan("groen");
    sleep(1);
    l2->zetAan("rood");
    sleep(1);

    Led* uit=sl1;
    uit->zetUit();
    sleep(1);
    uit=dl1;
    uit -> zetUit();

    delete sl1;
    delete dl1;
    */

    /* Opdracht 3 connectie */
    /*cout << "!!!Hello World van de tijd!!!" << endl;

    RaspberryPi miniC(123456); // vul hier je eigen studienummer in.
    const Weerstand r1(330);
    const Weerstand r2(330);
    const Weerstand r3(330);
    string ledKleur1 = "groen";
    string ledKleur2 = "rood";
    string eigenaar = "Pietje Puk";

    SingleLed sl1(&miniC, 18, &r1, ledKleur1, eigenaar, 0.9); // bij raspberry pi nr 18
    DualLed dl1(&miniC, &r2, &r3, 23, 24, ledKleur1, ledKleur2, eigenaar, 1.2);
        printConnecties(sl1);
    printConnecties(dl1);
    for (int i = 0; i < 5; ++i)
    {
        sl1.zetAan("groen");
        sleep(1);
        sl1.zetUit();
        sleep(2);
    }
    dl1.zetAan("groen");
    sleep(2);
    dl1.zetAan("rood");
    sleep(2);
    dl1.zetUit();

    return 0;*/
}