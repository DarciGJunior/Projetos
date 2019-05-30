#include<stdio.h>
#include<math.h>
main()
{
    float k, f, c, re, ra, v, aux;

    printf("digite valor em celsius; \n");
    scanf("%f", &c);

    k = c + 273.15;
    f = (c*1.8) + 32;
    re = c*0.8;
    ra = (c*1.8) + 459.67;
    aux = 1+(c/273.15);
    v = 331.5*sqrt(aux);

    printf(" temperaturas kelvin %.2f fahrenheit %.2f reaumur %.2f rankine %.2f velocidade %.2f", k, f, re, ra, v);

}
