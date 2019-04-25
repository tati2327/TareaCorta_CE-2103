#ifndef LIST_MANAGER_H
#define LIST_MANAGER_H


#include "Vehicle.h"

class Manager {

    public:
        bool p0, p1, p2;
        char type;
        Vehicle *vehicleDefault;

        explicit Manager(char type);

        void addProcess(List<Vehicle*> typeProcess, Vehicle _vehicle);
        void deleteProcess(List<Vehicle*> typeProcess, int index);
};


#endif //LIST_MANAGER_H
