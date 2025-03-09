#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
 	setlocale(LC_ALL, "Portuguese");
    char cores[10][20];  // Vetor para armazenar as cores
    char cor_pesquisa[20];  // Armazena a cor de pesquisa
    int i;
    int encontrada;

    printf("Digite 10 cores diferentes:\n");
    for (i = 0; i < 10; i++) {
        printf("Cor %d: ", i + 1);
        scanf("%s", cores[i]); // Lê uma cor e armazena no vetor
    }

    while (1) {
        printf("\nDigite a cor que deseja pesquisar (ou 'FIM' para encerrar): ");
        scanf("%s", cor_pesquisa);
        if (strcmp(cor_pesquisa, "FIM") == 0) {
            printf("Pesquisa encerrada.\n");
            break;
        }
        encontrada = 0;
        for (i = 0; i < 10; i++) {
            if (strcmp(cores[i], cor_pesquisa) == 0) {
                printf("A cor '%s' foi encontrada na posição %d.\n", cor_pesquisa, i);
                encontrada = 1;
                break;
            }
        }
        if (!encontrada) {
            printf("A cor '%s' não foi encontrada.\n", cor_pesquisa);
        }
    }

    return 0;
}
