#include <stdio.h>

int main() {
    int opcaoMenu = 3;

    switch (opcaoMenu) {
        case 1:
            printf("Iniciando Novo jogo...\n");
            break;
        case 2:
            printf("Carregando jogo salvo....\n");
            break;
        case 3:
            printf("Abrindo Configurações....\n");
            break;
        default:
            printf("Opção invalida!\n");
    }

    return 0;
}