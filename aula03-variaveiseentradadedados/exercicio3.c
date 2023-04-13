#include <stdio.h>
int main()
{	
	float a, b, c, resp;
	printf("Digite tres valores:\n");
	scanf("%f %f %f", &a, &b, &c);
	resp = a + b + c;
	printf("Soma dos valores: %f\n", resp);
	return 0;
}
