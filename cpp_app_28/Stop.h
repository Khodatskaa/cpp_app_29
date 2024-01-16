#ifndef Stop_h
#define Stop_h

#include <iostream>
#include "Passenger.h"
#include "Minibus.h"

class Stop {
public:
    Stop(bool isFinal);
    int getStopNumber() const;
    void passengerArrival();
    void minibusArrival(Minibus& minibus);
    int getPeopleAtStop() const;
private:
    static int stopCounter;
    int stopNumber;
    int peopleAtStop;
    bool finalStop;
};

#endif
