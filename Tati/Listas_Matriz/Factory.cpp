#include <thread>
#include "Factory.h"
#include <chrono>
#include <string>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wmissing-noreturn"
using namespace std;

Factory::Factory(){
    myProcess = Process::getInstance();
}

void Factory::createVehicle(int type) {
    Vehicle *myVehicle =  new Vehicle(type);

    myVehicle->process = myVehicle->listProcess.getData(0)[0];
    myVehicle->time = myVehicle->listProcess.getData(0)[1] - '0';

    cout<<"<-------------Iniciando la producción de un vehículo tipo "<<myVehicle->type<<endl;

    while(!myVehicle->end){
        if(myVehicle->process == 'A'){
            if(!callProcess(myProcess->productionA, myVehicle, 'A')) {
                while(myVehicle->process == 'A') { }
            } cout<<"PROCESO A LISTO del vehiculo tipo "<<myVehicle->type<<endl;}
        if(myVehicle->process == 'B'){
            if(callProcess(myProcess->productionB, myVehicle, 'B')){
                while (myVehicle->process == 'B') { }
            } cout<<"PROCESO B LISTO del vehiculo tipo "<<myVehicle->type<<endl;}
        if(myVehicle->process == 'C'){
            if(callProcess(myProcess->productionC, myVehicle, 'C')){
                while (myVehicle->process == 'C') { }
            } cout<<"PROCESO C LISTO del vehiculo tipo "<<myVehicle->type<<endl;}
        if(myVehicle->process == 'D'){
            if(callProcess(myProcess->productionD, myVehicle, 'D')){
                while (myVehicle->process == 'D') { }
            } cout<<"PROCESO D LISTO del vehiculo tipo "<<myVehicle->type<<endl;}
        if(myVehicle->process == 'E'){
            if(!callProcess(myProcess->productionE, myVehicle, 'E')){
                while (myVehicle->process == 'E') { }
            } cout<<"PROCESO E LISTO del vehiculo tipo "<<myVehicle->type<<endl;}
        if(myVehicle->process == 'F'){
            if(!callProcess(myProcess->productionF, myVehicle, 'F')){
                while (myVehicle->process == 'F') { }
            } cout<<"PROCESO F LISTO del vehiculo tipo "<<myVehicle->type<<endl;}
    }
    cout<<"<--------------Vehiculo tipo "<<type<<" creado----------------->"<<endl;
}

bool Factory::callProcess(List<Vehicle*>& productionList, Vehicle *vehicle, char typeProcess) {
    if(productionList.size() > 3){
        cout<<"ERROR. Hay más vehiculos en la agenda de los que se pueden ejecutar"<<endl;
        return false;
    }

    if(productionList.getData(0)->type == 0) {
        cout<<"Aplicando proceso "<<vehicle->process<<" al vehiculo de tipo "<<vehicle->type<<" en el campo "<<0<<" de la agenda"<<endl;
        productionList.getNode(0)->setValue(vehicle);
        return myProcess->applyProcess(productionList, 0, typeProcess);
    } else if(productionList.getData(1)->type == 0) {
        cout<<"Aplicando proceso "<<vehicle->process<<" al vehiculo de tipo "<<vehicle->type<<" en el campo "<<1<<" de la agenda"<<endl;
        productionList.getNode(1)->setValue(vehicle);
        return myProcess->applyProcess(productionList, 1, typeProcess);
    } else if(productionList.getData(2)->type == 0) {
        cout<<"Aplicando proceso "<<vehicle->process<<" al vehiculo de tipo "<<vehicle->type<<" en el campo "<<2<<" de la agenda"<<endl;
        productionList.getNode(2)->setValue(vehicle);
        return myProcess->applyProcess(productionList, 2, typeProcess);
    }else {
        cout<<"La agenda del proceso "<<typeProcess<<" esta llena"<<endl;

        if(typeProcess == 'A') myProcess->flagA = true;
        else if(typeProcess == 'B') myProcess->flagB = true;
        else if(typeProcess == 'C') myProcess->flagC = true;
        else if(typeProcess == 'D') myProcess->flagD = true;
        else if(typeProcess == 'E') myProcess->flagE = true;
        else if(typeProcess == 'F') myProcess->flagF = true;

        this_thread::sleep_for(chrono::seconds(6)); /*! Doy chance de que se detenga el proceso*/

        Vehicle* temp = &*productionList.getData(0);
        queeGeneral.add(temp);
        cout<<"Se agregó un elemento a la cola del proceso "<<typeProcess<<" ahora tiene "<<queeGeneral.size()<<" elementos"<<endl;
        productionList.getNode(0)->setValue(vehicle);

        cout<<"Aplicando proceso "<<vehicle->process<<" al vehiculo de tipo "<<vehicle->type<<endl;
        return myProcess->applyProcess(productionList, 0, typeProcess);
    }
}

void Factory::queeManage() {
    Vehicle* myVehicle ;
    while (1){
        if(this->queeGeneral.size() == 0) {
            continue;
        }else if(this->queeGeneral.size() > 0){
            this_thread::sleep_for(chrono::seconds(10)); /*! Cada 5 segundos se saca un elemento de la cola*/
            myVehicle = &*this->queeGeneral.getData(0); /*! Hago un deep copy del dato que voy a eliminar de la cola general*/

            this->queeGeneral.deleteIndex(0);
            cout<<"<------------Se sacó el proceso "<<myVehicle->process<<" del vehiculo tipo "<<myVehicle->type<<" de la cola y quedan "<<this->queeGeneral.size()<<endl;
            if(myVehicle->process == 'A')
                callProcess(myProcess->productionA, myVehicle, 'A');
            else if(myVehicle->process == 'B')
                callProcess(myProcess->productionB, myVehicle, 'B');
            else if(myVehicle->process == 'C')
                callProcess(myProcess->productionC, myVehicle, 'C');
            else if(myVehicle->process == 'D')
                callProcess(myProcess->productionD, myVehicle, 'D');
            else if(myVehicle->process == 'E')
                callProcess(myProcess->productionE, myVehicle, 'E');
            else if(myVehicle->process == 'F')
                callProcess(myProcess->productionF, myVehicle, 'F');
        }
    }
}
#pragma clang diagnostic pop