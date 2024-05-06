/*Crie um programa que simule um lançador de dados de jogo de tabuleiro. Deve pedir
ao usuário a quantidade de lados e a quantidade de dados a serem lançados e exibir resultados.

Tipos de dados do menu: Moeda (Falar se é cara ou coroa);
Dado de 6 lados;
Dado de 8 lados;
Dado de 12 lados;
Dado de 20 lados.*/

#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int quant_lados, quant_dados, i, moeda, parada;
	do {
		printf("\n\t\t MENU");
		printf("\n1 - Moeda;");
		printf("\n6 - Dado de 6 lados;");
		printf("\n8 - Dado de 8 lados;");
		printf("\n12 - Dado de 12 lados;");
		printf("\n20 - Dado de 20 lados.");

		printf("\nInforme a quantidade de lados: ");
		scanf("%d", &quant_lados);

		if (quant_lados != 1 && quant_lados != 6 && quant_lados != 8 && quant_lados != 12 && quant_lados != 20) {
			printf("\nOpcao invalida! ");
			continue;
		}

		printf("Quantidade de dados (vezes a serem sorteadas): ");
		scanf("%d", &quant_dados);

		srand(time(NULL));

		switch (quant_lados) {
			case 1:
				for (i = 0; i < quant_dados; i++) {
					moeda = rand() % 2 + 1;
					if(moeda == 1) {
						printf("%d* sorteio: Cara\n", i+1);
					} else if(moeda == 2) {
						printf("%d* sorteio: Coroa\n", i+1);
					}
				}
				break;
			case 6:
				for (i = 0; i < quant_dados; i++) {
					printf("%d* sorteio: %d \n", i+1, rand() % quant_lados + 1);
				}
				break;
			case 8:
				for (i = 0; i < quant_dados; i++) {
					printf("%d* sorteio: %d \n", i+1, rand() % quant_lados + 1);
				}
				break;
			case 12:
				for (i = 0; i < quant_dados; i++) {
					printf("%d* sorteio: %d \n", i+1, rand() % quant_lados + 1);
				}
				break;
			case 20:
				for (i = 0; i < quant_dados; i++) {
					printf("%d* sorteio: %d \n", i+1, rand() % quant_lados + 1);
				}
				break;
			default:
				printf("Opcao invalida!");
				break;
		}

		printf("\nDeseja continuar?(1 continua, 2 encerra): ");
		scanf("%d", &parada);
	} while(parada != 2);
	
	return 0;
}
