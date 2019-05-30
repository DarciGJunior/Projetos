#include<math.h>
#include<stdio.h>

main()
{
    int n,i,fatI;
    float sn=0,x,soma;
    {
      printf("digite um numero inteiro positivo:");
      scanf("%d",& n);
      printf("digite um valor para x:");
      scanf ("%f",& x);
      for(i=0;i<n;i++)
      {
        if (i==0) //com. for
        {
          fatI=1;
        }else
        {
          fatI=fatI*i;
        }
        sn=pow(x,i)/fatI;
        soma=sn+soma;
      }printf("soma = %f \n",soma);//fim for
      printf("diferença %f",fabs(soma-exp(x)));
    }
}
