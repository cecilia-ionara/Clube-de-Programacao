#include <stdio.h>
#include <math.h>

int main() {
    float a = 0, b = 0, c = 0;

    printf("Digite o valor de dois lados do triângulo retângulo.\n");
    printf("Digite 0 para o lado que deseja descobrir.\n");

    printf("Lado a: ");
    scanf("%f", &a);
    printf("Lado b: ");
    scanf("%f", &b);
    printf("Hipotenusa c: ");
    scanf("%f", &c);

    if (a == 0 && b > 0 && c > b && c > 0) {
        float aux = c * c - b * b;
        if (aux < 0) {
            printf("Valores inválidos: raiz quadrada de número negativo.\n");
        } else {
            a = sqrt(aux);
            printf("Lado a = %.2f\n", a);
        }
    } else if (b == 0 && a > 0 && c > a && c > 0) {
        float aux = c * c - a * a;
        if (aux < 0) {
            printf("Valores inválidos: raiz quadrada de número negativo.\n");
        } else {
            b = sqrt(aux);
            printf("Lado b = %.2f\n", b);
        }
    } else if (c == 0 && a > 0 && b > 0) {
        c = sqrt(a * a + b * b);
        printf("Hipotenusa c = %.2f\n", c);
    } else {
        printf("Dados inválidos. Verifique se:\n");
        printf("- Apenas um dos lados está como 0.\n");
        printf("- A hipotenusa (c) é o maior lado.\n");
    }

    return 0;
}
