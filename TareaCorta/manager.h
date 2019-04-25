#ifndef MANAGER_H
#define MANAGER_H
#include "vehicule.h"

class Manager
{
public:
public:
        bool p0, p1, p2;
        char type;
        Vehicule *vehicleDefault;

        explicit Manager(char type);

        void addProcess(List<Vehicule*> typeProcess, Vehicule _vehicle);
        void deleteProcess(List<Vehicule*> typeProcess, int index);
};

#endif // MANAGER_H
