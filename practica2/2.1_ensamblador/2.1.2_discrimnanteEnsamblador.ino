asm volatile(
"mov r10, %1 \n\t"
"mov r12, %2 \n\t"
"add r10, r12 \n\t"
"mov %0, r10 \n\t"
: "=r" (var_out)
: "r" (var_in_1), "r" (var_in_2)
);


void setup(){
 
  Serial.begin(9600);
}
void loop(){
     int dst;
     asm volatile(
     
      "ldi r16, 4      \n\t"
      "ldi r18, 10     \n\t"
      "ldi r20, 20     \n\t"
      "ldi r22, 30     \n\t"
//      "mul r20, r20    \n\t"
      "mul r20, r20    \n\t"
//      "movw r20, r0    \n\t"
      "movw %0, r0     \n\t"
      
//    "movw %0, r20     \n\t"

//      "mul r18, r22     \n\t"
//      "movw r18, r0    \n\t"
//      "movw r18, r0    \n\t"
//      "sub r18, r17     \n\t"
        : "=r" (dst)
    );
    Serial.println(dst);
    delay(500);
}

