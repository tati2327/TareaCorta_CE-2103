#include <thread>
#include "Factory.h"
#include <chrono>
#include <string>

using namespace std;

Factory::Factory(){
    myProcess = Process::getInstance();
}

void Factory::createVehicle(int type) {
    Vehicle *myVehicle =  new Vehicle(type);

    myVehicle->process = myVehicle->listProcess.getData(0)[0];
    myVehicle->time = myVehicle->listProcess.getData(0)[1] - '0';

    cout<<"Se acaba de iniciar la producción de un vehículo tipo "<<myVehicle->type<<endl;

    if(myVehicle->process == 'A')
        callProcess(myProcess->productionA, myVehicle);

    while(!myVehicle->end){
        if(myVehicle->process == 'A')
            callProcess(myProcess->productionA, myVehicle);
        if(myVehicle->process == 'B')
            callProcess(myProcess->productionB, myVehicle);
        if(myVehicle->process == 'C')
            callProcess(myProcess->productionC, myVehicle);
        if(myVehicle->process == 'D')
            callProcess(myProcess->productionD, myVehicle);
        if(myVehicle->process == 'E')
            callProcess(myProcess->productionE, myVehicle);
        if(myVehicle->process == 'F')
            callProcess(myProcess->productionF, myVehicle);
    }
    cout<<"Se terminó de producir un vehiculo tipo "<<type<<endl;
}

void Factory::callProcess(List<Vehicle*> process, Vehicle *vehicle) {
    cout<<"Tamaño de la agenda "<<process.size()<<endl;

    if(process.size() > 3){
        cout<<"ERROR"<<endl;
        return;
    }
    /*! Esta lleno*/
    cout<<"Se llamó a un uevo proceso"<<endl;
    if(process.size() == 3){
        Vehicle* temp = &*process.getData(2);
        queeGeneral.add(temp);
        process.deleteIndex(2);
        process.add(vehicle);
        myProcess->applyProcess(process, 2);
        cout<<"Aplicando proceso "<<vehicle->process<<" al vehiculo de tipo "<<vehicle->type<<endl;
    }else if(process.size() == 2){
        process.add(vehicle);
        myProcess->applyProcess(process, 2);
        cout<<"Aplicando proceso "<<vehicle->process<<" al vehiculo de tipo "<<vehicle->type<<endl;
    }else if(process.size() == 1){
        process.add(vehicle);
        myProcess->applyProcess(process, 1);
        cout<<"Aplicando proceso "<<vehicle->process<<" al vehiculo de tipo "<<vehicle->type<<endl;
    }else if(process.size() == 0){
        process.add(vehicle);
        myProcess->applyProcess(process, 0);
        cout<<"Aplicando proceso "<<vehicle->process<<" al vehiculo de tipo "<<vehicle->type<<endl;
    }
}