#include <stdio.h>
#include <string.h>

void executarFibonacci() {
    int n, a = 0, b = 1, proximo;

    printf("Digite a quantidade de termos da sequencia de Fibonacci (1 a 50): ");
    scanf("%d", &n);

    if (n < 1 || n > 50) {
        printf("Valor invalido!\n");
        return;
    }

    printf("Sequencia de Fibonacci:\n");

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            proximo = 0;
        } else if (i == 1) {
            proximo = 1;
        } else {
            proximo = a + b;
            a = b;
            b = proximo;
        }
        printf("%d ", proximo);
    }
    printf("\n");
}
