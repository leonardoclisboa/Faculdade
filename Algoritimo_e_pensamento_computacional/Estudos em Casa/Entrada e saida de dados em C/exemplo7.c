#include <stdio.h>

int main(){
    char nome[50];
    int idade;
    float altura;
    printf("Nome: ");
    scanf("%s", nome);
    printf("Idade: ");
    scanf("%d", &idade);
    printf("Altura: ");
    scanf("%f", &altura);
    printf("\n ==== DADOS ====\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    return 0;
}