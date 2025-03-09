#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
 	setlocale(LC_ALL, "Portuguese");
 	char nomes[10][50]; 
    float notas[10]; 
    int abaixo5 = 0; 
    float soma_notas = 0.0; 
    int acimamedia = 0; 
    float maior_nota = 0.0;
    char aluno_maior_nota[50]; 


    printf("Digite os nomes e notas dos %d alunos:\n", 10);
    for (int i = 0; i < 10; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", nomes[i]); 
        printf("Nota: ");
        scanf("%f", &notas[i]);

        if (notas[i] < 5.0) {
            abaixo5++;
        }

        soma_notas += notas[i];

        if (i == 0 || notas[i] > maior_nota) {
            maior_nota = notas[i];
            strcpy(aluno_maior_nota, nomes[i]);
        }
    }

    float media_notas = soma_notas / 10;

    for (int i = 0; i < 10; i++) {
        if (notas[i] > media_notas) {
            acimamedia++;
        }
    }

    printf("\nQuantidade de alunos com notas abaixo de 5: %d\n", abaixo5);
    printf("Média das notas dos alunos: %.2f\n", media_notas);
    printf("Quantidade de alunos com nota acima da média: %d\n", acimamedia);
    printf("Maior nota: %.2f\n", maior_nota);
    printf("Nome do aluno com a maior nota: %s\n", aluno_maior_nota);

    return 0;
}
