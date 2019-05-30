#include <stdio.h>

#define TAMANHO 2  //declaração de constante


main()
{
    float notas[TAMANHO], media = 0.00;
    int i=0, j;
    do
    {
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
        i++;
    }while (notas[i-1] >= 0.0);
    i--;
    for(j=0 ; j<i ; j++)
    {
        media = media + notas[j];
    }
    media = media/i;
    printf("Média das notas: %.1f \n", media);
}
