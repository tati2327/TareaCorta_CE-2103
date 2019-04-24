#ifndef TAREACORTA2_FACTORY_H
#define TAREACORTA2_FACTORY_H

#include "List.h"
#include "Vehicle.h"

class Factory {

    private:
        Factory();
        static Factory *myFactory;
        Vehicle *v;

    public:
        List<Vehicle*> queeGeneral;

        void createVehicle(int type);
        static Factory * getInstance();
        void execute();
};

#endif //TAREACORTA2_FACTORY_H