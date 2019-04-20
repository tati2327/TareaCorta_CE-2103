//
// Created by pablo on 19/04/19.
//

#ifndef TAREACORTA2_FACTORY_H
#define TAREACORTA2_FACTORY_H

#include "List.h"
#include "Vehicle.h"


class Factory {
public:
    Factory();

    List<Vehicle> cars;
    List<Vehicle> general;
    List<Vehicle> queueA;
    List<Vehicle> queueB;
    List<Vehicle> queueC;
    List<Vehicle> queueD;
    List<Vehicle> queueE;

    void processA(int time);
    void processB(int time);
    void processC(int time);
    void processD(int time);
    void processE(int time);

};


#endif //TAREACORTA2_FACTORY_H
