#include "clock_time.h"
#include "clocks.h"
#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<Clock*> clocks;
    SundialClock* _SundialClock = new SundialClock(0, 0, 0);
    CuckooClock* _CuckooClock = new CuckooClock(0, 0, 0);
    GrandFatherClock* _GrandFatherClock = new GrandFatherClock(0, 0, 0);
    WristClock* _WristClock = new WristClock(0, 0, 0);
    AtomicClock* _AtomicClock = new AtomicClock(0, 0, 0);
    clocks.push_back(_SundialClock);
    clocks.push_back(_CuckooClock);
    clocks.push_back(_GrandFatherClock);
    clocks.push_back(_WristClock);
    clocks.push_back(_AtomicClock);

    for (int i = 0; i < clocks.size(); i++) {
        clocks[i]->reset();
    }

    int simulationtime;
    cin >> simulationtime;
    int hour = simulationtime/10000;
    int minute = (simulationtime%10000)/100; //4800
    int second = simulationtime%100;
    
    Clock* clock = new SundialClock(hour, minute, second);
    //--------------------------------------------------------------
    cout << "Reported clock times after resetting: " << endl;
    for (int i = 0; i < clocks.size(); i++) {
        clocks[i]->displayTime();
        cout << endl;
    }
    cout << endl;
    //--------------------------------------------------------------
    cout << "Running the clocks ..." << endl;
    for (int i = 0; i < simulationtime; i++) {
        for (int i = 0; i < clocks.size(); i++) {
            clocks[i]->tick();
        }
    }
    cout << endl;
    //--------------------------------------------------------------
    cout << "Reported clock times after running:" << endl;
    for (int i = 0; i < clocks.size(); i++) {
        clocks[i]->displayTime();
        cout << endl;
    }
    //--------------------------------------------------------------
    for (const auto& element : clocks) {
        delete element;
    }
    delete clock;
}