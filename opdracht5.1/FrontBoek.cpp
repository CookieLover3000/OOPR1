/*
 * FrontBoek.cpp
 *
 *  Created on: Oct 31, 2017
 *      Author: oop
 */

#include "FrontBoek.h"

FrontBoek::FrontBoek(string n,string t):schrijver(n),titel(t) {

}

FrontBoek::~FrontBoek() {
}

string FrontBoek::naamSchrijver()const {
	return schrijver;
}
string FrontBoek::naamTitel()const {
	return titel;
}
void FrontBoek::verhoogSchrijver() {
	schrijver +=1;
}

FrontBoek *FrontBoek::maakKopie()
{
    return new FrontBoek(*this);
}
