/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/admin/CTD_2023/Lab10/src/Lab10.ino"
void setup();
void loop();
#line 1 "/Users/admin/CTD_2023/Lab10/src/Lab10.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup() {
  Serial.begin(9600);
  while(!Serial.isConnected()){
    Serial.println("Attach the argon onto the computer.");
  }

  Serial1.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
      char value = Serial.read(); //reads the data from computer
      Serial1.print(value); //sending the value to argon2
  }
  if (Serial1.available() > 0) {
    char value = Serial1.read();
    Serial.print(value);
  }
}