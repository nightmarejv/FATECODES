#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int matriz[2][6];
    int i, j;
    int maior_numero;
    int soma_multiplos_3 = 0, soma_total = 0;
    float media_segunda_linha = 0, media_matriz;
    int count = 0;
    float nova_matriz[2][6];

    printf("Digite os elementos da matriz 2x6:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 6; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (i == 0 && j == 0) {
                maior_numero = matriz[i][j];
            } else if (matriz[i][j] > maior_numero) {
                maior_numero = matriz[i][j];
            }

            if (matriz[i][j] % 3 == 0) {
                soma_multiplos_3 += matriz[i][j];
            }

            soma_total += matriz[i][j];
            count++;

            if (i == 1) {
                media_segunda_linha += matriz[i][j];
            }
        }
    }

    media_segunda_linha /= 6;
    media_matriz = (float)soma_total / count;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 6; j++) {
            nova_matriz[i][j] = matriz[i][j] * media_matriz;
        }
    }

    printf("Maior número da matriz: %d\n", maior_numero);
    printf("Soma dos números múltiplos de 3: %d\n", soma_multiplos_3);
    printf("Média dos números da segunda linha: %.2f\n", media_segunda_linha);
    printf("Média dos números da matriz: %.2f\n", media_matriz);

    printf("\nNova matriz resultante da multiplicação pela média da matriz:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 6; j++) {
            printf("%.2f ", nova_matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

