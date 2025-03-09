#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
 	setlocale(LC_ALL, "Portuguese");
    int vetor_a[5]; 
    int vetor_b[5]; 
    int vetor_c[2 * 5]; 
    int i, j = 0; 
    int quantidade_perfeitos = 0; 

    printf("Digite 5 números para o vetor A:\n");
    for (i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor_a[i]);
    }

    printf("\nDigite 5 números para o vetor B:\n");
    for (i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor_b[i]);
    }

    for (i = 0; i < 5; i++) {
        vetor_c[j++] = vetor_a[i];
        vetor_c[j++] = vetor_b[i];
    }

    for (i = 0; i < 2 * 5; i++) {
        int soma_divisores = 0;

        for (int k = 1; k < vetor_c[i]; k++) {
            if (vetor_c[i] % k == 0) {
                soma_divisores += k;
            }
        }

        if (soma_divisores == vetor_c[i]) {
            quantidade_perfeitos++;
        }
    }

    printf("\nQuantidade de números perfeitos no vetor C: %d\n", quantidade_perfeitos);

    return 0;
}
