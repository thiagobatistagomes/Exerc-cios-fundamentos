#include <stdio.h>
int main()
{	
	float gc, resp;
	printf("Digite a temperatura em Celsius:\n");
	scanf("%f", &gc);
	resp = (gc * 9/5) + 32;
	printf("Temperatura em Fahrenheit: %f\n", resp);
	return 0;
}
