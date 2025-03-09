#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void converter(float nota) {
    if (nota >= 9 && nota <= 10) {
        printf("Conceito: A\n");
    } else if (nota >= 7 && nota < 9) {
        printf("Conceito: B\n");
    } else if (nota >= 5 && nota < 7) {
        printf("Conceito: C\n");
    } else if (nota >= 3 && nota < 5) {
        printf("Conceito: D\n");
    } else if (nota >= 0 && nota < 3) {
        printf("Conceito: E\n");
    } else {
        printf("Nota inválida.\n");
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    float nota;

    printf("Digite a nota do estudante: ");
    scanf("%f", &nota);

    converter(nota);

    return 0;
}

