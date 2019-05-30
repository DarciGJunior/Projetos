#include<stdio.h>
int main()
{
    char opc;
    float n1, n2, resultado;
    do
    {
    printf("Digite a opção desejada:\n");
    printf("1 soma\n");
    printf("2 subtraçao\n");
    printf("3 multiplicaçao\n");
    printf("4 divisao\n");
    printf("5 resto\n");
    printf("6 sair\n");
    scanf("%c",&opc);
    if (opc == '1')
    {
        printf("digite o primeiro numero\n");
        scanf("%f",&n1);
        printf("digite o segundo numero\n");
        scanf("%f",&n2);
        resultado = n1 + n2;
        printf("o resultado e igual a \n%.2f\n", resultado);
    }
        else if (opc =='2')
        {
            printf("digite o primeiro numero\n");
            scanf("%f",&n1);
            printf("digite o segundo numero\n");
            scanf("%f",&n2);
            resultado = n1 - n2;
            printf("o resultado e igual a \n%.2f\n", resultado);
        }
            else if (opc == '3')
            {
                printf("digite o primeiro numero\n");
                scanf("%f",&n1);
                printf("digite o segundo numero\n");
                scanf("%f",&n2);
                resultado = n1 * n2;
                printf("o resultado e igual a \n%.2f\n", resultado);
            }
            else if (opc == '4')
            {
                printf("digite o primeiro numero\n");
                scanf("%f",&n1);
                printf("digite o segundo numero\n");
                scanf("%f",&n2);
                resultado = n1 / n2;
                printf("resultado e igual a \n%.2f\n", resultado);
            }
            else if (opc == '5')
            {
                printf("digite o primeiro numero");
                scanf("%f",&n1);
                printf("digite o segundo numero");
                scanf("%f",&n2);
                resultado = (int)n1 % (int)n2;
                printf("resultado e igual a \n%.2f\n", resultado);

            }


    }while(opc!= '6');}

