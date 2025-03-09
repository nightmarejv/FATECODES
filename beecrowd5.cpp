#include <stdio.h>
#include <stdlib.h>

struct Queue {
    int arr[100];
    int front, rear;
};

struct Stack {
    int arr[100];
    int top;
};

struct PriorityQueue {
    int arr[100];
    int size;
};

void init_queue(struct Queue *q) {
    q->front = 0;
    q->rear = 0;
}

void enqueue(struct Queue *q, int value) {
    q->arr[q->rear++] = value;
}

int dequeue(struct Queue *q) {
    if (q->front < q->rear) {
        return q->arr[q->front++];
    }
    return -1;
}

int front(struct Queue *q) {
    if (q->front < q->rear) {
        return q->arr[q->front];
    }
    return -1;
}

void init_stack(struct Stack *s) {
    s->top = -1;
}

void push(struct Stack *s, int value) {
    s->arr[++(s->top)] = value;
}

int pop(struct Stack *s) {
    if (s->top >= 0) {
        return s->arr[(s->top)--];
    }
    return -1;
}

int top(struct Stack *s) {
    if (s->top >= 0) {
        return s->arr[s->top];
    }
    return -1;
}

void init_priority_queue(struct PriorityQueue *pq) {
    pq->size = 0;
}

void push_priority_queue(struct PriorityQueue *pq, int value) {
    pq->arr[pq->size++] = value;
    // Simples ordenação de inserção, pode ser otimizado
    for (int i = pq->size - 1; i > 0 && pq->arr[i] > pq->arr[i - 1]; i--) {
        int temp = pq->arr[i];
        pq->arr[i] = pq->arr[i - 1];
        pq->arr[i - 1] = temp;
    }
}

int pop_priority_queue(struct PriorityQueue *pq) {
    if (pq->size > 0) {
        int top_value = pq->arr[0];
        for (int i = 1; i < pq->size; i++) {
            pq->arr[i - 1] = pq->arr[i];
        }
        pq->size--;
        return top_value;
    }
    return -1;
}

int top_priority_queue(struct PriorityQueue *pq) {
    if (pq->size > 0) {
        return pq->arr[0];
    }
    return -1;
}

int main() {
    int n, operacao, numero;
    struct Queue fila;
    struct Stack pilha;
    struct PriorityQueue filaPrioridade;
    int p, f, fp;

    while (scanf("%d", &n) != EOF) {
        init_stack(&pilha);
        init_queue(&fila);
        init_priority_queue(&filaPrioridade);

        p = 1;
        f = 1;
        fp = 1;

        for (int i = 0; i < n; ++i) {
            scanf("%d %d", &operacao, &numero);

            if (operacao == 1) {
                if (p) push(&pilha, numero);
                if (f) enqueue(&fila, numero);
                if (fp) push_priority_queue(&filaPrioridade, numero);
            } else {
                if (p) {
                    if (top(&pilha) != numero) p = 0;
                    else pop(&pilha);
                }

                if (f) {
                    if (front(&fila) != numero) f = 0;
                    else dequeue(&fila);
                }

                if (fp) {
                    if (top_priority_queue(&filaPrioridade) != numero) fp = 0;
                    else pop_priority_queue(&filaPrioridade);
                }
            }
        }

        if (p && !f && !fp) printf("stack\n");
        else if (!p && f && !fp) printf("queue\n");
        else if (!p && !f && fp) printf("priority queue\n");
        else if (!p && !f && !fp) printf("impossible\n");
        else printf("not sure\n");
    }

    return 0;
}

