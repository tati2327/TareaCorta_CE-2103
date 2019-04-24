#include "Vehicle.h"
#include "Process.h"
#include <iostream>

using namespace std;

Vehicle::Vehicle() {
    int type = 0;
}

/*! Cuando se crea un nuevo vehiculo en el constructor se le colocan sus respectivos tiempos*/
Vehicle::Vehicle(int type) {
    this->type = type;
    this->end = false;

    /*! Si el vehiculo es de tipo 1*/
    if(type == 1){
        this->listProcess.add("A2");
        this->listProcess.add("B2");
        this->listProcess.add("C4");
        this->listProcess.add("D1");
        this->listProcess.add("E3");
        this->listProcess.add("F1");
    }
    /*! Si el vehiculo es de tipo 2*/
    else if(type == 2){
        this->listProcess.add("C2");
        this->listProcess.add("A1");
        this->listProcess.add("B1");
        this->listProcess.add("E2");
        this->listProcess.add("D3");
        this->listProcess.add("F1");
    }
    /*! Si el vehiculo es de tipo 3*/
    else if(type == 3){
        this->listProcess.add("D1");
        this->listProcess.add("E4");
        this->listProcess.add("A3");
        this->listProcess.add("C2");
        this->listProcess.add("B1");
        this->listProcess.add("F1");
    }
    /*! Si el vehiculo es de tipo 4*/
    else if(type == 4){
        this->listProcess.add("B2");
        this->listProcess.add("C1");
        this->listProcess.add("D4");
        this->listProcess.add("A3");
        this->listProcess.add("F2");
        this->listProcess.add("E1");
    }
    /*! Si el vehiculo es de tipo 5*/
    else if(type == 5){
        this->listProcess.add("E4");
        this->listProcess.add("F1");
        this->listProcess.add("B2");
        this->listProcess.add("C4");
        this->listProcess.add("A1");
        this->listProcess.add("D3");
    }
    /*! Si el vehiculo es de tipo 6*/
    else if(type == 6){
        this->listProcess.add("F1");
        this->listProcess.add("D1");
        this->listProcess.add("C2");
        this->listProcess.add("B4");
        this->listProcess.add("E3");
        this->listProcess.add("A4");
    }
    else{
        cout<<"Ese tipo de Vehiculo no lo producimos"<<endl;
    }
}

void Vehicle::sendProcess(int _time, char _process, Vehicle* vehicle) {
    Process *p = Process::getInstance();
    p->makeProcess(_time, _process, vehicle);
}
