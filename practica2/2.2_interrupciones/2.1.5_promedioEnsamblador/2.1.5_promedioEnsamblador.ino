void setup(){
 
  Serial.begin(9600);
}
void loop(){
     int dst;
     asm volatile(
     
      "ldi r16, 10     \n\t" //Esto es la N --> El número de números que va a promediar
      "ldi r18, 10     \n\t" //
      "ldi r20, 20     \n\t"
      "ldi r22, 30     \n\t"
      "mul r20, r20    \n\t"
      "movw %0, r0     \n\t" //Esto pasa el contendio del registro 0 a la variable dst para sacarlo por Serial
        : "=r" (dst)
    );
    Serial.println(dst);
    delay(500);
}
