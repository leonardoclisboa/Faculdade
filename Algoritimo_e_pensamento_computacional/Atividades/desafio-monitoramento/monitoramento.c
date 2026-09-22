#include <stdio.h>

int main() {
    float limite;
    float temperatura;
    float soma = 0.0f;
    float maior = 0.0f;
    float menor = 0.0f;

    int quantidade = 0;
    int acimaLimite = 0;
    int consecutivas = 0;
    int primeiraLeitura = 1;
    int encerradoPorTres = 0;


    printf("SISTEMA INTELIGENTE DE MONITORAMENTO INDUSTRIA\n");


    do {
        printf("Defina o limite de temperatura (entre -100 e 200 graus): ");

        if (scanf("%f", &limite) != 1) {
            printf("Entrada invalida! Digite apenas numeros.\n\n");

            int c;
            while ((c = getchar()) != '\n' && c != EOF) {
            }

            limite = -101;
            continue;
        }

        if (limite < -100 || limite > 200) {
            printf("Valor fora do padrao. Digite um limite entre -100 e 200 graus.\n\n");
        }

    } while (limite < -100 || limite > 200);

    printf("\nMONITORAMENTO INICIADO \n");
    printf("O sistema acionara a parada de emergencia caso registre\n");
    printf(" 3 temperaturas seguidas acima de %.2f graus.\n\n", limite);

    while (consecutivas < 3) {
        printf("Leitura do sensor (graus): ");

        if (scanf("%f", &temperatura) != 1) {
            printf("Entrada invalida! Digite apenas numeros.\n\n");

            int c;
            while ((c = getchar()) != '\n' && c != EOF) {
            }

            continue;
        }

        if (temperatura < -100 || temperatura > 200) {
            printf("Leitura ignorada. Digite um valor entre -100 e 200 graus.\n\n");
            continue;
        }

        quantidade++;
        soma += temperatura;

        if (primeiraLeitura) {
            maior = temperatura;
            menor = temperatura;
            primeiraLeitura = 0;
        } else {
            if (temperatura > maior) {
                maior = temperatura;
            }

            if (temperatura < menor) {
                menor = temperatura;
            }
        }

        if (temperatura > limite) {
            acimaLimite++;
            consecutivas++;

            printf(
                "Temperatura ACIMA do limite! (%d/3)\n\n",
                consecutivas
            );

            if (consecutivas == 3) {
                encerradoPorTres = 1;
            }
        } else {

            consecutivas = 0;

            printf(
                "Temperatura normalizada. Contador de perigo zerado.\n\n"
            );
        }
    }
    printf("------------- RELATORIO DE TURNO -------------\n");

    if (quantidade > 0) {
        printf("Total de leituras validas: %d\n", quantidade);
        printf("Maior pico registrado:     %.2f graus\n", maior);
        printf("Menor temperatura lida:    %.2f graus\n", menor);
        printf("Media termica do turno:    %.2f graus\n", soma / quantidade);
        printf("Picos acima do limite:     %d (%.2f%% das leituras)\n", acimaLimite, (acimaLimite * 100.0f) / quantidade);
    } else {
        printf("Nenhuma leitura valida foi registrada no sistema.\n");
    }

    if (encerradoPorTres) {
        printf("\nPARADA DE EMERGENCIA ACIONADA!\n");
        printf("Motivo: A maquina atingiu 3 picos consecutivos de calor.\n");
    } else {
        printf("\nMONITORAMENTO FINALIZADO\n");
    }


    return 0;
}