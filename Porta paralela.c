#include <stdio.h>
#include <sys/io.h>
int main(void) //abre a funçao main
{
    int x;
    ioperm(0x378, 3, 1);
    x=(0x379);
    
    printf("o valor eh igual a %d\n\n", x);
    while (1) //abre a função while (x)
    {
         switch (x)//abre o switch
         {
                case '8':
                     printf("chave S3 ativa\n");
                     break;
                case '16': 
                     printf("chave S4 ativa\n");
                     break; 
                case '32':
                     printf("chave S5 ativa\n");
                     break;
                case '64':
                     printf("chave S6 ativa\n");
                     break;
                case '128':
                     { //abre o case 128, chave S7
                           printf("chave S7 ativa\n");
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
                     } //fecha case 128, chave S7
                           break;
                default:
                        printf("ATIVE UMA CHAVE\n\n");
                        break;
                        system ("clear");
                }//fecha o switch
         }//fecha o while
         system("pause");
         return 0;
}
