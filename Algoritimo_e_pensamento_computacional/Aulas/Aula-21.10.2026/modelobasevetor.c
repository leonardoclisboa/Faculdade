#include <stdio.h>

int main() {
    int numeros[5];
    
    //Leitura dos elementos
    for (int i = 0; i < 5; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    //exibindo os resultados
    printf("\nValores digitados");
    for (int i = 0; i < 5; i++) {
        printf("numeros[%d] = %d\n", i, numeros[i]);
    }

    return 0;
}