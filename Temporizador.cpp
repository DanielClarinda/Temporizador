#include "Temporizador.h"

Temporizador::Temporizador() {
  //
}

void Temporizador::setAlarme(unsigned long alarmeTime) {
  _inicioTime = micros();
  _finalTime = alarmeTime;
  _ativo = true;
}

void Temporizador::checkTime(void (*callback)()) {
  if(!_ativo) return;

  else if((micros() - _inicioTime) > _finalTime) {
    _ativo = false;
    callback();
  }
}