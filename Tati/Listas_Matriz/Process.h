#ifndef LIST_PROCESS_H
#define LIST_PROCESS_H

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

        static Process* getInstance();
        void applyProcess(List<Vehicle*> process, int field);
};


#endif //LIST_PROCESS_H
