#include "clocks.h"
#include <iostream>

void Clock::reset() {
    _clockTime.reset();
    _totalDrift = 0;
}

void Clock::tick() {
    _clockTime.increment();
    _totalDrift += _driftPerSecond;
}


void SundialClock::displayTime() {
    std::cout << "SundialClock ";
    _clockTime.display();
    std::cout << ", total drift: " << _totalDrift;
}

void CuckooClock::displayTime() {
    std::cout << "CuckooClock ";
    _clockTime.display();
    std::cout << ", total drift: " << _totalDrift;
}

void GrandFatherClock::displayTime() {
    std::cout << "GrandFatherClock ";
    _clockTime.display();
    std::cout << ", total drift: " << _totalDrift;
}

void WristClock::displayTime() {
    std::cout << "WristClock ";
    _clockTime.display();
    std::cout << ", total drift: " << _totalDrift;
}

void AtomicClock::displayTime() {
    std::cout << "AtomicClock ";
    _clockTime.display();
    std::cout << ", total drift: " << _totalDrift;
}