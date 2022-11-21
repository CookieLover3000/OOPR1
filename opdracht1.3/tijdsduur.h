#ifndef TIJDSDUUR_H
#define TIJDSDUUR_H

// De declaratie van de ADT Tijdsduur:
class Tijdsduur {
public:
    Tijdsduur(int);
    Tijdsduur(int,int);
    ~Tijdsduur();
    void eraf(const Tijdsduur& t);
    void erbij(const Tijdsduur& t);
    void maal(int a);
    void print() const;
    int deTimerTijd();

private:	
    int min;
    int sec;
    void normaliseer();
};

#endif // TIJDSDUUR_H