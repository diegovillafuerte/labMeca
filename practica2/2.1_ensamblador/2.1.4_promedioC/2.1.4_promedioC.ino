void setup(){

  Serial.begin(9600);
}
void loop(){
      
     #include <stdio.h>
     #include <math.h>
     #include <stdlib.h>
     int n = 100;
     int i, res;;
     int total = 0;
     for(i=0;i<n;i++){
        total = total + rand()*100;
     }
     res = total / n;
     Serial.print("El promedio es: ");
     Serial.println(res);
     //Serial.println(dneg);
     Serial.println("");
}
