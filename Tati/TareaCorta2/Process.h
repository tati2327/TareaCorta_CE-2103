#ifndef TAREACORTA2_PROCESS_H
#define TAREACORTA2_PROCESS_H

#include "List.h"
#include "Vehicle.h"
#include "Factory.h"

class Process {
    private:
        Process();
        static Process* myProcess;
        Vehicle* vehicleDefault;
        Factory * myFactory;

    public:
        List<Vehicle*> productionA;
        List<Vehicle*> productionB;
        List<Vehicle*> productionC;
        List<Vehicle*> productionD;
        List<Vehicle*> productionE;
        List<Vehicle*> productionF;

        void makeProcess(int time, char _process, Vehicle* vehicle);
        void applyProcess(Vehicle* vehicle, List<Vehicle*> _production);
        static Process* getInstance();
        void checkField(List<Vehicle*> process, int field);
        void execute();
};

#endif //TAREACORTA2_PROCESS_H
