#include <stdio.h>
#include <math.h>
int main()
{
	float num, resp;
	printf("Digite um numero real:\n");
	scanf("%f", &num);
	resp = pow(num, 2);
	printf("Quadrado de %.2f: %.2f\n", num, resp);
	resp = pow(num, 3);
	printf("Cubo de %.2f:%.2f\n", num, resp); 
	return 0;
}
