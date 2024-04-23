/***
Desafio 5
Este é o desafio das Notas. Leia um valor
inteiro e calcule o menor número possível de
notas para representar esse valor usando
notas de 100, 50, 20, 10, 5, 2 e 1.
Receba um único número inteiro ?? como
entrada. Em seguida, imprima o valor ??
seguido da quantidade mínima de cada tipo de
nota necessária para representar esse valor.
***/

#include <stdio.h>

int main() {
	int notas[] = {100, 50, 20, 10, 5, 2, 1};
	int quantidade_notas[7] = {0};
	int reais, i;

	printf("Digite a quantia para calcularmos as notas que serao impressas (nao colocar centavos): ");
	scanf("%d", &reais);

	for (i = 0; i < 7; i++) {
		quantidade_notas[i] = reais / notas[i];
		reais = reais % notas[i];
	}
	printf("\nQuantidade minima para cada nota:");

	for (i=0; i<7; i++) {
		printf("\n%d nota(s) de R$ %d,00", quantidade_notas[i], notas[i]);
	}

	return 0;
}
