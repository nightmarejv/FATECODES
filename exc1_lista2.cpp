#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int matriz[4][4], aux, l, c, k=0, vet[16];
    printf("Informe os números da matriz\n");
    for(l=0; l<4; l++){
        for(c=0; c<4; c++){
            printf("N: ");
            scanf("%d", &matriz[l][c]);
            vet[k] = matriz[l][c];
            k++;
        }
    }
    printf("Matriz Original\n");
    for(l=0; l<4; l++){
        for(c=0; c<4; c++) printf("%d \t", matriz[l][c]);
        printf("\n");
    }
    for(l=0; l<16; l++){
        for(c=0; c<15; c++){
            if(vet[c] > vet[c+1]){
                aux = vet[c];
                vet[c] = vet[c+1];
                vet[c+1] = aux;
            }
        }
    }
    k=0;
    for(l=0; l<4; l++){
        for(c=0; c<4; c++){
            matriz[l][c] = vet[k];
            k++;
        }
    }
    printf("Nova Matriz\n");
    for(l=0; l<4; l++){
        for(c=0; c<4; c++) printf("%d \t", matriz[l][c]);
        printf("\n");
    }
    
    return 0;
}

