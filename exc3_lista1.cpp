#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"Portuguese");
    int matriz[3][5];
    float maior = 0;
    int indice_linha, indice_coluna;
    int soma_impares = 0;
    int quantidade_impares = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("\nEntre com um numero, %d linha e da %d coluna: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                indice_linha = i;
                indice_coluna = j;
            }
            if (matriz[i][j] % 2 != 0) {
                soma_impares += matriz[i][j];
                quantidade_impares++;
            }
        }
    }
    printf("Matriz original\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("Maior elemento: %.2f (linha: %d, coluna: %d)\n", maior, indice_linha + 1, indice_coluna + 1);
    float media_impares = soma_impares / (float)quantidade_impares;
    printf("Media dos numeros impares: %.2f\n", media_impares);
    return 0;
}
