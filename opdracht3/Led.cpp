#include "Led.h"

void Led::veranderLichtsterkte(double a)
{
    lichtsterkte = a; 
}
double Led::hoeveelheidlicht()
{
    return lichtsterkte;
}
string Led::deEigenaar()
{
    return eigenaar;
}