#include <stdio.h>

int calcularFatorial(int n) {
    int i, fatorial = 1;

    for(i = 1; i <= n; i++) {
        fatorial *= i;
    }

    return fatorial;
}

int main() {
    int numero, resultado;

    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &numero);

    resultado = calcularFatorial(numero);

    printf("O fatorial de %d é %d\n", numero, resultado);

    return 0;
}
