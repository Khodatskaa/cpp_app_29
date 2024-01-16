#include "Simulation.h"

Simulation::Simulation() {}

void Simulation::runSimulation() {
    Stop stop(false);
    Minibus minibus;
    Passenger passenger;

    std::cout << "Simulation running..." << std::endl;
    std::cout << "Stop: " << stop.getStopNumber() << std::endl; 
    std::cout << "Minibus empty seats: " << minibus.getEmptySeats() << std::endl;
    std::cout << "Passenger created!" << std::endl;
}
