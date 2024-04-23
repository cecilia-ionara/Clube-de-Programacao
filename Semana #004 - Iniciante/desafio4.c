/******************************************************************************
INICIANTE
Crie um programa que simule o funcionamento
de uma calculadora cientC-fica bC!sica. O
programa deve ser capaz de realizar operaC'C5es
como adiC'C#o, subtraC'C#o, multiplicaC'C#o, divisC#o,
exponenciaC'C#o e raiz quadrada.

TambC)m implemente uma opC'C#o para fazer o
cC!lculo de uma equaC'C#o de segundo grau,
usando mC)todo de Bhaskara.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int
main () {
	float num1, num2, num3;
	int opcao;

	do {
		printf("\n\t\t === CALCULADORA CIENTIFICA ====== \n\n")
		printf ("Ola, qual operacao voce deseja realizar?\n");
		printf ("Adicao = 1 \n");
		printf ("Subtracao = 2 \n");
		printf ("Multiplicao = 3 \n");
		printf ("Divisao = 4 \n");
		printf ("Exponenciacao = 5 \n");
		printf ("raiz quadrada = 6 \n");
		printf ("Equacao segundo grau = 7 \n");
		printf ("Sair = 8 \n\n");

		printf ("Insira a opcao correspondente a operacao escolhida: ");
		scanf ("%d", &opcao);

		if (opcao == 1) {
			printf ("\n - Operacao soma - \n");
			printf ("Insira o primeiro valor da soma: ");
			scanf ("%f", &num1);
			printf ("Insira o segundo valor da soma: ");
			scanf ("%f", &num2);
			printf ("\n O resultado eh %.2f", num1 + num2);
		} else if (opcao == 2) {
			printf ("\n - Operacao subtracao - \n");
			printf ("Insira o primeiro valor da subtracao: ");
			scanf ("%f", &num1);
			printf ("Insira o segundo valor da subtracao: ");
			scanf ("%f", &num2);
			printf ("\n O resultado eh %.2f", num1 - num2);
		} else if (opcao == 3) {
			printf ("\n - Operacao multiplicacao - \n");
			printf ("Insira o primeiro valor da multiplicacao: ");
			scanf ("%f", &num1);
			printf ("Insira o segundo valor da multiplicacao: ");
			scanf ("%f", &num2);
			printf ("\n O resultado eh %.2f", num1 * num2);
		} else if (opcao == 4) {
			printf ("\n - Operacao divisao - \n");
			printf ("Insira o primeiro valor da divisao: ");
			scanf ("%f", &num1);
			printf ("Insira o segundo valor da divisao: ");
			scanf ("%f", &num2);
			printf ("\n O resultado eh %.2f", num1 / num2);
		} else if (opcao == 5) {
			printf ("\n - Operacao exponenciacao - \n");
			printf ("Insira a base: ");
			scanf ("%f", &num1);
			printf ("Insira o expoente: ");
			scanf ("%f", &num2);
			double resultado = pow (num1, num2);
			printf ("\n O resultado eh %.2f", resultado);
		} else if (opcao == 6) {
			printf ("\n - Operacao raiz quadrada - \n");
			printf ("Insira o valor que deseja calcular: ");
			scanf ("%f", &num1);
			printf ("A raiz quadrada eh %.2f\n", sqrt (num1));
		} else if (opcao == 7) {
			float a, b, c;
			float delta, raiz_delta, x1, x2;

			printf ("Insira o coeficiente a: ");
			scanf ("%f", &a);
			printf ("Insira o coeficiente b: ");
			scanf ("%f", &b);
			printf ("Insira o coeficiente c: ");
			scanf ("%f", &c);

			delta = b * b - 4 * a * c;

			if (delta >= 0) {
				raiz_delta = sqrt (delta);

				x1 = (-b + raiz_delta) / (2 * a);
				x2 = (-b - raiz_delta) / (2 * a);

				printf ("As raizes da equacao sao: x1 = %.2f e x2 = %.2f\n",
				        x1, x2);
			} else {
				printf ("A equacao nao possui raizes reais.\n");
			}
		} 	 else if (opcao == 8) {
			printf("\n--- Programa finalizado ---");
		} else			{
			printf ("ERRO, digite uma das opcoes validas");

		}
	} while (opcao != 8);
}
