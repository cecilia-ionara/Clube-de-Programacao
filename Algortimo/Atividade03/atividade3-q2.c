#include <stdio.h>

int main() {
    char a, b, auxiliar;

    printf("Digite o primeiro caractere ou numero: ");
    scanf(" %c", &a); 

    printf("Digite o segundo caractere ou numero: ");
    scanf(" %c", &b);

    printf("\nAntes da troca:\n");
    printf("Variavel A: %c\n", a);
    printf("Variavel B: %c\n", b);

    auxiliar = a;
    a = b;
    b = auxiliar;

    printf("\nDepois da troca:\n");
    printf("Variável A: %c\n", a);
    printf("Variável B: %c\n", b);

    return 0;
}
