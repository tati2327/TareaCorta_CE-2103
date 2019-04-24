#include "Process.h"
#include <thread>
#include <chrono>

Process * Process:: myProcess = nullptr;

Process::Process() {
    cout << "Se creo una instancia de process" << endl;
}

Process *Process::getInstance() {
    if(myProcess == nullptr)
        myProcess = new Process;
    return myProcess;
}

void Process::applyProcess(List<Vehicle *> process, int field) {
    while (process.getData(field)->time != 0){
        process.getData(field)->time--;
        this_thread::sleep_for(chrono::seconds(5));
        cout<<"Le quedan "<<process.getData(field)->time<<" para terminar el proceso "<<process.getData(field)->process<<endl;
    }
    cout<<"Se termino de aplicar el proceso "<<process.getData(field)->process<<" al vehiculo tipo "<<process.getData(field)->type<<endl;
    process.getData(field)->listProcess.deleteIndex(0);
    if(process.getData(field)->listProcess.size() == 0) {
        process.getData(field)->end = true;
        return;
    }
    process.getData(field)->time = process.getData(field)->listProcess.getData(0)[1] - '0';
    process.getData(field)->process = process.getData(field)->listProcess.getData(0)[0];
}