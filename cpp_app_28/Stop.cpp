#include "Stop.h"

int Stop::stopCounter = 0;

Stop::Stop(bool isFinal) : stopNumber(++stopCounter), peopleAtStop(0), finalStop(isFinal) {}

int Stop::getStopNumber() const {
    return stopNumber;
}

void Stop::passengerArrival() {
    peopleAtStop++;
}

void Stop::minibusArrival(Minibus& minibus) {
    int emptySeats = minibus.getEmptySeats();
    if (peopleAtStop > emptySeats) {
        peopleAtStop -= emptySeats;
    }
    else {
        peopleAtStop = 0;
    }
}

int Stop::getPeopleAtStop() const {
    return peopleAtStop;
}