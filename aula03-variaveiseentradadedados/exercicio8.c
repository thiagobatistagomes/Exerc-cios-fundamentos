/*
Possivel resolução sem o uso da blblioteca <math.h>
#include <stdio.h>
int main()
{
	float raio, pi, resp;
	printf("Digite o valor do raio:\n");
	scanf("%f", &raio);
	pi = 3.14,
	resp = pi * (raio * raio);
	printf("Area do circulo: %f\n", resp);
	return 0;
}
*/

#include <stdio.h>
#include <math.h>
int main()
{
	float raio, resp;
	printf("Digite o valor do raio:\n");
	scanf("%f", &raio);
	resp = M_PI * pow(raio, 2);
	printf("Area do circulo: %f\n", resp);
	return 0;
}	
	
	
	
	
	
	
	
