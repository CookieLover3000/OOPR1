/*
 * Stopwatch.cpp
 *
 *  Created on: Oct 27, 2019
 *      Author: john
 */

#include "Stopwatch.h"

Stopwatch::Stopwatch() : begintijd(0), eindtijd(0)
{
	//	 gettimeofday(&begintijd,0);
	//	 gettimeofday(&eindtijd, 0);
}

//Stopwatch::~Stopwatch()
//{
//}

void Stopwatch::reset()
{
	begintijd = 0;
	eindtijd = 0;
}

void Stopwatch::begin()
{
	struct timeval tijd;
	gettimeofday(&tijd, 0);
	begintijd = tijd.tv_sec;
}

void Stopwatch::stop()
{
	struct timeval tijd;
	gettimeofday(&tijd, 0);
	eindtijd = tijd.tv_sec;
}

unsigned int Stopwatch::deTijd() const
{
	return eindtijd - begintijd;
}
