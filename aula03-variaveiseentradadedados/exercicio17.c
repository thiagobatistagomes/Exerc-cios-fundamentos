#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c, soma, resp;
	printf("Digite tres valores:\n");
	scanf("%f %f %f", &a, &b, &c);
	soma = a + b + c;
	resp = pow(soma, 2);
	printf("O quadrado da soma e: %f\n", resp);
	return 0;
}

