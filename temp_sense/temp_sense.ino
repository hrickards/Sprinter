#include <math.h>

void setup() {
  Serial.begin(9600);
}

void loop() {
  int raw = analogRead(A0);
  float a2tv = 5.*raw/1024.;
  float a2tr = (4700.*a2tv)/(5.-a2tv);
  int celsius = (int) round(-273.15 + 1/(-0.0009428599884347705 + 0.000514271007433053*log(a2tr) - 1.0826047046130167e-6*pow(log(a2tr),3)));
  Serial.println(celsius);
  delay(1000);
  
}
