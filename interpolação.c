#include <stdio.h>
#include "C:\Users\Darci J�nior\Documents\UNIFAL\6� per�odo\RC3\Interpola��o.h"
main ( )
{
  int valor;
  float v0,v1,z;

  printf ("Digite 1 para o m�todo impreciciso de v = v1 quando t = 1 e 2 para o m�todo preciso de v = v1 quando t = 1: ");
  scanf("%d", &valor);

  switch ( valor )
  {
     case 1 :
       printf ("Insira os valores de v0, v1 e z, respectivamente: \n");
       scanf("%f %f %f", &v0,&v1,&z);
       printf("o valor da interpolacao e: %.2f", lerp(v0,v1,z));
     break;

     case 2 :
       printf ("Insira os valores de v0, v1 e z, respectivamente: \n");
       scanf("%f %f %f", &v0,&v1,&z);
       printf("o valor da interpolacao e: %.2f", prel(v0,v1,z));
     break;

     default :
       printf ("Valor invalido!\n");
  }

}
