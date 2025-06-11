#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, proximo;

    printf("Digite o número de termos da sequência de Fibonacci: ");
    scanf("%d", &n);

    printf("Sequência de Fibonacci com %d termos:\n", n);

    for(i = 0; i < n; i++) {
        printf("%d ", a);
        proximo = a + b;
        a = b;
        b = proximo;
    }

    printf("\n");

    return 0;
}
