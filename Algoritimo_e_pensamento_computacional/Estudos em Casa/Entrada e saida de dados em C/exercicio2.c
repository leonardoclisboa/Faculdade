#include <stdio.h>

int main() {
    char nome[50];
    int idade;
    float peso;
    float altura;
    char sexo;

    printf("Qual é o seu nome: ");
    scanf("%s", nome);
    printf("Qual é a sua idade: ");
    scanf("%d", &idade);
    printf("Qual é sua altura: ");
    scanf("%f", &altura);
    printf("Qual é seu peso: ");
    scanf("%f", &peso);
    printf("Qual é seu sexo [M/F]");
    scanf(" %c", &sexo);

    printf("\n--- DADOS CADASTRADOS ---\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Peso: %.2f\n", peso);
    printf("Sexo: %c\n", sexo);
    printf("\n-----------------------\n");
    
    return 0;
}
