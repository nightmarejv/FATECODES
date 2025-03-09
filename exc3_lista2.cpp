#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int perfeito(int numero) {
    int soma = 0;
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            soma += i;
        }
    }
    if (soma == numero) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (perfeito(numero)) {
        printf("O número %d é perfeito.\n", numero);
    } else {
        printf("O número %d não é perfeito.\n", numero);
    }

    return 0;
}
