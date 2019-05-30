#include<16f877.h> // inclui biblioteca
#use delay(clock = 4000000) // define o clock
#fuses xt, nowdt, noprotect, put, brownout, lvp, nocpd, nowrt // habilita os fuses
#use fast_io(a)// porta de resposta rapida habilitada
#use fast_io(b)// porta de resposta rapida habilitada

#byte porta= 0x05
#byte portb= 0x06

#int_ext
void trata_int()// abre o codigo da interrupçao, codigo secundario
{
   output_high(pin_b5);
   delay_ms(10000);
   output_low(pin_b5);
}

void main()// abre a funçao principal
{
   int x;

   set_tris_a(0x10);
   set_tris_b(0x01);
   porta=0x00;
   portb=0x00;

   ext_int_edge(H_TO_L);// habilita a leitura da borda de descida para interrupçao
   enable_interrupts(int_ext); // habilita a interrupçao no pino b0
   enable_interrupts(global);// habilita todas as interrupçoes

   while(true)
   {
      x=input(pin_a4);
      if(x==0)
         output_high(pin_b6);
      else
         output_low(pin_b6);
   }
}
