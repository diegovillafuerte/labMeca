/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 const int pResistor = A0;
 const int ledPin = 9;
 const int boton = 48;
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int value;
int value2;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(ledPin, OUTPUT);
  pinMode(pResistor, INPUT);
  pinMode(boton, INPUT);
  Serial.begin(9600);
}
// the loop routine runs over and over again forever:
void loop() {
  value2 = digitalRead(boton);
  Serial.println(value2);
  if(value2){
    value = analogRead(pResistor);
    if(value > 25){
      digitalWrite(ledPin, LOW);
    }
  else{
    digitalWrite(ledPin, HIGH);
    }
    //delay(500);
  }
  else{
    digitalWrite(ledPin, HIGH);
  }
  
}
