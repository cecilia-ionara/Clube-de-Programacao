/*** **
Desafio 06 - Programa pra faculdade
***/

#include<stdio.h>

int main() {
	int dia_aula, falta, opcao_switch, reprovados_falta = 0, reprovados_nota = 0, total_alunos = 0;
    float nota, maior_nota = 0, menor_nota = 10, soma_notas = 0;
    char conceito;

	printf("Informe a quantidade total de dias de aula no ultimo periodo letivo: ");
	scanf("%d", &dia_aula);

	do {
		printf("\nInforme a nota final do aluno(-1 para encerrar): ");
		scanf("%f", &nota);
		if (nota == -1) {
			break;
		}

		if(nota<0 || nota>10) {
			printf("ERRO, Insira um numero dentro do intervalo \n\n");
			continue;
		}
		printf("Informe o numero de faltas do aluno: ");
		scanf("%d", &falta);

		//VALIDANDO REPROVAÇÃO FALTA
		if (falta / dia_aula >= 0.75) {
			reprovados_falta++;
			printf("Aluno reprovado por falta.\n");
		}
		//CONCEITO
		if (nota >= 0 && nota < 5) {
			conceito = 'I';
		} else if (nota >= 5 && nota < 7) {
			conceito = 'R';
		} else if (nota >= 7 && nota < 9) {
			conceito = 'B';
		} else if (nota >= 9 && nota <= 10) {
			conceito = 'E';
		}
		//MÉDIA
		total_alunos++;
		soma_notas += nota;
		if (nota > maior_nota) {
			maior_nota = nota;
		}
		if (nota < menor_nota) {
			menor_nota = nota;
		}

		//VALIDANDO REPROVAÇÃO NOTA
		if (conceito == 'I') {
			reprovados_nota++;
		}

		printf("Conceito do aluno eh: %c\n\n", conceito);

	} while (1);

	do {
		printf("\n\t\tMenu:\n");
		printf("1- Imprimir o total de alunos lidos\n");
		printf("2- Imprimir a maior nota da turma\n");
		printf("3- Imprimir a menor nota da turma\n");
		printf("4- Imprimir a media das notas da turma\n");
		printf("5- Imprimir a porcentagem de alunos reprovados por falta\n");
		printf("6- Imprimir a porcentagem de alunos reprovados por media\n");
		printf("7- Encerrar programa\n");
		printf("Escolha uma opcao: ");
		scanf("%d", &opcao_switch);

		switch (opcao_switch) {
			case 1 :
				printf("\nTotal de alunos lidos: %d\n", total_alunos);

				break;

			case 2 :
				printf("\nMaior nota da turma: %.2f\n", maior_nota);

				break;

			case 3 :
				printf("\nMenor nota da turma: %.2f\n", menor_nota);
				break;

			case 4 :
				printf("\nMedia das notas da turma: %.2f\n", soma_notas / total_alunos);
				break;

			case 5 :
				printf("\nPorcentagem de alunos reprovados por falta: %.2f%%\n", (float)reprovados_falta / total_alunos * 100);
				break;

			case 6 :
				printf("\nPorcentagem de alunos reprovados por media: %.2f%%\n", (float)reprovados_nota / total_alunos * 100);
				break;

			case 7 :
				printf("\nEncerrando programa...\n");
				break;
			default:
				printf("Opcao invalida. Por favor, escolha novamente.\n");
		}
		
	} while (opcao_switch != 7);

	return 0;

}
