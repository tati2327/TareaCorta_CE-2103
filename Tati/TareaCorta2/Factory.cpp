#include <thread>
#include "Factory.h"
#include <chrono>

Factory * Factory:: myFactory = nullptr;

Factory::Factory(){
    cout<<"Se creó una nstancia de la fábrica"<<endl;
    v = new Vehicle;

    thread exe(&Factory::execute, this);
    exe.detach();
}

void Factory::createVehicle(int type) {
    Vehicle *myVehicle =  new Vehicle(type);

    myVehicle->sendProcess(myVehicle->listProcess.getData(1)[0],myVehicle->listProcess.getData(1)[1], myVehicle);

    while(!myVehicle->end){
        /*! while para pausar la funcion de createVehicle()*/
    }
    cout<<"Se terminó de producir un vehiculo tipo "<<type<<endl;
}

Factory *Factory::getInstance() {
    if(myFactory == nullptr){
        myFactory = new Factory();
    }
    return myFactory;
}

void Factory::execute() {
    while(1){
        if(queeGeneral.size() == 0){
            continue;
        }else{
            v->sendProcess(queeGeneral.getData(0)->time, queeGeneral.getData(0)->_process, queeGeneral.getData(0));
            this_thread::sleep_for(chrono::seconds(5));
        }
    }
}
