#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calcula_media(float nota1, float nota2, float nota3, char tipo_media) {
    float media;

    if (tipo_media == 'A' || tipo_media == 'a') {
        media = (nota1 + nota2 + nota3) / 3;
    } else if (tipo_media == 'P' || tipo_media == 'p') {
        media = (nota1 * 5 + nota2 * 3 + nota3 * 2) / 10;
    } else {
        printf("Tipo de m�dia inv�lido.\n");
        media = -1; // Indica um valor inv�lido
    }

    return media;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, nota3, media;
    char tipo_media;

    printf("Digite as tr�s notas do aluno:\n");
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    printf("Nota 3: ");
    scanf("%f", &nota3);

    printf("Digite 'A' para m�dia aritm�tica ou 'P' para m�dia ponderada: ");
    scanf(" %c", &tipo_media);

    media = calcula_media(nota1, nota2, nota3, tipo_media);

    if (media != -1) {
        printf("A m�dia calculada �: %.2f\n", media);
    }

    return 0;
}

