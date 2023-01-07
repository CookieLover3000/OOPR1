#include <iostream>
#include <unistd.h>

#include "weerstand.h"
#include "RaspberryPi.h"
#include "SingleLed.h"
#include "DualLed.h"
#include "LedLamp.h"

int main()
{

    RaspberryPi miniC(20148410); // vul hier je eigen studienummer in.
    LedLamp lampje;
    const Weerstand r1(330);
    const Weerstand r2(330);
    const Weerstand r3(330);
    const Weerstand r4(330);

    string ledKleur1 = "groen";
    string ledKleur2 = "rood";
    string eigenaar = "Iwan";

    lampje.voegLedToe(new SingleLed(&miniC, 18, &r1, ledKleur1, eigenaar, 0.9));
    lampje.voegLedToe(new DualLed(&miniC, &r2, &r3, 23, 24, ledKleur1, ledKleur2, eigenaar, 1.2));
    lampje.voegLedToe(new SingleLed(&miniC, 25, &r1, ledKleur1, eigenaar, 0.9));

    lampje.zetAan("rood");
    sleep(3);
    lampje.zetAan("groen");
    sleep(3);
    lampje.zetUit();
    sleep(1);
    cout << "connectie(s) van ll:" << lampje.connectie() << endl;

    return 0;
}
