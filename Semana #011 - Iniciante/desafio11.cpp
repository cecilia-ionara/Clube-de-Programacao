#include<stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	int num[20], i, resultado = 0, j, quant, k=0, primo[20];

	printf("========== NUMEROS PRIMOS ==========");
	printf("\nInforme a quantidade de números que vai inserir: ");
	scanf("%d", &quant);

	for(j=1; j<=quant; j++) {
		printf("Número para verificação: ");
		scanf("%d", &num[j]);

		for (i = 2; i <= num[j] / 2; i++) {
			if (num[j] % i == 0) {
				resultado++;
				primo[k]=num[i];
				k++;
				break;
			}
		}
	}

	if (resultado == 0) {
		printf("Os numeros primos são: %d", primo[]);
	}
	return 0;
}
