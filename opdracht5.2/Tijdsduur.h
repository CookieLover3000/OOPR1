#ifndef TIJDSDUUR_H
#define TIJDSDUUR_H

// De declaratie van de ADT Tijdsduur:
class Tijdsduur
{
public:
    Tijdsduur(int);
    Tijdsduur(int, int);
    ~Tijdsduur();
    void eraf(const Tijdsduur &t);
    void erbij(const Tijdsduur &t);
    void maal(int a);
    void print() const;
    int deTimerTijd() const;

private:
    unsigned int min;
    unsigned int sec;
    void normaliseer();
};

#endif