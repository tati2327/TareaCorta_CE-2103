#include <iostream>
#include <thread>
#include "List.h"
#include "Factory.h"

using namespace std;

int main() {
    Factory myFactory;

    thread manage(&Factory::queeManage, &myFactory);

    thread type1(&Factory::createVehicle, &myFactory, 1);
    this_thread::sleep_for(chrono::seconds(1));
    thread type1_1(&Factory::createVehicle, &myFactory, 1);
    this_thread::sleep_for(chrono::seconds(1));
    thread type2(&Factory::createVehicle, &myFactory, 2);
    this_thread::sleep_for(chrono::seconds(1));
    thread type2_2(&Factory::createVehicle, &myFactory, 2);
    this_thread::sleep_for(chrono::seconds(1));
    thread type3(&Factory::createVehicle, &myFactory, 3);
    this_thread::sleep_for(chrono::seconds(1));
    thread type4(&Factory::createVehicle, &myFactory, 4);
    this_thread::sleep_for(chrono::seconds(1));
    thread type5(&Factory::createVehicle, &myFactory, 5);
    this_thread::sleep_for(chrono::seconds(1));
    thread type6(&Factory::createVehicle, &myFactory, 6);

    manage.join();

    type1.join();
    type2.join();
    type3.join();
    type4.join();
    type5.join();
    type6.join();
    type1_1.join();
    type2_2.join();

    return 0;
}