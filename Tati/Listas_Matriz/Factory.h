#ifndef LIST_FACTORY_H
#define LIST_FACTORY_H

#include <mutex>
#include "Vehicle.h"
#include "List.h"
#include "Process.h"

/*! Class Factory
 * La clase fabric simula una fábica que tiene 6 lineas de producción que son
 * vehiculos tipo1, tipo2, ... ,tipo6. Y además maneja los procesos para crear
 * estos vehiculos
 * */
class Factory {
    public:
        List<Vehicle*> queeGeneral; /*! < Cola general donde se ponen llos procesos necesarios en espera*/
        Process * myProcess; /*! < Instancia de Process para ejecutarle los procesos a los vehiculos*/

        /*! Factory()
         *  Contructor de la clase, crea una instancia de factory
         */
        Factory();

        /*! createVehicle()
         * Crea un nuevo vehiculo segun el tipo
         * @param type, es un int
         */
        void createVehicle(int type);

        /*! callProcess()
         * Manda a llamar un proceso especifico que necesite el vehiculo
         * Verifica las listas de los procesos y inserta el vehiculo en la agenda que corresponda
         * @param productionList, una lista de vehiculos del proceso
         * @param vehicle, el vehiculo que se le va aplicar el proceso
         * @param typeProcess, el tipo de proceso que se aplicara
         * @return un booleano para saber si la aplicacion del proceso fue efectiva o no
         */
        bool callProcess(List<Vehicle*>& productionList, Vehicle* vehicle, char typeProcess);

        /*! queeManage()
         * Función que se mantiene siempre en un hilo para que revise la cola y cada 5 segundos
         * saque elementos de la espera y los ejecute
         */
        void queeManage();
};


#endif //LIST_FACTORY_H
