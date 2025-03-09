#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float dados[10][3]; 
    int i;
    float soma_salarios = 0, soma_filhos = 0;
    int total_filhos_15_25 = 0, count_20_30 = 0;
    float soma_salarios_20_30 = 0;

    printf("Digite os dados de 10 pessoas (salário, idade, número de filhos):\n");
    for (i = 0; i < 10; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Salário: ");
        scanf("%f", &dados[i][0]);
        printf("Idade: ");
        scanf("%f", &dados[i][1]);
        printf("Número de filhos: ");
        scanf("%f", &dados[i][2]);

        soma_salarios += dados[i][0];
        soma_filhos += dados[i][2];

        if (dados[i][1] >= 15 && dados[i][1] <= 25) {
            total_filhos_15_25 += (int)dados[i][2];
        }

        if (dados[i][1] >= 20 && dados[i][1] <= 30) {
            soma_salarios_20_30 += dados[i][0];
            count_20_30++;
        }
    }

    float media_salarios = soma_salarios / 10;
    float media_filhos = soma_filhos / 10;
    float media_salarios_20_30 = count_20_30 ? (soma_salarios_20_30 / count_20_30) : 0;

    printf("Média de salário da população: %.2f\n", media_salarios);
    printf("Média do número de filhos: %.2f\n", media_filhos);
    printf("Quantidade de filhos das pessoas com idade entre 15 e 25 anos: %d\n", total_filhos_15_25);
    printf("Média de salário das pessoas com idade entre 20 e 30 anos: %.2f\n", media_salarios_20_30);

    return 0;
}

