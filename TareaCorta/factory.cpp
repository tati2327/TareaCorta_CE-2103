#include "factory.h"
#include "ui_factory.h"
#include "fact.h"
#include <QTimer>
extern Fact myFactory;
Factory::Factory(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::Factory)
{ ui->setupUi(this);
  QTimer*T= new QTimer();
  connect(T,SIGNAL(timeout()),this,SLOT(print()));
  T->start(1);
}

Factory::~Factory()
{
  delete ui;
}

void Factory::print()
{

  ui->label_11->setText(QString(myFactory.myProcess->productionA.getData(0)->process));
  ui->label_12->setText(QString(myFactory.myProcess->productionB.getData(0)->process));
  ui->label_13->setText(QString(myFactory.myProcess->productionC.getData(0)->process));
  ui->label_14->setText(QString(myFactory.myProcess->productionD.getData(0)->process));
  ui->label_15->setText(QString(myFactory.myProcess->productionE.getData(0)->process));
  ui->label_16->setText(QString(myFactory.myProcess->productionF.getData(0)->process));
  ui->label_17->setText(QString(myFactory.myProcess->productionA.getData(1)->process));
  ui->label_18->setText(QString(myFactory.myProcess->productionB.getData(1)->process));
  ui->label_19->setText(QString(myFactory.myProcess->productionC.getData(1)->process));
  ui->label_20->setText(QString(myFactory.myProcess->productionD.getData(1)->process));
  ui->label_21->setText(QString(myFactory.myProcess->productionE.getData(1)->process));
  ui->label_22->setText(QString(myFactory.myProcess->productionF.getData(1)->process));
  ui->label_23->setText(QString(myFactory.myProcess->productionA.getData(2)->process));
  ui->label_24->setText(QString(myFactory.myProcess->productionB.getData(2)->process));
  ui->label_25->setText(QString(myFactory.myProcess->productionC.getData(2)->process));
  ui->label_26->setText(QString(myFactory.myProcess->productionD.getData(2)->process));
  ui->label_27->setText(QString(myFactory.myProcess->productionE.getData(2)->process));
  ui->label_28->setText(QString(myFactory.myProcess->productionF.getData(2)->process));
  ui->spinBox->setValue(myFactory.myProcess->productionA.getData(0)->time);
  ui->spinBox_2->setValue(myFactory.myProcess->productionB.getData(0)->time);
  ui->spinBox_3->setValue(myFactory.myProcess->productionC.getData(0)->time);
  ui->spinBox_4->setValue(myFactory.myProcess->productionD.getData(0)->time);
  ui->spinBox_5->setValue(myFactory.myProcess->productionE.getData(0)->time);
  ui->spinBox_6->setValue(myFactory.myProcess->productionF.getData(0)->time);
  ui->spinBox_7->setValue(myFactory.myProcess->productionA.getData(1)->time);
  ui->spinBox_8->setValue(myFactory.myProcess->productionB.getData(1)->time);
  ui->spinBox_9->setValue(myFactory.myProcess->productionC.getData(1)->time);
  ui->spinBox_10->setValue(myFactory.myProcess->productionD.getData(1)->time);
  ui->spinBox_11->setValue(myFactory.myProcess->productionE.getData(1)->time);
  ui->spinBox_12->setValue(myFactory.myProcess->productionF.getData(1)->time);
  ui->spinBox_13->setValue(myFactory.myProcess->productionA.getData(2)->time);
  ui->spinBox_14->setValue(myFactory.myProcess->productionB.getData(2)->time);
  ui->spinBox_15->setValue(myFactory.myProcess->productionC.getData(2)->time);
  ui->spinBox_16->setValue(myFactory.myProcess->productionD.getData(2)->time);
  ui->spinBox_17->setValue(myFactory.myProcess->productionE.getData(2)->time);
  ui->spinBox_18->setValue(myFactory.myProcess->productionF.getData(2)->time);
  ui->label_37->setNum(myFactory.queeGeneral.size());
  if (myFactory.queeGeneral.size()==0){
      ui->label_30->setText("");
    }
  if (myFactory.queeGeneral.size()==1){
      ui->label_30->setText(QString(myFactory.queeGeneral.getData(0)->process));
      ui->label_31->setText("");
    }
  if (myFactory.queeGeneral.size()==2){
      ui->label_31->setText(QString(myFactory.queeGeneral.getData(1)->process));
      ui->label_32->setText("");
    }
  if (myFactory.queeGeneral.size()==3){
      ui->label_32->setText(QString(myFactory.queeGeneral.getData(2)->process));
      ui->label_33->setText("");
    }
  if (myFactory.queeGeneral.size()==4){
      ui->label_33->setText(QString(myFactory.queeGeneral.getData(3)->process));
      ui->label_34->setText("");
    }
  if (myFactory.queeGeneral.size()==5){
      ui->label_34->setText(QString(myFactory.queeGeneral.getData(4)->process));
      ui->label_35->setText("");
    }
  if (myFactory.queeGeneral.size()==6){
      ui->label_35->setText(QString(myFactory.queeGeneral.getData(5)->process));
      ui->label_36->setText("");
    }
  if (myFactory.queeGeneral.size()==7){
      ui->label_36->setText(QString(myFactory.queeGeneral.getData(7)->process));
    }

}
