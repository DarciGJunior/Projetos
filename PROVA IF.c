#include <stdlib.h>
#include <stdio.h>
#include <sys/io.h>
int main (void)
{
    int o;
    ioperm(0x378,3,1);
    o = inb(0x379);
    if (o=248)
    { 
              printf("\nchave S3, S4, S5, S6 e S7 acionadas\n\n");
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
              if (o=120)
              {
                        printf("\nchave S3, S4, S5 e S6 acionadas\n\n");
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
                          
                        if(o=56)
                        {
                                printf("\nchave S3, S4 e S5 acionadas\n\n");
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
                                
                                if(o=24)
                                {
                                        printf("\nchave S3 e S4 acionadas\n\n");
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
                                        
                                        if(o=8)
                                        
                                        {
                                               printf("\nchave S3 acionada\n\n");
                                               outb (0x01, 0x378);
                                               sleep(1);
                                                outb(0x02, 0x378);
                                                 sleep(1);
                                                 outb(0x04, 0x378);
                                                 sleep(1);
                           
                                               if(o=0)
                                               {
                                                      printf("\nnenhuma chave acionada\n\n");
                                                      outb (0x01, 0x378);
                                                      sleep(1);
                                                      outb(0x02, 0x378);
                                                      sleep(1);
                                                      outb(0x04, 0x378);
                                                      sleep(1);
                           
                                               }
                                        }
                                }
                        }
              }
    }
    system("pause");
    return 0;
}
        
