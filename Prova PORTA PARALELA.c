#include <stdio.h>
#include <stdlib.h>
#include <sys/io.h>
int main(void)
{                                                                   //abre a funçao main
    int x;                                                          //declara a variavel
    ioperm(0x378,3,1);                                              //declara a porta paralela
    x = inb(0x379);                                                 //entrada de dados, bit de status
    while(1);
    {                                                               //abre o while
             printf("\nATENÇAO! acione as chaves corretas\n\n");
             switch(x)
             {                                                      //abre o switch
                      case 8: 
                           printf("\nS3 ativa\n");
                           break;
                      case 16: 
                           printf("\nS4 ativa\n");
                           break;
                      case 32: 
                           printf("\nS5 ativa\n");
                           break;
                      case 64: 
                           printf("\nS6 ativa\n");
                           break;
                      case 128: 
                           printf("\nS7 ativa\n");
                      {                                             //abre o case 128
                           outb(0x00, 0x378);                       //saida de dados, liga o LED
                           sleep(1);
                           outb (0x01, 0x378);
                           sleep(1);
                           outb(0x02, 0x378);
                           sleep(1);
                           outb(0x04, 0x378);
                           sleep(1);
                           outb(0x08, 0x378);
                           sleep(1);
                           outb(0x10, 0x378);
                           sleep(1);
                           outb(0x20, 0x378);
                           sleep(1);
                           outb(0x40, 0x378);
                           sleep(1);
                           outb(0x80, 0x378);
                           sleep(1);
                      }                                             //fecha o case 128
                      break;
             }                                                      //fecha o switch
             system("clear");
    }                                                               //fecha o while
    system ("pause");
    return 0;
}                                                                   //fecha a funçao main
                           
