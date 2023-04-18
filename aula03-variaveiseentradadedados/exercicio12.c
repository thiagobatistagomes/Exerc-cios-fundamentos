#include <stdio.h>

int main()
{
	float salbase, salnovo;
	printf("Digite o salario do funcionario:\n");
	scanf("%f", &salbase);
	salnovo = salbase * 1.20;
	printf("Novo salario: %.2f\n", salnovo);
	return 0;
}
