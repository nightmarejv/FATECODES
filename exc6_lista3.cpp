#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int matriz[7][10] = {0};
    int i, j;

    printf("Digite os elementos da matriz 6x10:\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 10; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (j = 0; j < 10; j++) {
        for (i = 0; i < 6; i++) {
            matriz[6][j] += matriz[i][j];
        }
    }

    printf("\nSoma das colunas:\n");
    for (j = 0; j < 10; j++) {
        printf("Coluna %d: %d\n", j + 1, matriz[6][j]);
    }

    return 0;
}

