#include <stdio.h>

int main() {
    float peso;
    float altura;
    float imc;

    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc < 25) {
        printf("Peso Normal\n");
    } else if (imc < 30) {
        printf("Sobre Peso\n");
    } else {
        printf("Obesidade\n");
    }

    return 0;
}