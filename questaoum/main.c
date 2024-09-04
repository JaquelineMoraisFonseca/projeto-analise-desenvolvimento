// Questão 1: Calcular a soma dos números de 1 até INDICE
// int INDICE = 13, SOMA = 0, K = 0;
// Enquanto K < INDICE faça { K = K + 1; SOMA = SOMA + K; }
// Imprimir(SOMA);
// Ao final do processamento, qual será o valor da variável SOMA?
#include <stdio.h>

int main() {
    int INDICE = 13;
    int SOMA = 0;
    int K = 0;

    while (K < INDICE) {
        K = K + 1;
        SOMA = SOMA + K;
    }

    printf("SOMA: %d\n", SOMA);

    return 0;
}


