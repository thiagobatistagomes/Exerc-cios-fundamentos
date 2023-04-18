#include <stdio.h>

int main()
{	
	float valprod, resp;
	printf("Digite o valor do produto:\n");
	scanf("%f", &valprod);
	resp = valprod - valprod * 0.12;
	printf("Valor do produto com desconto: %f\n", resp);
	return 0;
}
