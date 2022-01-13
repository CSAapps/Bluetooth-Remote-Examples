//example code for the 'Simple Switch' remote in the app

#include <SoftwareSerial.h>

SoftwareSerial bt(2, 3); // RX | TX

void setup() {
  bt.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  if (bt.available()) {
    char ch = bt.read();
    if (ch == '1')
      digitalWrite(LED_BUILTIN, HIGH);
    else if (ch == '0')
      digitalWrite(LED_BUILTIN, LOW);
  }
}
