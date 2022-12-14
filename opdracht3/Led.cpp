#include "Led.h"
Led::Led()
{
}
Led::Led(string en, double l) : eigenaar(en), lichtsterkte(l)
{
}
Led::~Led()
{
}

void Led::veranderLichtsterkte(double a)
{
    lichtsterkte = a;
}
double Led::hoeveelheidlicht()
{
    return lichtsterkte;
}
string Led::deEigenaar(string a)
{
    a = eigenaar;
    return eigenaar;
}