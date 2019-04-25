#include "Process.h"
#include <thread>
#include <chrono>

Process * Process:: myProcess = nullptr;

Process::Process() {
    cout << "Se creo una instancia de process" << endl;
    flagA = false;
    flagB = false;
    flagC = false;
    flagD = false;
    flagE = false;
    flagF = false;

    vehicleDefault = new Vehicle();

    for(int i = 0; i<=2 ; i++){
        cout<<i<<endl;
        productionA.add(vehicleDefault);
        productionB.add(vehicleDefault);
        productionC.add(vehicleDefault);
        productionD.add(vehicleDefault);
        productionE.add(vehicleDefault);
        productionF.add(vehicleDefault);
    }
}

Process *Process::getInstance() {
    if(myProcess == nullptr)
        myProcess = new Process;
    return myProcess;
}

bool Process::applyProcess(List<Vehicle *>& process, int field, char _process) {
    while (process.getData(field)->time >0){
        cout<<"Le quedan "<<process.getData(field)->time<<" segundos para terminar el proceso "<<process.getData(field)->process<<" al vehiculo tipo "<<process.getData(field)->type<<endl;
        process.getData(field)->time--;
        this_thread::sleep_for(chrono::seconds(4));

        if(field == 0) {
            if (_process == 'A') {
                if (!flagA) continue;
                else{ flagA = false; cout<<"<-----------Se paro el proceso "<<_process<< " en "<<process.getData(field)->time<<endl; return false;}
            }else if (_process == 'B') {
                if (!flagB) continue;
                else { flagB = false; cout<<"<----------Se paro el proceso "<<_process<< " en "<<process.getData(field)->time<<endl; return false;}
            }else if (_process == 'C') {
                if (!flagC) continue;
                else { flagC = false; cout<<"<----------Se paro el proceso "<<_process<< " en "<<process.getData(field)->time<<endl; return false;}
            }else if (_process == 'D') {
                if (!flagD) continue;
                else { flagD = false; cout<<"<----------Se paro el proceso "<<_process<< " en "<<process.getData(field)->time<<endl; return false;}
            }else if (_process == 'E') {
                if (!flagE) continue;
                else { flagE = false; cout<<"<----------Se paro el proceso "<<_process<< " en "<<process.getData(field)->time<<endl; return false;}
            }else if (_process == 'F') {
                if (!flagF) continue;
                else { flagF = false; cout<<"<----------Se paro el proceso "<<_process<< " en "<<process.getData(field)->time<<endl; return false;}
            }
        }
    }
    Vehicle* temp = &*process.getData(field);
    cout<<"Se termino de aplicar el proceso "<<temp->process<<" al vehiculo tipo "<<temp->type<<endl;
    process.getNode(field)->setValue(vehicleDefault);

    temp->listProcess.deleteIndex(0);
    if(temp->listProcess.size() == 0) {
        temp->end = true;
        return true;
    }

    temp->process = temp->listProcess.getData(0)[0];
    temp->time = temp->listProcess.getData(0)[1] - '0';
    return true;
}