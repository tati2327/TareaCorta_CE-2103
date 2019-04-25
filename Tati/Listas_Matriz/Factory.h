#ifndef LIST_FACTORY_H
#define LIST_FACTORY_H

#include <mutex>
#include "Vehicle.h"
#include "List.h"
#include "Process.h"

class Factory {
    public:
        Factory();

        List<Vehicle*> queeGeneral;
        Process * myProcess;
        mutex myMutex;

        void createVehicle(int type);
        bool callProcess(List<Vehicle*>& productionList, Vehicle* vehicle, char typeProcess);
        void queeManage();
};


#endif //LIST_FACTORY_H
