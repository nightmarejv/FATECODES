#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int matriz[4][4];
    int i, j, k = 0;
    int unidimensional[16];
    int temp;

    printf("Digite os elementos da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
            unidimensional[k++] = matriz[i][j];
        }
    }

    for (i = 0; i < 16 - 1; i++) {
        for (j = 0; j < 16 - i - 1; j++) {
            if (unidimensional[j] > unidimensional[j + 1]) {
                temp = unidimensional[j];
                unidimensional[j] = unidimensional[j + 1];
                unidimensional[j + 1] = temp;
            }
        }
    }

    k = 0;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            matriz[i][j] = unidimensional[k++];
        }
    }

    printf("\nMatriz Original:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz Ordenada:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
