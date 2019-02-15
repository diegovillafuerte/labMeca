void setup(){

  Serial.begin(9600);
}
void loop(){
      
     #include <stdio.h>
     #include <math.h>
     int dpos, dneg;
     int a = 10;
     int b = 20;
     int c = 30;
     int aux;
     aux = pow(b,2) - 4*a*c;
     //dpos = (-b + sqrt(pow(b,2) - 4*a*c))/2*a;
     //dneg = (-b - sqrt(pow(b,2) - 4*a*c))/2*a;
     Serial.print("El discrimante es: ");
     Serial.println(aux);
     //Serial.println(dneg);
     Serial.println("");
}
