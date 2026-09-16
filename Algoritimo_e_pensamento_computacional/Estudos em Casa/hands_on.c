#include <stdio.h>

int main(){
    int a = 20;
    int b = 8;
    double preco = 12.5;
    int soma = a + b;
    int sub = a - b; 
    int produto = a * b;

    printf("=== RESULTADO ===\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);
    printf("Preço = %.2f\n", preco);
    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", sub);
    printf("Produto: %d\n", produto);
    printf("Divisão: %.2f", (double)a / b);
    return 0;
}