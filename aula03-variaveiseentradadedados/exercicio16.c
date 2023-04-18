#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c, resp;
	printf("Digite tres valores:\n");
	scanf("%f %f %f", &a, &b, &c);
	resp = pow(a, 2) + pow(b, 2) + pow(c, 2); 
	printf("A soma dos quadrados e: %f\n", resp);
	return 0;
}
