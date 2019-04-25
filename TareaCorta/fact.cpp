#include "fact.h"
#include"process.h"
#include <string>
#include <thread>
#include <chrono>
#include <string>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wmissing-noreturn"
using namespace std;

Fact::Fact()
{
  myProcess = Process::getInstance();

}




void Fact::createVehicle(int type) {
    Vehicule *myVehicle =  new Vehicule(type);

    myVehicle->process = myVehicle->listProcess.getData(0)[0];
    myVehicle->time = myVehicle->listProcess.getData(0)[1] - '0';

    cout<<"<-------------Iniciando la producción de un vehículo tipo "<<myVehicle->type<<endl;

    while(!myVehicle->end){
        if(myVehicle->process == 'A'){
            if(!callProcess(myProcess->productionA, myVehicle, 'A')) {
                while(myVehicle->process == 'A') { }
            } cout<<"PROCESO A LISTO"<<endl;}
        if(myVehicle->process == 'B'){
            if(callProcess(myProcess->productionB, myVehicle, 'B')){
                while (myVehicle->process == 'B') { }
            } cout<<"PROCESO B LISTO"<<endl;}
        if(myVehicle->process == 'C'){
            if(callProcess(myProcess->productionC, myVehicle, 'C')){
                while (myVehicle->process == 'C') { }
            } cout<<"PROCESO C LISTO"<<endl;}
        if(myVehicle->process == 'D'){
            if(callProcess(myProcess->productionD, myVehicle, 'D')){
                while (myVehicle->process == 'D') { }
            } cout<<"PROCESO D LISTO"<<endl;}
        if(myVehicle->process == 'E'){
            if(!callProcess(myProcess->productionE, myVehicle, 'E')){
                while (myVehicle->process == 'E') { }
            } cout<<"PROCESO E LISTO"<<endl;}
        if(myVehicle->process == 'F'){
            if(!callProcess(myProcess->productionF, myVehicle, 'F')){
                while (myVehicle->process == 'F') { }
            } cout<<"PROCESO F LISTO"<<endl;}
    }
    cout<<"<--------------Vehiculo tipo "<<type<<" creado"<<endl;
}

bool Fact::callProcess(List<Vehicule*>& productionList, Vehicule *vehicle, char typeProcess) {
    if(productionList.size() > 3){
        cout<<"ERROR"<<endl;
        return false;
    }

    if(productionList.getData(0)->type == 0) {
        productionList.getNode(0)->setValue(vehicle);
        return myProcess->applyProcess(productionList, 0, typeProcess);
    } else if(productionList.getData(1)->type == 0) {
        productionList.getNode(1)->setValue(vehicle);
        return myProcess->applyProcess(productionList, 1, typeProcess);
    } else if(productionList.getData(2)->type == 0) {
        productionList.getNode(2)->setValue(vehicle);
        return myProcess->applyProcess(productionList, 2, typeProcess);
    }else {

        if(typeProcess == 'A') myProcess->flagA = true;
        else if(typeProcess == 'B') myProcess->flagB = true;
        else if(typeProcess == 'C') myProcess->flagC = true;
        else if(typeProcess == 'D') myProcess->flagD = true;
        else if(typeProcess == 'E') myProcess->flagE = true;
        else if(typeProcess == 'F') myProcess->flagF = true;

        this_thread::sleep_for(chrono::seconds(3)); /*! Doy chance de que se detenga el proceso*/

        Vehicule* temp = &*productionList.getData(0);
        queeGeneral.add(temp);
        cout<<"Se agregó un elemento a la cola del proceso "<<typeProcess<<" ahora tiene "<<queeGeneral.size()<<" elementos"<<endl;
        productionList.getNode(0)->setValue(vehicle);

        cout<<"Aplicando proceso "<<vehicle->process<<" al vehiculo de tipo "<<vehicle->type<<endl;
        return myProcess->applyProcess(productionList, 0, typeProcess);
    }
}

void Fact::queeManage() {
    Vehicule* myVehicle ;
    while (1){
        if(this->queeGeneral.size() == 0) {
            continue;
        }else if(this->queeGeneral.size() > 0){
            this_thread::sleep_for(chrono::seconds(5)); /*! Cada 5 segundos se saca un elemento de la cola*/
            myVehicle = &*this->queeGeneral.getData(0); /*! Hago un deep copy del dato que voy a eliminar de la cola general*/

            this->queeGeneral.deleteIndex(0);
            cout<<"<------------Se sacó un elemento de la cola y quedan "<<this->queeGeneral.size()<<endl;
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
