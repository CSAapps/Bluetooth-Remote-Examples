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

/*
  This will send your PC serial monitor Input to app and app input to PC
  The app will recognize the end of the message from '\r' character.
  So select "Carriage return" or "Both  NL & CR" in the PC serial monitor.
  And also u should use println() instead of print() when make your own code with some commands. */
//Ex:-
//bt.print("Hello");
/*This doesn't show the msg in the app because doesn't contains '\r' int the end of message.
  so u have to code like below */
//Ex:-
//bt.println("Hello"); or bt.print("Hello\r");
//Both show the output in the app because both containing '\r'
