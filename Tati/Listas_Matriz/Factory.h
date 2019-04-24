#ifndef LIST_FACTORY_H
#define LIST_FACTORY_H

#include "Vehicle.h"
#include "List.h"
#include "Process.h"

class Factory {
    public:
        Factory();

        List<Vehicle*> queeGeneral;
        Process * myProcess;

        void createVehicle(int type);
        void callProcess(List<Vehicle*> process, Vehicle* vehicle);
};


#endif //LIST_FACTORY_H
