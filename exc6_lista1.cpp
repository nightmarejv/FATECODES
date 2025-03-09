#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
 	setlocale(LC_ALL, "Portuguese");
    char nomes_vendedores[5][50]; 
    float vendas_vendedores[5]; 
    float comissoes[5]; 
    float total_vendas = 0;
    float media_vendas; 
    int acimamedia = 0; 
    float maior_comissao = 0; 
    char maiorcomissao[50]; 

    printf("Digite os nomes e valores das vendas dos 5 vendedores:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nVendedor %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", nomes_vendedores[i]); 
        printf("Valor total das vendas: ");
        scanf("%f", &vendas_vendedores[i]); 

        comissoes[i] = vendas_vendedores[i] * 0.10;

        total_vendas += vendas_vendedores[i];

        if (comissoes[i] > maior_comissao) {
            maior_comissao = comissoes[i];
            strcpy(maiorcomissao, nomes_vendedores[i]);
        }
    }

    media_vendas = total_vendas / 5;

    for (int i = 0; i < 5; i++) {
        if (vendas_vendedores[i] > media_vendas) {
            acimamedia++;
        }
    }
    printf("\nListagem com o nome e o valor a receber de cada vendedor (10%% das vendas):\n");
    for (int i = 0; i < 5; i++) {
        printf("%s - R$ %.2f\n", nomes_vendedores[i], comissoes[i]);
    }

    printf("\nTotal bruto vendido pelos 5 vendedores: R$ %.2f\n", total_vendas);
    printf("Média do total de vendas por vendedor: R$ %.2f\n", media_vendas);
    printf("Quantidade de vendedores que venderam acima da média das vendas: %d\n", acimamedia);
    printf("Maior valor de comissão: R$ %.2f\n", maior_comissao);
    printf("Nome do vendedor com maior comissão: %s\n", maiorcomissao);

    return 0;
}
