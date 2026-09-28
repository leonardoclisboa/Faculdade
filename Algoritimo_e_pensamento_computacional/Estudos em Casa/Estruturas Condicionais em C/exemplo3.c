#include <stdio.h>

int main() {
    float temperatura = 40.5;

    if (temperatura > 30.0) {
        printf("Está muito calor!\n");

    } else if (temperatura >= 20.0) {
        //Só chega aqui se a primeira condição for FALSA
        printf("O clima está agradável.\n");
    } else {
        // Se todas as anteriores falharem, cai no else final
        printf("Está frio!\n");
    }

    return 0;
}