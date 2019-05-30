#include<stdio.h>
#include<math.h>

float funk(float x)
{   float y;
    return (((2*y)/(x+1)) + pow((x+1),3));
}

int main()
{

    int j;
    float h, x, y;

    //Valor do passo de integração (DELTAx)
    printf("Escolha o passo de integração: \n");
    scanf("%f",&h);

    //Condições iniciais das variáveis dependente y(x) e independente x
    printf("Informe o valor inicial de x: x0 \n");
    scanf("%f",&x);

    printf("Informe o valor inicial de y: y(x0): \n");
    scanf("%f",&y);

    //Etapa de integração, método de Euler.
    printf("   X        Y   \n");
    for(j=0;j<x;j++)
    {
        x = x+h;            //Atualiza x em 1 passo
        y = y+(h*(funk(x))); //Calcula aproximação de y(x)
        printf("%.4f   %.4f   \n",x,y);//Imprime x e y na tela
    }

}
