#ifndef VEHICULE_H
#define VEHICULE_H

#include "list.h"
#include <string>

class Vehicule
{

public:
        List<string> listProcess;

        int type, time;
        char process;
        bool end;

        /*! Clang-Tidy: los constructores de un solo argumento deben marcarse
         * como explícitos para evitar conversiones implícitas involuntarias*/
        explicit Vehicule(int type);
        Vehicule();
};

#endif // VEHICULE_H
