#ifndef LIST_VEHICLE_H
#define LIST_VEHICLE_H

#include "List.h"
#include <string>

class Vehicle {
    public:
        List<string> listProcess;

        int type, time;
        char process;
        bool end;

        /*! Clang-Tidy: los constructores de un solo argumento deben marcarse
         * como explícitos para evitar conversiones implícitas involuntarias*/
        explicit Vehicle(int type);
        Vehicle();
};


#endif //LIST_VEHICLE_H
