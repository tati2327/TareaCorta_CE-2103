#ifndef FACT_H
#define FACT_H
#include <mutex>
#include "vehicule.h"
#include "list.h"
#include "process.h"


class Fact
{
public:
  Fact();
  List<Vehicule*> queeGeneral;
  Process * myProcess;
  mutex myMutex;

  void createVehicle(int type);
  bool callProcess(List<Vehicule*>& productionList, Vehicule* vehicle, char typeProcess);
  void queeManage();
};

#endif // FACT_H
