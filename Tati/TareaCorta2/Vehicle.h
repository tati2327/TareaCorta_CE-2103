//
// Created by pablo on 19/04/19.
//

#ifndef TAREACORTA2_VEHICLE_H
#define TAREACORTA2_VEHICLE_H

#include "List.h"

class Vehicle {
    public:
        List<string> listProcess;

        int type, time;
        char _process;
        bool end;

        /*! Clang-Tidy: los constructores de un solo argumento deben marcarse
         * como explícitos para evitar conversiones implícitas involuntarias*/
        explicit Vehicle(int type);
        Vehicle();
        void sendProcess(int _time, char _process, Vehicle* vehicle);
};


#endif //TAREACORTA2_VEHICLE_H
