#include <stdio.h>
#include <string.h>
#include <locale.h>

int EhPalindromo(const char *palavra) {
	char inverso[30];
	int i, j = 0;

	int len = strlen(palavra);
	for (i = len - 1; i >= 0; i--) {
		inverso[j] = palavra[i];
		j++;
	}
	inverso[j] = '\0';

	if (strcmp(palavra, inverso) == 0) {
		return 1; // É um palíndromo
	} else {
		return 0; // Não é um palíndromo
	}
}

int main() {
	char palavra[30];

	setlocale(LC_ALL, "portuguese");
	printf("OBS: Este verificador funciona apenas para palavras, escreva todas em minusculas e sem espaço\n");
	printf("Digite a palavra a ser verificada: ");
	fgets(palavra, 30, stdin);

	palavra[strcspn(palavra, "\n")] = '\0';

	if (EhPalindromo(palavra)) {
		printf("%s é um palíndromo\n", palavra);
	} else {
		printf("%s não é um palíndromo\n", palavra);
	}

	return 0;
}

