#include <stdio.h>

int main() {
    int x = 8, y = 3;
    int soma = x + y;
    int sub =  x - y;
    int mult = x * y;
    float div = (float)x / y;
    int resto = x % y;

    printf("x = %d e y = %d = %d\n", x, y);
    printf("Soma = %d\n",soma);
    printf("Subtração = %d\n", sub);
    printf("Multiplicação = %d\n", mult);
    printf("Divisão (x/y) = %.2f\n", div);
    printf("Resto da divisão (x %% y) = %d\n", resto);
    return 0;

}