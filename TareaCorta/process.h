#ifndef PROCESS_H
#define PROCESS_H
#include "list.h"
#include <mutex>
#include "list.h"
#include "vehicule.h"
class Process
{
private:

        static Process* myProcess;
        Process();
    public:
        List<Vehicule*> productionA;
        List<Vehicule*> productionB;
        List<Vehicule*> productionC;
        List<Vehicule*> productionD;
        List<Vehicule*> productionE;
        List<Vehicule*> productionF;

        Vehicule *vehicleDefault;

        bool flagA, flagB, flagC, flagD, flagE, flagF;

        static Process* getInstance();
        bool applyProcess(List<Vehicule*>& process, int field, char _process);

        List<int> tatiana;
};

#endif // PROCESS_H
