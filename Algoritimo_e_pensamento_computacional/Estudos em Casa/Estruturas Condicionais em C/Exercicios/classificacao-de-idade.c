#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 12) {
        printf("Você é criança.\n");
    } else if(idade <= 17) {
        printf("Você é adolecente\n");
    } else if ( idade <= 59){
        printf("Você é adulto.\n");
    } else {
        printf("Você é idoso.");
    }
    
    return 0;
    
}