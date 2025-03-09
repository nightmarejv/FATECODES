#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
 	setlocale(LC_ALL, "Portuguese");
    char nomes_produtos[5][50]; 
    float valores_produtos[5]; 
    int abaixo10 = 0; 
    float soma_valores = 0; 
    float media_valores;
    int quantmedia = 0; 
    float maior_valor = 0; 
    char maiorvalor[50]; 

    printf("Digite os nomes e valores dos 5 produtos:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nProduto %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", nomes_produtos[i]); 
        printf("Valor: ");
        scanf("%f", &valores_produtos[i]); 

        soma_valores += valores_produtos[i];

        if (valores_produtos[i] < 10) {
            abaixo10++;
        }
        if (valores_produtos[i] > maior_valor) {
            maior_valor = valores_produtos[i];
            strcpy(maiorvalor, nomes_produtos[i]);
        }
    }

    media_valores = soma_valores / 5;

    for (int i = 0; i < 5; i++) {
        if (valores_produtos[i] > media_valores) {
            quantmedia++;
        }
    }

    printf("\nQuantidade de produtos com valor abaixo de 10 reais: %d\n", abaixo10);
    printf("Média dos valores dos produtos: %.2f\n", media_valores);
    printf("Quantidade de produtos com valor acima da média: %d\n", quantmedia);
    printf("Maior valor: %.2f\n", maior_valor);
    printf("Nome do produto com o maior valor: %s\n", maiorvalor);

    printf("\nListagem de produtos (Nome - Valor):\n");
    for (int i = 0; i < 5; i++) {
        printf("%s - %.2f\n", nomes_produtos[i], valores_produtos[i]);
    }

    return 0;
}
