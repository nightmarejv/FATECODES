#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int ehPrimo(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int matriz[4][3];
    int soma_2_4_linhas = 0, soma_primos = 0, soma_total = 0, maior_numero;
    int count = 0;
    float media;

    printf("Digite os elementos da matriz 4x3:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            soma_total += matriz[i][j];
            count++;

            if (i == 1 || i == 3) {
                soma_2_4_linhas += matriz[i][j];
            }

            if (ehPrimo(matriz[i][j])) {
                soma_primos += matriz[i][j];
            }

            if (i == 0 && j == 0) {
                maior_numero = matriz[i][j];
            } else if (matriz[i][j] > maior_numero) {
                maior_numero = matriz[i][j];
            }
        }
    }
    media = (float)soma_total / count;
    
    printf("Soma dos elementos da 2ª e 4ª linha: %d\n", soma_2_4_linhas);
    printf("Soma dos números primos: %d\n", soma_primos);
    printf("Média dos números da matriz: %.2f\n", media);
    printf("Maior número da matriz: %d\n", maior_numero);

    return 0;
}

