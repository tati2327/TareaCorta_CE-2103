#ifndef LIST_VEHICLE_H
#define LIST_VEHICLE_H

#include "List.h"
#include <string>

class Vehicle {
    public:
        List<string> listProcess; /*! < Lista de strings con los procesos con su respectivo tiempo */

        int type; /*! < Tipo de vehiculo creado */
        int time; /*! <Tiempo del proceso que se está ejecutando*/
        char process; /*! < Tipo de proceso por el que va la creacion del carro*/
        bool end; /*! < Atributo para saber cuando se creo el carro*/

        /*! Vehicle()
         * Constructor de la clase
         * Clang-Tidy: los constructores de un solo argumento deben marcarse
         * como explícitos para evitar conversiones implícitas involuntarias*/
        explicit Vehicle(int type);

        /*! Vehicle()
         * Constructor que crea un vehiculo de tipo 0
         */
        Vehicle();
};


#endif //LIST_VEHICLE_H
