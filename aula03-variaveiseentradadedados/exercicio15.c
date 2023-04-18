#include <stdio.h>

int main()
{
	int dkm, thr;
	float vm;
	printf("Digite a distancia percorrida em KM:\n");
	scanf("%d", &dkm);
	printf("Digite o tempo gasto em horas:\n");
	scanf("%d", &thr);
	vm = dkm / thr;
	printf("Velocidade media: %.1f Km/h\n", vm);
	return 0;
}
