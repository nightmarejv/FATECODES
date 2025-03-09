#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int matriz[4][4];
    int i, j;
    int nova_matriz[4][4];

    printf("Digite os elementos da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            nova_matriz[i][j] = matriz[i][j]; 
        }
    }

    for (i = 0; i < 4; i++) {
        int temp = nova_matriz[i][0];
        nova_matriz[i][0] = nova_matriz[i][1];
        nova_matriz[i][1] = temp;

        temp = nova_matriz[i][2];
        nova_matriz[i][2] = nova_matriz[i][3];
        nova_matriz[i][3] = temp;
    }

    printf("\nMatriz Original:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nNova Matriz com colunas trocadas:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", nova_matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

