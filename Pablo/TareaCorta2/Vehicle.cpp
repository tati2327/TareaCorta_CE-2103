#include "Vehicle.h"

Vehicle::Vehicle() = default;

Vehicle::Vehicle(int timeA, int timeB, int timeC, int timeD, int timeE, int timeF) {
    this->timeA=timeA;
    this->timeB=timeB;
    this->timeC=timeC;
    this->timeD=timeD;
    this->timeE=timeE;
    this->timeF=timeF;
}

int Vehicle::getTimeF(){
    return timeF;
}

void Vehicle::setTimeF(int timeF) {
    Vehicle::timeF = timeF;
}

int Vehicle::getTimeA() {
    return timeA;
}

int Vehicle::getTimeB(){
    return timeB;
}

int Vehicle::getTimeC(){
    return timeC;
}

int Vehicle::getTimeD(){
    return timeD;
}

int Vehicle::getTimeE(){
    return timeE;
}

bool Vehicle::isA(){
    return a;
}

bool Vehicle::isB(){
    return b;
}

bool Vehicle::isC(){
    return c;
}

bool Vehicle::isD(){
    return d;
}

bool Vehicle::isE(){
    return e;
}

void Vehicle::setA(bool a) {
    Vehicle::a = a;
}

void Vehicle::setB(bool b) {
    Vehicle::b = b;
}

void Vehicle::setC(bool c) {
    Vehicle::c = c;
}

void Vehicle::setD(bool d) {
    Vehicle::d = d;
}

void Vehicle::setE(bool e) {
    Vehicle::e = e;
}

