#include<stdio.h>


main ()
{
    char m[3][3] ; //Matriz de duas dimensões//
    int lin, col, j=0;

    const int TRUE=1;
    const char O='O', x= 'X';

    printf("Digite as coordenadas na forma lin col: \n");

    for(lin=0;lin<3;lin++)
    {
        for(col=0;col<3;col++)
        {
            m[lin][col]='.';
        }
    }
    while(TRUE)
    {
        for(lin=0;lin<3;lin++)
        {
            for(col=0;col<3;col++)
            {
                printf("%c",m[lin][col]);

            }
            printf("\n");
        }

        // Verifica se primeiro jogador ganhou : //
        if(
            (m[0][0]==O && m[0][1]==O && m[0][2]==O) ||
            (m[1][0]==O && m[1][1]==O && m[1][2]==O) ||
            (m[2][0]==O && m[2][1]==O && m[2][2]==O) ||
            (m[0][0]==O && m[1][0]==O && m[2][0]==O) ||
            (m[0][1]==O && m[1][1]==O && m[2][1]==O) ||
            (m[0][2]==O && m[1][2]==O && m[2][2]==O) ||
            (m[0][0]==O && m[1][1]==O && m[2][2]==O) ||
            (m[0][2]==O && m[1][1]==O && m[2][0]==O))
            {
                printf(" VocÊ ganhou , primeiro jogador!!!!!!\n");
                break;
            }


        // Verifica se segundo jogador ganhou : //

        if(
            (m[0][0]==x && m[0][1]==x && m[0][2]==x) ||
            (m[1][0]==x && m[1][1]==x && m[1][2]==x) ||
            (m[2][0]==x && m[2][1]==x && m[2][2]==x) ||
            (m[0][0]==x && m[1][0]==x && m[2][0]==x) ||
            (m[0][1]==x && m[1][1]==x && m[2][1]==x) ||
            (m[0][2]==x && m[1][2]==x && m[2][2]==x) ||
            (m[0][0]==x && m[1][1]==x && m[2][2]==x) ||
            (m[0][2]==x && m[1][1]==x && m[2][0]==x))
            {
                printf(" VocÊ ganhou , segundo jogador!!!!!!\n");
                break;
            }
            if(j==9)
            {
                printf(" Empatou!!! \n");
                break;
            }

            printf("Coordenadas: ");
            scanf("%d%d", &lin, &col);

            if(m[lin][col]== '.') //CASA LIVRE??//
            {
                if(j%2) m[lin][col] = x;
                else m[lin][col] = O;
                j++;
            }

    }
}
