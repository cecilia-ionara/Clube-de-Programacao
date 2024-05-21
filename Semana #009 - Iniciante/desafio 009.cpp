#include<stdio.h>
#include<locale.h>
#include <unistd.h>

int main() {
	float nota1, nota2, nota_final;
	int i;

	setlocale(LC_ALL, "portuguese");
	printf("Obs: Para float, utilize v�rgulas!\n");

	for(i=1; i<=10; i++) {
		printf("\n=========================== ALUNO %d ===========================\n",i);

		printf("Digite a primeira nota: ");
		scanf("%f", &nota1);

		printf("Digite a segunda nota: ");
		scanf("%f", &nota2);

		if(nota1<0 || nota1>10 || nota2<0 || nota2>10) {
			printf("Nota inv�lida, favor inserir um n�mero de 0 a 10!\n");
			break;
		}
		sleep(2);
		nota_final = ((nota1*4) + (nota2*6))/10;
		printf("\nA m�dia final do aluno %d � %.2f, com esta nota seu conceito foi ",i,nota_final);

		if (nota_final>0 && nota_final<=4.9) {
			printf("insuficiente.\nInfelizmente, voc� foi REPROVADO!");
		} else if (nota_final>=5 && nota_final<=6.9) {
			printf("regular.\nVoc� foi APROVADO, mesmo assim, esforce-se mais da pr�xima vez!");
		} else if(nota_final>=7 && nota_final<=8.9) {
			printf("bom.\nParab�ns! Voc� foi APROVADO!");
		} else if(nota_final>=9 && nota_final<=10) {
			printf("excelente.\nParab�ns! Voc� foi APROVADO!");
		}
		printf("\n");
		sleep(1.5);
	}

	return 0;
}
