#include <stdio.h>

int main() {
    int numero, i = 0, quadrado = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while ((i * i) <= numero) {
        quadrado = i * i;
        i++;
    }

    printf("O maior quadrado perfeito menor ou igual a %d eh: %d\n", numero, quadrado);

    return 0;
}
