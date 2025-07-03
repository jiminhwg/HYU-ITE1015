#include <iostream>
#include "minimal_fighter.h"
MinimalFighter::MinimalFighter() {
    mHp = 0;
    mPower = 0;
    mStatus = Invalid;
}
MinimalFighter::MinimalFighter(int _hp, int _power) {
    mHp = _hp;
    if (mHp <= 0) {
        mStatus = Dead;
    }
    else {
        mStatus = Alive;
    }
    mPower = _power;
}
int MinimalFighter::hp() {
    return mHp;
}
int MinimalFighter::power() {
    return mPower;
}
FighterStatus MinimalFighter::status() {
    if (mHp <= 0) {
        mStatus = Dead;
    }
    else {
        mStatus = Alive;
    }
    return mStatus; 
}
void MinimalFighter::setHp(int _hp) {
    mHp = _hp;
}
void MinimalFighter::hit(MinimalFighter* _enemy) {
    _enemy->mHp = _enemy->mHp - mPower;
    mHp = mHp - _enemy->mPower;
}
void MinimalFighter::attack(MinimalFighter *_enemy) {
    _enemy->mHp = _enemy->mHp - mPower;
    mPower = 0;
}
void MinimalFighter::fight(MinimalFighter* _enemy) {
    while (_enemy->mHp > 0 && mHp > 0) {
        mHp = mHp-_enemy->mPower;
        _enemy->mHp = _enemy->mHp - mPower;
    }
    
}