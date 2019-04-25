
#include <QApplication>
#include <iostream>
#include <thread>
#include <unistd.h>
#include "list.h"
#include "mainwindow.h"
#include "fact.h"
#include <QDebug>

using namespace std;
Fact myFactory;
int hola(int argc, char *argv[]){

  QApplication a(argc, argv);
  MainWindow w;
  w.show();

  return a.exec();

}
void alo(){

  std::thread manage(&Fact::queeManage, &myFactory);

  std::thread type1(&Fact::createVehicle, &myFactory, 1);
  std::this_thread::sleep_for(chrono::seconds(1));
  std::thread type2(&Fact::createVehicle, &myFactory, 1);
  std::this_thread::sleep_for(chrono::seconds(1));
  std::thread type3(&Fact::createVehicle, &myFactory, 1);
  std::this_thread::sleep_for(chrono::seconds(1));
  std::thread type4(&Fact::createVehicle, &myFactory, 1);
  std::this_thread::sleep_for(chrono::seconds(1));
  std::thread type5(&Fact::createVehicle, &myFactory, 2);
  std::this_thread::sleep_for(chrono::seconds(1));
  std::thread type6(&Fact::createVehicle, &myFactory, 3);
  std::this_thread::sleep_for(chrono::seconds(1));
  std::thread type7(&Fact::createVehicle, &myFactory, 4);
  std::this_thread::sleep_for(chrono::seconds(1));
  std::thread type8(&Fact::createVehicle, &myFactory, 5);
  std::this_thread::sleep_for(chrono::seconds(1));
  std::thread type9(&Fact::createVehicle, &myFactory, 5);


      manage.join();
      cout<<"Manage thread run"<<endl;

      type1.join();
      cout<<"Se inicio hilo 1"<<endl;

      type2.join();
      cout<<"Se inicio hilo 2"<<endl;

      type3.join();
      cout<<"Se inicio hilo 3"<<endl;

      type4.join();
      cout<<"Se inicio hilo 4"<<endl;
      type5.join();
      type6.join();
      type7.join();
      type8.join();
      type9.join();
}
void aaa(){
  int a=10;
  while(a!=0){
      qDebug()<<a;
      a--;
    }
}
int main(int argc, char *argv[])
{

  std::thread holap(hola,argc,argv);
  std::thread aal(alo);
  holap.join();
  aal.join();



  return 0;
}




