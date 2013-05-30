/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = A0;

// the setup routine runs once when you press reset:
void setup() {                
  Serial.begin(9600);
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

void loop() {
  String text = "11100110100110100111";
  for(int i = 0; i < text.length(); i++) {
    char c = text.charAt(i);
    if (c == '1') {
      digitalWrite(led, HIGH);
    } else {
      digitalWrite(led, LOW);
    }
    delay(10);
//    Serial.print(c);
  }
  Serial.println("");
  digitalWrite(led, LOW);
  delay(100);
}
