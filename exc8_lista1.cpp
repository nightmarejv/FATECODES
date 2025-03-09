#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
 	setlocale(LC_ALL, "Portuguese");
	int numeros[5]; 
    int soma_primos = 0; 
    int soma_multiplos3 = 0; 
    int multiplos3 = 0; 
    int maiores10 = 0; 

    printf("Digite %d números inteiros:\n", 5);
    for (int i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
        if (numeros[i] > 1) {
            int primo = 1; 
            for (int j = 2; j * j <= numeros[i]; j++) {
                if (numeros[i] % j == 0) {
                    primo = 0;
                    break;
                }
            }
            if (primo) {
                soma_primos += numeros[i];
            }
        }
        if (numeros[i] % 3 == 0) {
            soma_multiplos3 += numeros[i];
            multiplos3++;
        }
        if (numeros[i] > 10 && numeros[i] % 2 != 0) {
            maiores10++;
        }
    }
    float media_multiplos_3 = 0;
    if (multiplos3 > 0) {
        media_multiplos_3 = (float) soma_multiplos3 / multiplos3;
    }

    printf("\nSoma dos números primos: %d\n", soma_primos);
    printf("Média dos números múltiplos de 3: %.2f\n", media_multiplos_3);
    printf("Quantidade de números ímpares e maiores que 10: %d\n", maiores10);

    return 0;
}
