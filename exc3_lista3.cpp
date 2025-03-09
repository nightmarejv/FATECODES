#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese"); 
	
    int matriz[4][6];
    int i, j;
    int menor, soma_multiplos_3 = 0, maior_coluna_3, soma_total = 0;
    int qtd_intervalo_10_30 = 0, soma_maiores_10_pares = 0, soma_quarta_coluna = 0, soma_terceira_linha = 0;
    float media_terceira_linha;
    
    printf("Digite os elementos da matriz 4x6:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    menor = matriz[0][0];
    maior_coluna_3 = matriz[0][2];

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
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

            if (valor >= 10 && valor <= 30) {
                qtd_intervalo_10_30++;
            }
            
            if (valor > 10 && valor % 2 == 0) {
                soma_maiores_10_pares += valor;
            }
            
            if (j == 3) {
                soma_quarta_coluna += valor;
            }
            
            if (i == 2) {
                soma_terceira_linha += valor;
            }
        }
    }

    media_terceira_linha = (float)soma_terceira_linha / 6;

    printf("\nResultados:\n");
    printf("Menor número da matriz: %d\n", menor);
    printf("Soma dos números múltiplos de 3 da matriz: %d\n", soma_multiplos_3);
    printf("Maior número da 3ª coluna da matriz: %d\n", maior_coluna_3);
    printf("Média dos números da matriz: %.2f\n", (float)soma_total / 24);
    printf("Quantidade de números no intervalo entre 10 e 30: %d\n", qtd_intervalo_10_30);
    printf("Soma dos números maiores que 10 e pares: %d\n", soma_maiores_10_pares);
    printf("Soma dos números da quarta coluna da matriz: %d\n", soma_quarta_coluna);
    printf("Média dos números da terceira linha da matriz: %.2f\n", media_terceira_linha);

    return 0;
}

