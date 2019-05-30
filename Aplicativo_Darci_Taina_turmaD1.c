#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float metros;

float f(float x) {

    return 10-20*((pow(M_E,(-0.2*x)) - (pow(M_E,(-0.75*x))))) - metros;
}

float der(float x) {
	return 4*pow(M_E,-0.2*x) - 15*pow(M_E,-0.75*x);
}

int main() {
	float eps, x0, *iter;
	int i, numiter;

	printf("********************************************************************************\nCalculo do nivel de concentracao de oxigenio num rio, em funcao da distancia x, medida a partir do local de descarga de poluentes.\n\n********************************************************************************");
	printf("\nDigite o erro: \n");

	scanf("%f",&eps);

	printf("Digite o numero maximo de iteracoes:\n");
	scanf("%d", &numiter);

	printf("Digite o X0 inicial? \n");
	scanf("%f", &x0);

	printf("distancia em metros: \n");
	scanf("%f", &metros);


	iter = malloc(sizeof(float) * numiter);


	iter[0] = x0;
	i = 0;


	while(f(iter[i]) > eps) {

		if(i > numiter) {
			printf("\n Nao convergiu em %d iteracoes!!!\n", numiter);
			printf("\n Provavelmente f'(x) esta errada.\n");


		}
		iter[i+1] = iter[i] - f(iter[i])/der(iter[i]);
		printf("\n intercao = %f", iter[i+1]);
		i++;
	}

	printf("\n C ~= %f ", iter[i]);
	printf("\n Foram feitas %d iteracoes.\n",i);
}
