#include <Temporizador.h>

Temporizador TimerBomba;

void setup() {
  Serial.begin(115200);
  while(!Serial) delay(10);
  Serial.println("Started");

  TimerBomba.setAlarme(5000);
}

void loop() {
  TimerBomba.checkTime(callbackBomba);        // será chamada apenas 1 vez, se quiser periodos usar recursividade
}

void callbackBomba() {
  Serial.println("Alarme");
  TimerBomba.setAlarme(3000);
}