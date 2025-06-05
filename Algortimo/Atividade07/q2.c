#include <stdio.h>

int main() {
    int x;

    printf("Digite um numero: ");
    scanf("%d", &x);

    for (int i = 0; i <= x; i++) {
        if (i % 3 == 0 && i % 5 == 0 && i != 0) {
            printf("FizzBuzz\n");
        } else if (i % 3 == 0 && i != 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0 && i != 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }

    return 0;
}
