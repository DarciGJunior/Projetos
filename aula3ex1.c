#include <stdio.h>

#define LINHA 2
#define COLUNA 2  //declaração de constante


main()
{
    float notas[LINHA][COLUNA], media = 0.00;
    int i=0, j=0;

        for (i=0;i<LINHA;i++)
        {
            for (j=0;j<COLUNA;j++)
            {
                printf("Digite a nota %d  do aluno  %d : ", i+1 , j+1);
                scanf("%f", &notas[i][j]);

            }
        }
    // imprimir
    for (i=0;i<LINHA;i++)
    {
        for(j=0;j<COLUNA;j++)
        {
            printf("%f", notas[i][j]);
        }
        printf("\n");
    }
    while (notas[i-1][j-1] >= 0.0);
    i--;
    j--;
    for(i=0 ; i<LINHA; i++)
    {
        for(j=0;j<COLUNA;j++)
        {
             media = media + notas[i][j];
        }

    }
    media = media/i;
    printf("Média das notas: %.1f \n", media);
}




