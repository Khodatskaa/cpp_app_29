#include "Minibus.h"
#include <cstdlib>

Minibus::Minibus() : emptySeats(rand() % 10 + 1) {}

int Minibus::getEmptySeats() {
    return emptySeats;
}
