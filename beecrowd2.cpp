#include <stdio.h>

double calcular_s(char operacao, double matriz[12][12]) {
    double resultado = 0.0;
    int contador = 0;

    for (int i = 0; i < 12; i++) {
        for (int j = i + 1; j < 12; j++) {
            resultado += matriz[i][j];
            contador++;
        }
    }

    if (operacao == 'M') {
        resultado /= contador;
    }

    return resultado;
}

int main() {
    char operacao;
    double matriz[12][12];

    scanf("%c", &operacao);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }

    printf("%.1f\n", calcular_s(operacao, matriz));

    return 0;
}

