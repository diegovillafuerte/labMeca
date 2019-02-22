 // Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int inp = 30;
int contador = 0;
int estado = 0;
 
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  Serial.begin(9600);
  pinMode(inp, INPUT);
//  cli();
//  DDRD &= ~(1 << DDD1);
//  PORTD |= (1 << PORTD1);
//  EICRA |= (1 << ISC10);
//  EIMSK |= (1 << INT1); //Es port 20
//  sei();  
    
}


ISR(INT1_vect)
  {
  contador = contador+1;
  }
// the loop routine runs over and over again forever:
void loop() {
  estado = digitalRead(inp);
  if(estado){
    contador = contador + 1;
  }
  Serial.println(contador);
}
