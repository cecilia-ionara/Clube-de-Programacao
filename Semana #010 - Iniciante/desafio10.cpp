/*Crie um programa que verifique se uma palavra fornecida pelo usu�rio
 � pal�ndromo.
 Um pal�ndromo � uma palavra ou frase que lida da mesma forma
 tanto esquerda para a direita quanto esquerda.*/

#include<stdio.h>
#include<string.h>

int main() {

	char palavra[30];
	
	printf("Digite a palavra a ser verificada: ");
	gets(palavra);
	//MINHA IDEIA = CRIAR UMA VARIAVEL PRA COLOCAR A INVERSAO USANDO UM LA�O QUE INVERTA, DEPOIS COMPARA COM STRCM
	//	COMPARAR UMA A OUTRA = vari�vel do tipo inteiro = strcmp(string1, string2);
	//tem q fazer funao ou string??
	
	printf("%s", palavra);
	return 0;
}
