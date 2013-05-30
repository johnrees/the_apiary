int count = 0;
int countedAt = 0;
boolean forwards = true;

void setup(){
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  analogWrite(A3, HIGH);
  analogWrite(A2, LOW);
//  pinMode(2, OUTPUT);
//  pinMode(3, OUTPUT);
}


void loop(){
  int tempCount = count;
  int inner = analogRead(A0);
  int outer = analogRead(A1);
  
  Serial.print(inner);
  Serial.print("  ");
    Serial.println(outer);
  
//  if (inner < 970) {
//    digitalWrite(3, HIGH);
//    forwards = true;
//  } else {
//    digitalWrite(3, LOW);
//  }

  if (outer < 970) {
    
    digitalWrite(3, HIGH);
    digitalWrite(2, HIGH);
    if (forwards && countedAt < (millis() - 1000) ) {
      countedAt = millis();
      forwards = false;
      count++;
    } else {
//      Serial.print(millis() );
//      Serial.print("   ");
//      Serial.println(countedAt);
    }
  } else {
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
  }
  
  if (tempCount != count) {
    Serial.print("Bees in: ");
    Serial.println(count);
  }
  

}
