#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct No {
    int v;
    struct No *prox;
} No;

typedef struct Lista {
    No *topo;
} Lista;

void ini(Lista *l) {
    l->topo = NULL;
}

void ins(Lista *l, int v) {
    No *novo = (No *)malloc(sizeof(No));
    if (!novo) exit(1);
    novo->v = v;
    novo->prox = l->topo;
    l->topo = novo;
}

int rem(Lista *l) {
    if (l->topo == NULL) return -1;
    No *aux = l->topo;
    int v = aux->v;
    l->topo = aux->prox;
    free(aux);
    return v;
}

void mov(Lista *l) {
    if (l->topo == NULL || l->topo->prox == NULL) return;
    No *aux = l->topo;
    l->topo = aux->prox;
    No *fim = l->topo;
    while (fim->prox != NULL) fim = fim->prox;
    fim->prox = aux;
    aux->prox = NULL;
}

void lib(Lista *l) {
    while (l->topo != NULL) {
        No *aux = l->topo;
        l->topo = aux->prox;
        free(aux);
    }
}

int main() {
    int n;
    while (scanf("%d", &n) && n != 0) {
        Lista l;
        ini(&l);
        for (int i = n; i >= 1; i--) {
            ins(&l, i);
        }
        printf("Discarded cards:");
        int d = 0;
        while (l.topo != NULL && l.topo->prox != NULL) {
            if (d > 0) printf(",");
            printf(" %d", rem(&l));
            d++;
            mov(&l);
        }
        printf("\nRemaining card: %d\n", rem(&l));
        lib(&l);
    }
    return 0;
}


