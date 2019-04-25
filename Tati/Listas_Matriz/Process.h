#ifndef LIST_PROCESS_H
#define LIST_PROCESS_H

#include <mutex>
#include "List.h"
#include "Vehicle.h"

class Process {

    private:
        Process();
        static Process* myProcess;

    public:
        List<Vehicle*> productionA;
        List<Vehicle*> productionB;
        List<Vehicle*> productionC;
        List<Vehicle*> productionD;
        List<Vehicle*> productionE;
        List<Vehicle*> productionF;

        Vehicle *vehicleDefault;

        bool flagA, flagB, flagC, flagD, flagE, flagF;

        static Process* getInstance();
        bool applyProcess(List<Vehicle*>& process, int field, char _process);
};

#endif //LIST_PROCESS_H
