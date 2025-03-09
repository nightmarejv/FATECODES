#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int menor_numero(int matriz[3][5]) {
    int menor = matriz[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }
    return menor;
}

int somamult3(int matriz[3][5]) {
    int soma = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz[i][j] % 3 == 0) {
                soma += matriz[i][j];
            }
        }
    }
    return soma;
}

int maiorterceira(int matriz[3][5]) {
    int maior = matriz[0][2];
    for (int i = 1; i < 3; i++) {
        if (matriz[i][2] > maior) {
            maior = matriz[i][2];
        }
    }
    return maior;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int matriz[3][5];

    printf("Digite os elementos da matriz 3x5:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("O menor número da matriz é: %d\n", menor_numero(matriz));
    printf("A soma dos números múltiplos de 3 da matriz é: %d\n", somamult3(matriz));
    printf("O maior número da 3ª coluna da matriz é: %d\n", maiorterceira(matriz));

    return 0;
}

