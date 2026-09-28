#include <stdio.h>

int main() {
    int idade = 16;
    
    if (idade >= 18) {
        printf("Você é maior de idade. Pode entrar.\n");
    } else{
        // Este Bloco só execulta se a condicão acima for FALSA
        printf("Você é menor de idade. Entrada Bloqueada.\n");
    }
    
    return 0;
}