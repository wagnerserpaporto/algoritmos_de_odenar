#include <stdio.h>
#include <stdlib.h>

void ordenacaoPorBolha(int* vetor, int tamanho) {
    int i, j, temp;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

void imprimirVetor(int* vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int tamanho;
    printf("Digite o número de elementos: ");
    scanf("%d", &tamanho);

    int* vetor = (int*)malloc(tamanho * sizeof(int));
    printf("Digite os elementos: ");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    ordenacaoPorBolha(vetor, tamanho);
    printf("Vetor ordenado: ");
    imprimirVetor(vetor, tamanho);

    free(vetor);
    return 0;
}
