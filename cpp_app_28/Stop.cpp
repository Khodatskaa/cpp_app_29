#include "Stop.h"

int Stop::stopCounter = 0;

Stop::Stop(bool isFinal) : stopNumber(++stopCounter), peopleAtStop(0), finalStop(isFinal) {}

int Stop::getStopNumber() const {
    return stopNumber;
}

void Stop::passengerArrival() {
    peopleAtStop++;
}

void Stop::minibusArrival(Minibus& minibus, int passengersEntering, int passengersLeaving) {
    int emptySeats = minibus.getEmptySeats();

    peopleAtStop += passengersEntering;
    peopleAtStop -= passengersLeaving;

    std::cout << "Bus departed from Stop " << getStopNumber() << ". Seats left: " << emptySeats - peopleAtStop << std::endl;
    std::cout << "Passengers entering: " << passengersEntering << ", Passengers leaving: " << passengersLeaving << std::endl;
}

int Stop::getPeopleAtStop() const {
    return peopleAtStop;
}
