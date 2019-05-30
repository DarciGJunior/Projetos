#include<16f877A.h>
#device adc=10
#use delay(clock=4000000)
#fuses xt,nowdt,noprotect,put,brownout,nolvp,nocpd,nowrt
#define use_portb_lcd
#include <lcd.c>

#use fast_io (a)
#use fast_io (b)
#use fast_io (c)

#byte porta=0x05
#byte portb=0x06
#byte portc=0x07

float temp_aux=0;
float temp=0;
void main()
{
   setup_adc_ports(ra0_ra1_ra3_analog);
   setup_adc(adc_clock_div_32);
   set_adc_channel(0);
   delay_us(10);

   set_tris_a(0xFF);
   set_tris_b(0x00);
   set_tris_c(0x0F);

   porta=0x00;
   portb=0x00;
   portc=0x00;
   lcd_init();

   while(true)
      {
      temp_aux=read_adc();
      temp_aux=(temp_aux*5);
      temp_aux=(temp_aux/1.00347);
      temp=temp_aux;
      temp=(5*temp)/1024;
      temp=(temp*100)/5;

      if(temp <= 18)
         {
         output_c(0b00000001);
         }

      if(temp > 18 && temp <=24)
         {
         output_c(0b00000010);
         }

      if(temp > 24)
         {
         output_c(0b00000100);
         }

      lcd_init();
      lcd_gotoxy(1,1);
      printf(lcd_putc,"Temp= %f",temp);
      delay_ms(500);
}
}

