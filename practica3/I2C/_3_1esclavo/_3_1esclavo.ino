int speedPin = 3;
int motor1APin = 36;
int motor2APin = 37;
int ledPin = 13;
int speed_value_motor1;
char sentido = '1';

void setup(){
  pinMode(speedPin, OUTPUT);
  pinMode(motor1APin, OUTPUT);
  pinMode(motor2APin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Wire.begin(25);
}
void loop(){
  if (Wire.available() > 0) {
    sentido = Wire.read();
  }
  if(sentido == '1'){
    digitalWrite(motor1APin, HIGH);
    digitalWrite(motor2APin, LOW);
  }
  else if(sentido == '2'){
    digitalWrite(motor1APin, LOW);
    digitalWrite(motor2APin, HIGH);
  }
  else if(sentido == '3'){
    digitalWrite(motor1APin, LOW);
    digitalWrite(motor2APin, LOW);
  }
  else{
    digitalWrite(motor1APin, HIGH);
    digitalWrite(motor2APin, HIGH);
  }
  
  


speed_value_motor1 = 127;
analogWrite(speedPin, speed_value_motor1);

}
