#include <stdio.h>

int main()
{
	int anonasc, anoatual, idanos, idmeses, iddias;
	printf("Digite o ano de nacimento da pessoa:\n");
	scanf("%d", &anonasc);
	printf("Digite o ano em que estamos:\n");
	scanf("%d", &anoatual);
	idanos = anoatual - anonasc;
	printf("Idade em anos: %d anos\n", idanos);
	idmeses = idanos * 12;
	printf("Idade em meses: %d meses\n", idmeses);
	iddias = idmeses * 365;
	printf("Idade em dias: %d dias\n", iddias);
	return 0;
}
