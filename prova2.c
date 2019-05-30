#include<stdio.h>
int primeira (int vet1[], int vet2[], int mat1[][3], int mat2[][3])
{
    int n1, n2, n3, n4, aux=0, res=0;
    for(n1=0; n1<3; n1++)
    {
        for(n2=0; n2<2; n2++)
        {
            if(vet1[n2]>vet1[n2+1])
            {
                aux = vet1[n2];
                vet1[n2] = vet1[n2+1];
                vet1[n2+1] = aux;
            }
        }
    }
    for(n3=0; n3<3; n3++)
    {
        for(n4=0; n4<2; n4++)
        {
            if(vet2[n4]>vet2[n4+1])
            {
                res = vet2[n4];
                vet2[n4] = vet2[n4+1];
                vet2[n4+1] = res;
            }
        }
    }
    int i, j, a, b, auxiliar, resposta, vetaux1[9], vetaux2[9], d, e, f, g;
    auxiliar=-1;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            auxiliar++;
            vetaux1[auxiliar]=mat1[i][j];
        }
    }
    for (auxiliar=0; auxiliar<9; auxiliar++)
    {
        for(d=0; d<8; d++)
        {
            if(vetaux1[d]>vetaux1[d+1])
            {
                f=vetaux1[d];
                vetaux1[d]=vetaux1[d+1];
                vetaux1[d+1]=f;
            }
        }
    }
    auxiliar=0;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            mat1[i][j]= vetaux1[auxiliar];
            auxiliar++;
        }
    }
     resposta=-1;
    for (a=0; a<3; a++)
    {
        for (b=0; b<3; b++)
        {
            resposta++;
            vetaux2[resposta]=mat2[a][b];
        }
    }
    for (resposta=0; resposta<9; resposta++)
    {
        for(e=0; e<8; e++)
        {
            if(vetaux2[e]>vetaux2[e+1])
            {
                g=vetaux2[e];
                vetaux2[e]=vetaux2[e+1];
                vetaux2[e+1]=g;
            }
        }
    }
    resposta=0;
    for (a=0; a<3; a++)
    {
        for (b=0; b<3; b++)
        {
            mat2[a][b]= vetaux2[resposta];
            resposta++;
        }
    }
     printf("\nA ordenação é:\n");
    for(n1=0; n1<3; n1++)
    {
        printf("%d ", vet1[n1]);
    }
    printf("\t\t");
    for(n3=0; n3<3; n3++)
    {
        printf("%d ", vet2[n3]);
    }
    printf("\n\n");
    for (i=0; i<3; i++)
    {
         for(j=0; j<3; j++)
         {
             printf("%d ", mat1[i][j]);
         }
         printf("\t\t");
         for(b=0; b<3; b++)
         {
             printf("%d ", mat2[i][b]);
         }
         printf("\n");
        }

    return;
}


int segunda(int mat1[][3], int vet1[])
{
    int i, j, aux, soma, vetsoma[3];
    soma=mat1[0][0]+mat1[1][1]+mat1[2][2];
    printf("A soma da diagonal da primeira matriz é %d\n", soma);
    printf("\nO resultado da adição da diagonal da matriz com os valores do primeiro vetor é: ");
    for(i=0; i<3; i++)
    {
        vetsoma[i]=soma+vet1[i];
        vetsoma[i]=soma+vet1[i];
        vetsoma[i]=soma+vet1[i];
        printf("%d ", vetsoma[i]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0; j<2; j++)
        {
            if(vetsoma[j] < vetsoma[j+1])
            {
                aux = vetsoma[j];
                vetsoma[j] = vetsoma[j+1];
                vetsoma[j+1] = aux;
            }
        }
    }

    printf("\n\nO vetor ordenado em ordem decrescente é: ");
    for(i=0; i<3; i++)
    {
        printf("%d ", vetsoma[i]);
    }
return;
}
main()
{
    int result, mat1[3][3], mat2[3][3], i, j, a, b, vet1[3], vet2[3], n1, n3, aux;
    char opc;
    do
    {
        printf("\n1- Primeira\n");
        printf("2- Segunda\n");
        printf("3- Sair\n");
        printf("Opção:\n");
        scanf(" %c", &opc);
        if (opc=='1')
        {
            for(n1=0; n1<3; n1++)
        {
            printf("Digite as coordenadas do vetor 1:\n");
            scanf("%d", &vet1[n1]);
        }
        printf("\n");
        for(n3=0; n3<3; n3++)
        {
            printf("Digite as coordenadas do vetor 2:\n");
            scanf("%d", &vet2[n3]);
        }
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                printf("Digite a%d%d da matriz 1:\n", j+1, i+1);
                scanf("%d", &mat1[i][j]);
            }
        }
        for(a=0; a<3; a++)
        {
            for(b=0; b<3; b++)
            {
                printf("Digite b%d%d da matriz 2:\n", b+1, a+1);
                scanf("%d", &mat2[a][b]);
            }
        }
         primeira (vet1, vet2, mat1, mat2);
        }
        else if (opc=='2')
        {
          segunda(mat1, vet1);
        }
        else if (opc=='3')
        {
            printf("Até logo!");
        }
        else
        {
            printf("Opção inválida!");
        }
    }while (opc!='3');
}
