#include <stdio.h>

int main()
{	
	int base, altura;
	float resp;
	printf("Digite os valores da base e da altura:\n");
	scanf("%d %d", &base, &altura);
	resp = base * altura / 2;
	printf("Area do triangulo: %.2f\n", resp);
	return 0;
}
