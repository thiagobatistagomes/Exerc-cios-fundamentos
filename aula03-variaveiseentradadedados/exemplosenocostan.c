#include <stdio.h>
#include <math.h>
//Para o uso das funcoes seno, consseno e tangente, o angulo informado deve ser convertido para radianos
int main()
{
	double anggraus, rad, seno, cosseno, tangente;
	printf("Digite o angulo em graus:\n");
	scanf("%lf", &anggraus);
	rad = anggraus * M_PI / 180;
	printf("Valor convertido em Radianos: %lf\n", rad);
	seno = sin(rad);
	cosseno = cos(rad);
	tangente = tan(rad);
	printf("O seno do angulo informado e: %lf\n", seno);
	printf("O cosseno do angulo informado e: %lf\n", cosseno);
	printf("A tangente do angulo informado e: %lf\n", tangente);
	return 0;
}
