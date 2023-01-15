/*
 * FrontBoek.h
 *
 *  Created on: Oct 31, 2017
 *      Author: oop
 */

#include <string>

using namespace std;

#ifndef FRONTBOEK_H_
#define FRONTBOEK_H_

class FrontBoek {
   public:
	  FrontBoek(string,string);
	  virtual ~FrontBoek();
	  string naamSchrijver()const;
	  string naamTitel()const;
	  void verhoogSchrijver();
	  FrontBoek *maakKopie();
	private:
	  string schrijver;
	  string titel;
};
#endif /* FRONTBOEK_H_ */


