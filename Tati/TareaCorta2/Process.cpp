#include "Process.h"
#include <thread>
#include <chrono>

Process * Process:: myProcess = nullptr;

Process::Process() {
    cout<<"Se creo una instancia de PROCESS"<<endl;
    myFactory = Factory::getInstance();
    vehicleDefault = new Vehicle();

    for(int i=0; i<4; i++){
        productionA.add(vehicleDefault);
        productionB.add(vehicleDefault);
        productionC.add(vehicleDefault);
        productionD.add(vehicleDefault);
        productionE.add(vehicleDefault);
        productionF.add(vehicleDefault);
    }

    this->execute();
}

void Process::makeProcess(int time, char _process, Vehicle* vehicle) {
    /*if(_process == 'A'){
        if(productionA.getData(0)->type == 0){
            myFactory->queeGeneral.add(productionA.getData(0));
            productionA.add(vehicle);
            //productionA.deleteNode();
        } else if (productionA.getNode(1).data->type == 0){
            myFactory->queeGeneral.add(productionA.getNode(1).data);
            productionA.getNode(1).setData(vehicle);
        } else if (productionA.getNode(2).data->type == 0){
            myFactory->queeGeneral.add(productionA.getNode(2).data);
            productionA.getNode(2).setData(vehicle);
        }
    }else if(_process == 'B'){
        if(productionB.getNode(0).data->type == 0){
            myFactory->queeGeneral.add(productionB.getNode(0).data);
            productionB.getNode(0).setData(vehicle);
        } else if (productionB.getNode(1).data->type == 0){
            myFactory->queeGeneral.add(productionB.getNode(1).data);
            productionB.getNode(1).setData(vehicle);
        } else if (productionB.getNode(2).data->type == 0){
            myFactory->queeGeneral.add(productionB.getNode(2).data);
            productionB.getNode(2).setData(vehicle);
        }
    }else if(_process == 'C'){
        if(productionC.getNode(0).data->type == 0){
            myFactory->queeGeneral.add(productionC.getNode(0).data);
            productionC.getNode(0).setData(vehicle);
        } else if (productionC.getNode(1).data->type == 0){
            myFactory->queeGeneral.add(productionC.getNode(1).data);
            productionC.getNode(1).setData(vehicle);
        } else if (productionC.getNode(2).data->type == 0){
            myFactory->queeGeneral.add(productionC.getNode(2).data);
            productionC.getNode(2).setData(vehicle);
        }
    }else if(_process == 'D'){
        if(productionD.getNode(0).data->type == 0){
            myFactory->queeGeneral.add(productionD.getNode(0).data);
            productionD.getNode(0).setData(vehicle);
        } else if (productionD.getNode(1).data->type == 0){
            myFactory->queeGeneral.add(productionD.getNode(1).data);
            productionD.getNode(1).setData(vehicle);
        } else if (productionD.getNode(2).data->type == 0){
            myFactory->queeGeneral.add(productionD.getNode(2).data);
            productionD.getNode(2).setData(vehicle);
        }
    }else if(_process == 'E'){
        if(productionE.getNode(0).data->type == 0){
            myFactory->queeGeneral.add(productionE.getNode(0).data);
            productionE.getNode(0).setData(vehicle);
        } else if (productionE.getNode(1).data->type == 0){
            myFactory->queeGeneral.add(productionE.getNode(1).data);
            productionE.getNode(1).setData(vehicle);
        } else if (productionE.getNode(2).data->type == 0){
            myFactory->queeGeneral.add(productionE.getNode(2).data);
            productionE.getNode(2).setData(vehicle);
        }
    }else if(_process == 'F'){
        if(productionF.getNode(0).data->type == 0){
            myFactory->queeGeneral.add(productionF.getNode(0).data);
            productionF.getNode(0).setData(vehicle);
        } else if (productionF.getNode(1).data->type == 0){
            myFactory->queeGeneral.add(productionF.getNode(1).data);
            productionF.getNode(1).setData(vehicle);
        } else if (productionF.getNode(2).data->type == 0){
            myFactory->queeGeneral.add(productionF.getNode(2).data);
            productionF.getNode(2).setData(vehicle);
        }
    }*/
}

void Process::applyProcess(Vehicle* vehicle, List<Vehicle*> _production) {
    /*while(vehicle->time != 0){
        vehicle->time--;
        std::this_thread::sleep_for(chrono::seconds(4));
        cout<<"Quedan "<<vehicle->time<<" para terminar el proceso "<<vehicle->_process<<" del vehiculo tipo "<<vehicle->type<<endl;
    }
    cout<<"Se termino el proceso "<<vehicle->_process<<" del vehiculo tipo "<<vehicle->type<<endl;
    vehicle->listProcess.deleteNode(0);
    vehicle->_process = vehicle->listProcess.getNode(0).data[0];
    vehicle->time = vehicle->listProcess.getNode(0).data[0];

    _production.setData(vehicleDefault);*/
}

Process *Process::getInstance() {
    if(myProcess == nullptr)
        myProcess = new Process;
    return myProcess;
}

void Process::checkField(List<Vehicle*> process, int field) {
    /*while(1){
        if(process.getNode(field).data->type == 0)
            continue;
        else{
            this->applyProcess(process.getNode(field).data, process);
        }
    }*/
}

void Process::execute() {
    /*thread threadA0(&Process::checkField, this, productionA, 0);
    thread threadA1(&Process::checkField, this, productionA, 1);
    thread threadA2(&Process::checkField, this, productionA, 2);

    thread threadB0(&Process::checkField, this, productionB, 0);
    thread threadB1(&Process::checkField, this, productionB, 1);
    thread threadB2(&Process::checkField, this, productionB, 2);

    thread threadC0(&Process::checkField, this, productionC, 0);
    thread threadC1(&Process::checkField, this, productionC, 1);
    thread threadC2(&Process::checkField, this, productionC, 2);

    thread threadD0(&Process::checkField, this, productionD, 0);
    thread threadD1(&Process::checkField, this, productionD, 1);
    thread threadD2(&Process::checkField, this, productionD, 2);

    thread threadE0(&Process::checkField, this, productionE, 0);
    thread threadE1(&Process::checkField, this, productionE, 1);
    thread threadE2(&Process::checkField, this, productionE, 2);

    thread threadF0(&Process::checkField, this, productionF, 0);
    thread threadF1(&Process::checkField, this, productionF, 1);
    thread threadF2(&Process::checkField, this, productionF, 2);

    threadA0.detach();
    threadA1.detach();
    threadA2.detach();

    threadB0.detach();
    threadB1.detach();
    threadB2.detach();

    threadC0.detach();
    threadC1.detach();
    threadC2.detach();

    threadD0.detach();
    threadD1.detach();
    threadD2.detach();

    threadE0.detach();
    threadE1.detach();
    threadE2.detach();

    threadF0.detach();
    threadF1.detach();
    threadF2.detach();*/
}