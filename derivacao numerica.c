#include<stdio.h>
#include<math.h>

 float func(float x)
{
    return x*exp(x);
}

main ()
{
    float x, v, h, d;

    printf("digite o valor de x ");
    scanf("%f" ,&x);
    printf("digite o valor de h ");
    scanf("%f" ,&h);

    v = 1.0 / (2 * h) * (func(x + h) - func(x - h) );

    printf(" a derivada aprox é %f", v);

    d = 22.167168 - fabs(v);

    printf(" o erro absoluto é, em modulo: %f", d);
}
