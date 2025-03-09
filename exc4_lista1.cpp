#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
    float salario, maior_salario = 0, soma_salarios_20_30 = 0;
    int idade, count_20_30 = 0, count_maior_5000 = 0;
    float media_salarios_20_30 = 0, porcentagem_maior_5000 = 0;
    int count_total = 0;

    printf("Digite o salário e a idade das pessoas. Digite uma idade negativa ou zero para encerrar.\n");

    while (1) {
        printf("Salário: ");
        scanf("%f", &salario);

        if (salario <= 0) 
            break;

        printf("Idade: ");
        scanf("%d", &idade);

        if (salario > maior_salario) {
            maior_salario = salario;
        }

        if (idade >= 20 && idade <= 30) {
            soma_salarios_20_30 += salario;
            count_20_30++;
        }

        count_total++;

        if (salario > 5000) {
            count_maior_5000++;
        }
    }

    media_salarios_20_30 = count_20_30 > 0 ? soma_salarios_20_30 / count_20_30 : 0;
    porcentagem_maior_5000 = (float)count_maior_5000 / count_total * 100;

    printf("\nResultados:\n");
    printf("Maior salário: R$ %.2f\n", maior_salario);
    printf("Média dos salários das pessoas com idade entre 20 e 30 anos: R$ %.2f\n", media_salarios_20_30);
    printf("Porcentagem de pessoas que ganham mais que 5000 reais: %.2f%%\n", porcentagem_maior_5000);

    return 0;
}
