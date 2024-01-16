#ifndef Minibus_h
#define Minibus_h

#include <iostream>
#include "Passenger.h"

class Minibus {
public:
    Minibus();
    int getEmptySeats();
private:
    int emptySeats;
};

#endif 
