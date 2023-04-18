#include <stdio.h>
#include <math.h>
int main()
{
	double valor, raizq;
	printf("Digite um valor:\n");
	scanf("%lf", &valor);
	raizq = sqrt(valor);
	printf("A raiz quadrada do valor informado e: %lf\n", raizq);
	return 0;	
}
