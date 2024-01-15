#ifndef Stop_h
#define Stop_h

#include <iostream>
#include "Passenger.h"
#include "Minibus.h"

class Stop {
public:
	Stop();
	void run();

private:
    double getPassengerArrivalTime();
    double getMinibusArrivalTime();

    bool isFinalStop();
    
    void determineAverageStayTime();
    void determineTimeBetweenMinibuses();

    double passengerArrivalTime;
    double minibusArrivalTime;
    double averageStayTime;
    double timeBetweenMinibuses;

    int passengerCount;
    int minibusCount;
    int finalStop;

    Minibus minibus;
    Passenger passenger;

    double time;
};

#endif 
