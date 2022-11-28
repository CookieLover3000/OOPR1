/*
 * Stopwatch.h
 *
 *  Created on: Oct 27, 2019
 *      Author: john
 */

#ifndef STOPWATCH_H_
#define STOPWATCH_H_

#include <sys/time.h>

class Stopwatch
{
public:
	Stopwatch();
	void reset();
	void begin();
	void stop();
	unsigned int deTijd() const;
	//	virtual ~Stopwatch();

private:
	// struct timeval begintijd,eindtijd;
	long begintijd, eindtijd;
};

#endif /* STOPWATCH_H_ */
