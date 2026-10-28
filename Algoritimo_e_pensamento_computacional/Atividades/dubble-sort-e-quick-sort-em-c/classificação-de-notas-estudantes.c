#include <stdio.h>

// Função para imprimir o array de notas
void imprimirNotas(float arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%.1f ", arr[i]);
    }
    printf("\n");
}

// Função para copiar um array (preserva o original)
void copiarArray(float origem[], float destino[], int n) {
    for (int i = 0; i < n; i++) {
        destino[i] = origem[i];
    }
}

//duble Sort (decresente)
void bubbleSort(float arr[], int n) {
    float temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Ordem decrescente: se o atual for menor que o próximo, troca
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}