#include <stdio.h>
#include <string.h>

struct Nome {
    char valor[31];
};

int main() {
    struct Nome nomes[10]; 
    struct Nome *ptr;      
    struct Nome *terceiro, *setimo, *nono;  


    for (int i = 0; i < 10; i++) {
        ptr = &nomes[i]; 
        scanf("%30s", ptr->valor);  

        if (i == 2) {
            terceiro = ptr;
        }
        if (i == 6) {
            setimo = ptr;
        }
        if (i == 8) {
            nono = ptr;
        }
    }
    printf("%s\n", terceiro->valor);  
    printf("%s\n", setimo->valor);   
    printf("%s\n", nono->valor);     

    return 0;
}

