#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
 	setlocale(LC_ALL, "Portuguese");
 	char nomes[5][50]; 
    float pesos[5]; 
    float soma_pesos = 0; 
    float media_pesos; 
    float menor_peso = 0; 
    char menorpeso[50]; 

    printf("Digite o nome e o peso de 10 pessoas:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nPessoa %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", nomes[i]); 
        printf("Peso (em kg): ");
        scanf("%f", &pesos[i]);

        soma_pesos += pesos[i];

        if (i == 0 || pesos[i] < menor_peso) {
            menor_peso = pesos[i];
            strcpy(menorpeso, nomes[i]);
        }
    }

    media_pesos = soma_pesos / 5;

    printf("\nMenor peso: %.2f kg\n", menor_peso);
    printf("Nome da pessoa com o menor peso: %s\n", menorpeso);
    printf("\nMédia dos pesos: %.2f kg\n", media_pesos);
    printf("\nRelatório das pessoas com peso inferior à média (%.2f kg):\n", media_pesos);
    for (int i = 0; i < 5; i++) {
        if (pesos[i] < media_pesos) {
            printf("%s - %.2f kg\n", nomes[i], pesos[i]);
        }
    }

    return 0;
}
