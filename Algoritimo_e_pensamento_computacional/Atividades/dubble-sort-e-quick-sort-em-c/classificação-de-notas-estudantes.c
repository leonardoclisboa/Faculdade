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

//Duble Sort (decresente)
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
//Quick Sort (decresente)
int particionar(float arr[], int baixo, int alto) {
    float pivo = arr[alto]; // Escolhendo o último elemento como pivô
    int i = (baixo - 1);    // Índice do maior elemento
    float temp;

    for (int j = baixo; j <= alto - 1; j++) {
        // Ordem decrescente: se o elemento atual for maior ou igual ao pivô
        if (arr[j] >= pivo) {
            i++;
            // Troca arr[i] e arr[j]
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[i + 1];
    arr[i + 1] = arr[alto];
    arr[alto] = temp;
    
    return (i + 1);
}
// Função recursiva principal do Quick Sort
void quickSort(float arr[], int baixo, int alto) {
    if (baixo < alto) {
        int pi = particionar(arr, baixo, alto);
        quickSort(arr, baixo, pi - 1);
        quickSort(arr, pi + 1, alto);
    }
}