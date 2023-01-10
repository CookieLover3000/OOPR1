#ifndef CONNECTIONPLATFORM_H
#define CONNECTIONPLATFORM_H

#include <string>
#include <iostream>

using namespace std;
#pragma once

#define OUTPUT 1

class ConnectionPlatform
{
public:
virtual ~ConnectionPlatform(){}
virtual void pinWaarde(int,int) = 0;
virtual void zetPinMode(int,int) = 0;
virtual bool koppelAansluiting(int) = 0;

private:
};
#endif