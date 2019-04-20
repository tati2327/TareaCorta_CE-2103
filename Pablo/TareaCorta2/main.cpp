#include <iostream>
#include "List.h"
#include "Factory.h"
#include "Vehicle.h"

int main() {
    Factory factory;
    Vehicle type1 = Vehicle(3,2,3,2,3,2);
    factory.cars.add(type1);

    Vehicle type2=Vehicle(2,3,2,3,2,3);
    factory.cars.add(type2);

    Vehicle type3=Vehicle(2,2,3,3,2,3);
    factory.cars.add(type3);

    Vehicle type4=Vehicle(3,3,2,2,3,2);
    factory.cars.add(type4);

    Vehicle type5=Vehicle(3,3,3,2,2,3);
    factory.cars.add(type5);

    Vehicle type6=Vehicle(2,2,2,3,3,2);
    factory.cars.add(type6);





    return 0;
}