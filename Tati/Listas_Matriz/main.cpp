#include <iostream>
#include <thread>
#include "List.h"
#include "Factory.h"

using namespace std;

int main() {
    Factory myFactory;

    thread type1(&Factory::createVehicle, &myFactory, 1);
    this_thread::sleep_for(chrono::seconds(3));
    thread type2(&Factory::createVehicle, &myFactory, 1);
    this_thread::sleep_for(chrono::seconds(5));
    thread type3(&Factory::createVehicle, &myFactory, 1);
    this_thread::sleep_for(chrono::seconds(6));
    thread type4(&Factory::createVehicle, &myFactory, 1);
      
    type1.join();
    cout<<"Se inicio hilo 1"<<endl;

    type2.join();
    cout<<"Se inicio hilo 2"<<endl;

    type3.join();
    cout<<"Se inicio hilo 3"<<endl;

    type4.join();
    cout<<"Se inicio hilo 4"<<endl;

    return 0;
}