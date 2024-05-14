
#include<stdio.h>
#include <unistd.h>

double preco, preco_final, desconto, juros;
int opcao;

int main() {
	do {

		printf("\n\t\t MENU\n");
		printf("1. A vista em dinheiro ou Pix\n");
		printf("2. A vista no cartao de credito\n");
		printf("3. Parcelado em duas vezes\n");
		printf("4. Parcelado em tres vezes ou mais\n");
		printf("5. Sair do programa\n\n");

		printf("Qual a forma de pagamento? ");
		scanf("%d", &opcao);

		if (opcao!=1 && opcao!=2 && opcao!= 3 && opcao!=4 && opcao!=5) {
			printf("ERRO, favor digitar uma opcao valida! \n");
			printf("Reiniciando...\n");
			sleep(1);
			continue;
		}

		printf("Qual o preco do produto? ");
		scanf("%lf", &preco);

		sleep(0.5);
		printf("Ok! Processando...\n");
		sleep(2);

		switch(opcao) {
			case 1:
				desconto = preco * 0.15;
				preco_final = preco - desconto;
				printf("Voce devera pagar R$ %.2lf pelo produto, pois recebeu 15%% de desconto! \n", preco_final);
				sleep(2);
				break;
			case 2:
				desconto = preco * 0.10;
				preco_final = preco - desconto;
				printf("Voce devera pagar R$ %.2lf pelo produto, pois recebeu 10%% de desconto! \n", preco_final);
				sleep(2);
				break;
			case 3:
				preco_final = preco / 2;
				printf("Voce devera pagar duas parcelas de R$ %.2lf, sem juros! \n", preco_final);
				sleep(2);
				break;
			case 4:
				juros = preco * 0.10;
				preco_final = preco + juros;
				printf("Voce devera pagar R$ %.2lf pelo produto, com acrescimo de 10%% \n", preco_final);
				sleep(2);
				break;
		}
		printf("\n");
	} while(opcao!=5);
	return 0;
}
