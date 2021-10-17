#include <SoftwareSerial.h>

SoftwareSerial bt(2, 3); // RX | TX 

void setup(){ 
 Serial.begin(9600); 
 bt.begin(9600);
} 

void loop(){
 if (bt.available()) 
   Serial.write(bt.read());
}

/*
This will print comands from the Blutooth remote as it is.
Open the serial monitor in your PC to check.
*/
