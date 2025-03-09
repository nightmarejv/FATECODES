#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
 	setlocale(LC_ALL, "Portuguese");
 	int vetor1[10]; 
    int vetor2[10]; 
    int vetor_intercalado[2 * 10]; 

    printf("Digite 10 números para o primeiro vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }
    printf("\nDigite 10 números para o segundo vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }
    for (int i = 0; i < 10; i++) {
        vetor_intercalado[2 * i] = vetor1[i];
        vetor_intercalado[2 * i + 1] = vetor2[i];
    }
    
    printf("\nVetor 1:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor1[i]);
    }
    printf("\nVetor 2:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor2[i]);
    }
    printf("\nVetor intercalado (20 números):\n");
    for (int i = 0; i < 2 * 10; i++) {
        printf("%d ", vetor_intercalado[i]);
    }

    return 0;
}
