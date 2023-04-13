#include <stdio.h>

//Para calcular a área de um trapézio basta somar a base maior e base menor, multiplicar pela altura e depois, basta dividir o resultado por dois.
int main()
{	
	int bmenor, bmaior, altura;
	float resp;
	printf("Digite o valor das bases menor e maior:\n");
	scanf("%d %d", &bmenor, &bmaior);
	printf("Digite o valor da altura:\n");
	scanf("%d", &altura);
	resp = (bmaior + bmenor)* altura /2;
	printf("Area do trapezio: %f\n", resp);
	return 0;
}
