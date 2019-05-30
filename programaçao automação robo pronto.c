#include<16f628a.h>

#use delay(clock=4000000) // clock externo de 4MHz.

#fuses xt, nowdt, brownout, nolvp, nomclr, intrc_io, put

#byte porta=0x05 // localização em HEXA
#byte portb=0x06 // das portas A e B.

#bit ent_1=portb.0 // pino 11
#bit ent_2=portb.1 // pino 13

#use fast_io(a) // acelera a atualização
#use fast_io(b) // das entradas e saídas das portas A e B.

void main(void) {

   set_tris_b (0b00000011); // Rb0 Rb1 - ENTRADA

   delay_ms (100);

   while(true)
   {

     while(ent_1 && ent_2)
     {                                    // QUANDO OS DOIS SENSORES = 1:
     output_high(pin_b2);                 // OS DOIS MOTORES SE MOVEM.
     output_high(pin_b3);
     }
     while(ent_1 && !ent_2)
     {                                   // QUANDO SENSOR 1 ESTA ATIVO
     output_high(pin_b2);                // E O SENSOR 2 NAO ESTA, APENAS M1 FUNFIONA.    
     output_low(pin_b3);     
     }
     while(!ent_1 && ent_2)
     {
     output_low(pin_b2);                // QUANDO SENSOR 2 ESTA ATIVO     
     output_high(pin_b3);               // E O SENSOR 2 NAO ESTA, APENAS M2 FUNCIONA.
     }
     while(!ent_1 && !ent_2)
     {                                    // QUANDO OS DOIS SENSORES = 1:
     output_high(pin_b2);                 // OS DOIS MOTORES SE MOVEM.
     output_high(pin_b3);
     }
     
     
   }
}

