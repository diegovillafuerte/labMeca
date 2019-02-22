 // Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int inp = 30;
int contador = 0;
int estado = 0;
 
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(inp, INPUT);   
  Serial.begin(9600);  
}
 
// the loop routine runs over and over again forever:
void loop() {
  estado = digitalRead(inp);
  if(estado){
    contador = contador + 1;
  }
  Serial.println(contador);
  delay(100);
}
