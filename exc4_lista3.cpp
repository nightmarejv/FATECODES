#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int matriz[5][3];
    char nomes_vendedores[5][100];
    int i, j;
    int total_vendido_por_vendedor[5] = {0};
    int maior_venda_mes_1 = 0, menor_venda_mes_3;
    int total_vendido_mes[3] = {0};

    printf("Digite os nomes dos 5 vendedores:\n");
    for (i = 0; i < 5; i++) {
        printf("Nome do vendedor %d: ", i + 1);
        scanf("%s", nomes_vendedores[i]);
    }

    printf("\nDigite os valores de vendas de 3 meses para os 5 vendedores:\n");
    for (i = 0; i < 5; i++) {
        printf("Vendas para o vendedor %s:\n", nomes_vendedores[i]);
        for (j = 0; j < 3; j++) {
            printf("Mês %d: ", j + 1);
            scanf("%d", &matriz[i][j]);
            
            total_vendido_por_vendedor[i] += matriz[i][j];
            total_vendido_mes[j] += matriz[i][j];
            
            if (j == 0 && (i == 0 || matriz[i][j] > maior_venda_mes_1)) {
                maior_venda_mes_1 = matriz[i][j];
            }
            
            if (j == 2 && (i == 0 || matriz[i][j] < menor_venda_mes_3)) {
                menor_venda_mes_3 = matriz[i][j];
            }
        }
    }

    printf("\nResultados:\n");
    for (i = 0; i < 5; i++) {
        printf("Valor total vendido por %s: %d\n", nomes_vendedores[i], total_vendido_por_vendedor[i]);
    }
    printf("Maior venda do mês 1: %d\n", maior_venda_mes_1);
    printf("Menor venda do mês 3: %d\n", menor_venda_mes_3);
    for (j = 0; j < 3; j++) {
        printf("Total vendido no mês %d por todos os vendedores: %d\n", j + 1, total_vendido_mes[j]);
    }

    return 0;
}

