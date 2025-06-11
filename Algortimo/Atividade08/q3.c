#include <stdio.h>

int calcularMDC(int a, int b) {
    while(b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int calcularMMC(int a, int b) {
    int mdc = calcularMDC(a, b);
    return (a * b) / mdc;
}

int main() {
    int num1, num2;
    int mdc, mmc;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    mdc = calcularMDC(num1, num2);
    mmc = calcularMMC(num1, num2);

    printf("MDC de %d e %d = %d\n", num1, num2, mdc);
    printf("MMC de %d e %d = %d\n", num1, num2, mmc);

    return 0;
}
