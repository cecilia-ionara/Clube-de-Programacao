#include <stdio.h>

void calcularValorPorLitros(float precoLitro, float litros) {
	float valor = precoLitro * litros;
	printf("Valor total a pagar: R$ %.2f\n", valor);
}

void calcularLitrosPorValor(float precoLitro, float valor) {
	float litros = valor / precoLitro;
	printf("Quantidade de litros abastecida: %.2f litros\n", litros);
}

int main() {
	char combustivel;
	int forma;
	float precoLitro, litros, valor;

	printf("G - Gasolina (R$ 6.50/litro)\nE - Etanol (R$ 4.30/litro)\nD - Diesel (R$ 5.00/litro)\n");
	printf("Qual combustivel deseja? ");

	scanf(" %c", &combustivel);

	switch (combustivel) {
		case 'G':
			precoLitro = 6.50;
			break;
		case 'E':
			precoLitro = 4.30;
			break;
		case 'D':
			precoLitro = 5.00;
			break;
		default:
			printf("Opcao de combustivel invalida.\n");
			return 1;
	}

	printf("1 - Litro\n2 - Dinheiro\n");
	printf("Deseja abastecer por litro ou dinheiro?\n");

	scanf("%d", &forma);

	switch (forma) {
		case 1:
			printf("\nQuantos litros deseja abastecer?\n");
			scanf("%f", &litros);
			calcularValorPorLitros(precoLitro, litros);
			break;
		case 2:
			printf("\nQual o valor que deseja gastar?\n");
			scanf("%f", &valor);
			calcularLitrosPorValor(precoLitro, valor);
			break;
		default:
			printf("\nOpcao de abastecimento invalida.\n");
			return 1;
	}

	return 0;
}

