/******************************************************************************
INICIANTE
Crie um programa que conte o número de
vogais e consoantes em uma palavra fornecida
pelo usuário.

O programa deve exibir o total de vogais e
consoantes encontradas na palavra inserida.

*******************************************************************************/
#include <stdio.h>

int main() {
    char palavra[20];
    int vogais = 0, consoantes = 0;
    int i = 0;

    printf("Digite uma palavra para contagem de vogais e consoantes: ");
    scanf("%s", palavra);

    while (palavra[i] != '\0') {
        char ch = palavra[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vogais++;
        } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consoantes++;
        }
        i++;
    }

    printf("Há %d vogais\n", vogais);
    printf("Há %d consoantes\n", consoantes);

    return 0;
}
