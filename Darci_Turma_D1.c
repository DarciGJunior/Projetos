#include <stdio.h>
#include <math.h>

// Este código é utilizado para encontrar o zero de uma função, amplamente aproveitado em problemas da Eng. Química


float f(float x) {
	return pow(x,2)-5*x+6;
}

float der(float x) {
	return 2*x-5; // derivada de f(x).
}

int main() {
	float eps, x0, *iter; // erro, ponto inicial, vetor iterações.
	int i, numiter; // iteração atual, número de iterações.

	printf("Método de Newton-Rhapson para o zero da função f(x).\n");
	printf("Digite o erro: \n");

	scanf("%f",&eps);

	printf("Digite o número máximo de iterações?\n");
	scanf("%d", &numiter);

	printf("Digite o X0 inicial? \n");
	scanf("%f", &x0);

	// Alocar dinâmicamente memória para o vetor das iterações.
	iter = malloc(sizeof(float) * numiter);

	// Condições iniciais.
	iter[0] = x0;
	i = 0;

	// Iterações.
	while(f(iter[i]) > eps) {
		// Excedeu o nosso limite de iterações.
		if(i > numiter) {
			printf("Não convergiu em %d iterações!!!\n", numiter);
			printf("Provavelmente f'(x) está errada.\n");


		}
		iter[i+1] = iter[i] - f(iter[i])/der(iter[i]);
		i++;
	}

	printf("X ~= %f ", iter[i]);
	printf("\nForam feitas %d iterações.\n",i);
}
