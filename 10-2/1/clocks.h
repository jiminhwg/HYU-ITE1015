#include "clock_time.h"
//ABSTRACT BASE CLASSES
class Clock {
  public:
    Clock(int hour, int minute, int second, double driftPerSecond){
      _driftPerSecond = driftPerSecond;
      _clockTime.setTime(hour, minute, second, 1);
    };
    virtual ~Clock() {};
    void reset();
    void tick();
    virtual void displayTime() = 0;
  protected:
    ClockTime _clockTime;
    double _driftPerSecond;
    double _totalDrift;
};

class NaturalClock: public Clock {
  public:
    NaturalClock(int hour, int minute, int second, double driftPerSecond): Clock(hour, minute, second, driftPerSecond) {};
};
class MechanicalClock: public Clock {
  public:
    MechanicalClock(int hour, int minute, int second, double driftPerSecond): Clock(hour, minute, second, driftPerSecond) {};
};

class DigitalClock: public Clock {
  public:
    DigitalClock(int hour, int minute, int second, double driftPerSecond): Clock(hour, minute, second, driftPerSecond) {};
};

class QuantumClock: public Clock {
  public:
    QuantumClock(int hour, int minute, int second, double driftPerSecond): Clock(hour, minute, second, driftPerSecond) {};
};


//CONCRETE DERIVED CLASSES
class SundialClock: public NaturalClock{
  public:
    SundialClock(int hour, int minute, int second): NaturalClock(hour, minute, second, 0.0) {};
    virtual void displayTime() override;
};
class CuckooClock: public MechanicalClock {
  public:
    CuckooClock(int hour, int minute, int second): MechanicalClock(hour, minute, second, 0.000694444) {};
    virtual void displayTime() override;

};
class GrandFatherClock: public MechanicalClock {
  public:
    GrandFatherClock(int hour, int minute, int second): MechanicalClock(hour, minute, second, 0.000347222) {};
    virtual void displayTime() override;

};
class WristClock: public DigitalClock {
  public:
    WristClock(int hour, int minute, int second): DigitalClock(hour, minute, second, 0.000034722) {};
    virtual void displayTime() override;


};
class AtomicClock: public QuantumClock {
  public:
    AtomicClock(int hour, int minute, int second): QuantumClock(hour, minute, second, 0) {};
    virtual void displayTime() override;
};
