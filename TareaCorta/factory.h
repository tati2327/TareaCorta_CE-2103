#ifndef FACTORY_H
#define FACTORY_H

#include <QWidget>

namespace Ui {
  class Factory;
}

class Factory : public QWidget
{
  Q_OBJECT
public:


  explicit Factory(QWidget *parent = nullptr);
  ~Factory();
public slots:
  void print();
private:
  Ui::Factory *ui;
};

#endif // FACTORY_H
