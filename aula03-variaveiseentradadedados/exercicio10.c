#include <stdio.h>
int main()
{	
	float gf, resp;
	printf("Digite a temperatura em Fahrenheit:\n");
	scanf("%f", &gf);
	resp = (gf - 32) * 5/9;
	printf("Temperatura em Celsius: %f\n", resp);
	return 0;
}
