 // Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int contador = 0;
int estado = 0;
 
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.  
  Serial.begin(9600);  
  cli();
  DDRD &= ~(1 << DDD1);
  PORTD |= (1 << PORTD1);
  EICRA |= (1 << ISC10);
  EICRA |= (1 << ISC11);
  EIMSK |= (1 << INT1);
  sei();

}


ISR(INT1_vect)
  {
  contador = contador+1;
  }
// the loop routine runs over and over again forever:
void loop() {

  
  Serial.println(contador);
  delay(100);
}
