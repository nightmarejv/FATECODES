#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float notas[5][4];
    char nomes[5][100];
    float medias[5] = {0};
    float maior_media = 0;
    char nome_maior_media[100];
    int i, j;

    printf("Digite os nomes e as notas dos 5 alunos:\n");
    for (i = 0; i < 5; i++) {
        printf("Nome do aluno %d: ", i + 1);
        scanf("%s", nomes[i]);
        float soma_notas = 0;
        for (j = 0; j < 4; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
            soma_notas += notas[i][j];
        }
        medias[i] = soma_notas / 4;
        if (i == 0 || medias[i] > maior_media) {
            maior_media = medias[i];
            strcpy(nome_maior_media, nomes[i]);
        }
    }

    printf("\nRelatório:\n");
    for (i = 0; i < 5; i++) {
        printf("Nome: %s, Média: %.2f\n", nomes[i], medias[i]);
    }
    printf("\nA maior média foi %.2f, obtida por %s.\n", maior_media, nome_maior_media);

    return 0;
}

