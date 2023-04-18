#include <stdio.h>
#include <math.h>
int main()
{
	float ag, ar, resp;
	printf("Digite o angulo em graus:\n");
	scanf("%f", &ag);
	resp = ag * M_PI /180;
	printf("Angulo em radianos:%f\n", resp);
	return 0;
}
