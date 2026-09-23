#include <stdio.h>

int main() {
    int contador = 1; // inicialização
    int soma = 0; // inicialização

    while (contador <=5) {
        soma = soma + contador;
        contador++; //atualizar o contador
    }

    printf("soma = %d\n", soma);
    return 0;

}