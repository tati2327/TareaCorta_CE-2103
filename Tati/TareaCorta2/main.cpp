#include <iostream>
#include "List.h"
#include "Factory.h"
#include "Vehicle.h"
#include <thread>

int main() {
   // Factory * factory = Factory::getInstance();

    /*! Declaro los hilos
     * Vamos a hacer un carro de cada tipo */
   /* thread type1(&Factory::createVehicle, factory, 1);
    thread type2(&Factory::createVehicle, factory, 2);
    thread type3(&Factory::createVehicle, factory, 3);
    //thread type4(&Factory::createVehicle, &factory, 4);
    //thread type5(&Factory::createVehicle, &factory, 5);
    //thread type6(&Factory::createVehicle, &factory, 6);

    /*! Inicio los hilos*/
   /* type1.detach();
    type2.detach();
    type3.detach();*/
    //type4.detach();
    //type5.detach();
    //type6.detach();
    List<int> nutrias;
    nutrias.add(2);
    nutrias.add(6);
    nutrias.add(8);
    nutrias.deleteIndex(2);
    nutrias.show();

    return 0;
}