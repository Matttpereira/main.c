// Mateus Patricio Pereira RM564695, Gabriel Nacarelli Pinheiro RM565298, Leonardo Luster Gomes RM564448
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
void executarFatoriais() {
    int N;
    printf("Digite um numero inteiro (1 a 20): ");
    scanf("%d", &N);

    if (N < 1 || N > 20) {
        printf("Valor invalido!\n");
        return;
    }

    long long fatoriais[20];
    fatoriais[0] = 1;

    for (int i = 1; i < N; i++) {
        fatoriais[i] = fatoriais[i - 1] * (i + 1);
    }

    printf("Fatoriais:\n");
    for (int i = 0; i < N; i++) {
        printf("%d! = %lld\n", i + 1, fatoriais[i]);
    }
}

void verificarPalindromo() {
    char palavra[101];
    char palavraInvertida[101];
    int tamanho, Palindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%100s", palavra);

    tamanho = strlen(palavra);

    for (int i = 0; i < tamanho; i++) {
        palavraInvertida[i] = palavra[tamanho - 1 - i];
    }
    palavraInvertida[tamanho] = '\0';

    for (int i = 0; i < tamanho; i++) {
        char c1 = palavra[i];
        char c2 = palavraInvertida[i];

        if (c1 >= 'A' && c1 <= 'Z') c1 += 32;
        if (c2 >= 'A' && c2 <= 'Z') c2 += 32;

        if (c1 != c2) {
            Palindromo = 0;
            break;
        }
    }

    if (Palindromo) {
        printf("A palavra e um palindromo.\n");
    } else {
        printf("A palavra NAO e um palindromo.\n");
    }
}
