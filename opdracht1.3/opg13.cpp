/*

 * opg13.cpp
 *
 *  Created on: September, 2022
 *      Author: john
 */


#include <iostream> // nodig voor cout (schrijven naar scherm)
#include <iomanip> // nodig voor setw (veldbreedte definiëren)

#include "tijdsduur.h"

using namespace std;

int main() {
    cout<<"begin van opgave 1"<<endl<<endl;
    Tijdsduur t1(3,50); // t1 is 3 minuten en 50 seconden
    cout<<"t1 = "; t1.print(); cout<<endl;
    const Tijdsduur kw(15); // kw is 15 seconden
    cout<<"kw = "; kw.print(); cout<<endl;
    t1.erbij(kw); // Tel kw bij t1 op
    cout<<"t1 = "; t1.print(); cout<<endl;
    Tijdsduur t2(t1); // t2 is een kopie van t1
    t2.eraf(kw); // Trek kw van t2 af
    cout<<"t2 = "; t2.print(); cout<<endl;
    t2.maal(7); // Vermenigvuldig t2 met 7
    cout<<"t2 = "; t2.print(); cout<<endl;
    Tijdsduur t3(3,-122); // t3 is 3 minuten minus 122 seconden
    cout<<"t3 = "; t3.print(); cout<<endl;
    t3.eraf(t2);
    cout<<"T3 = "; t3.print(); cout << endl;
    Tijdsduur t4(3,122); // t4 is 3 minuten plus 122 seconden
    cout<<"t4 = "; t4.print(); cout<<endl;
    cout<<"het totaal aantal seconde van t4 = "<<t4.deTimerTijd()<<endl;
    cout<<"t4 = "; t4.print(); cout<<endl;
    cout<<"het totaal aantal seconde van kw = "<<kw.deTimerTijd()<<endl;
    return 0;
}