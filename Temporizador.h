#ifndef TEMPORIZADOR_H
#define TEMPORIZADOR_H

#include <Arduino.h>

class Temporizador {
  private:
    unsigned long _inicioTime = 0;
    unsigned long _finalTime = 0;
    bool _ativo = false;

  public:
    Temporizador();
    void setAlarme(unsigned long alarmeTime);
    void checkTime(void (*callback)());
};

#endif