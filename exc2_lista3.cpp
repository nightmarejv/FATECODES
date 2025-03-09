#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); 

    int matriz[3][5];
    int i, j;
    int menor, soma_multiplos_3 = 0, maior_coluna_3, soma_total = 0;
    float media;

    printf("Digite os elementos da matriz 3x5:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    menor = matriz[0][0];
    maior_coluna_3 = matriz[0][2];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            int valor = matriz[i][j];
            
            if (valor < menor) {
                menor = valor;
            }

            if (valor % 3 == 0) {
                soma_multiplos_3 += valor;
            }

            if (j == 2 && valor > maior_coluna_3) {
                maior_coluna_3 = valor;
            }

            soma_total += valor;
        }
    }
    media = (float)soma_total / (3 * 5);
    
    printf("\nResultados:\n");
    printf("Menor número da matriz: %d\n", menor);
    printf("Soma dos números múltiplos de 3 da matriz: %d\n", soma_multiplos_3);
    printf("Maior número da 3ª coluna da matriz: %d\n", maior_coluna_3);
    printf("Média dos números da matriz: %.2f\n", media);

    return 0;
}
