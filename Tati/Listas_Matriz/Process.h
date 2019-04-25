#ifndef LIST_PROCESS_H
#define LIST_PROCESS_H

#include <mutex>
#include "List.h"
#include "Vehicle.h"

class Process {

    private:
        /*! Process()
         * Constructor privado para aplicar el patron de diseño conocido como SINGLETON
         */
        Process();
        static Process* myProcess; /*! < Instancia estatica de process para que la clase sea "estatica"*/

    public:
        List<Vehicle*> productionA; /*! < Lista de produccion del proceso A*/
        List<Vehicle*> productionB; /*! < Lista de produccion del proceso B*/
        List<Vehicle*> productionC; /*! < Lista de produccion del proceso C*/
        List<Vehicle*> productionD; /*! < Lista de produccion del proceso D*/
        List<Vehicle*> productionE; /*! < Lista de produccion del proceso E*/
        List<Vehicle*> productionF; /*! < Lista de produccion del proceso F*/

        Vehicle *vehicleDefault; /*! < Instancia de un vehiculo por default de tipo 0*/

        bool flagA, flagB, flagC, flagD, flagE, flagF; /*! < Banderas para detener la aplicacion de un proceso*/

        /*! getInstance()
         * Solo permite crear una instancia de la clase process
         * @return una instancia de process
         */
        static Process* getInstance();

        /*! applyProcess()
         * Aplica un proceso a un vehiculo, le resta el tiempo de tiene ese proceso hasta llegar a cero
         * @param process
         * @param field
         * @param _process
         * @return un booleano para saber si se ejecuto bien o si fue interrumpido
         */
        bool applyProcess(List<Vehicle*>& process, int field, char _process);
};

#endif //LIST_PROCESS_H
