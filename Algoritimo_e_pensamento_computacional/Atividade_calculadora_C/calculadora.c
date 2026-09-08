#include <stdio.h>          

void adicao();
void subtracao();
void multiplicacao();
void divisao();
void resto_divisao();
void media_tres_notas();
void conversao_temperatura();
void consumo_combustivel();
void tabuada();
void par_ou_impar();
void operacao_11();
void operacao_12();
void operacao_13();
void operacao_14();
void operacao_15();
void operacao_16();
void operacao_17();
void operacao_18();
void operacao_19();
void operacao_20();

int main() {
    int opcao;

    do { // Repete enquanto a condicao for verdadeira
        printf("============= CALCULADORA =============\n");
        printf("1.  Adicao\n");
        printf("2.  Subtracao\n");
        printf("3.  Multiplicacao\n");
        printf("4.  Divisao\n");
        printf("5.  Resto da Divisao\n");
        printf("6.  Media de 3 Notas\n");
        printf("7.  Celsius para Fahrenheit\n");
        printf("8.  Consumo de Combustivel (km/l)\n");
        printf("9.  Tabuada (1 a 10)\n");
        printf("10. Par ou Impar\n");
        printf("11. Operacao 11 (A FAZER)\n");
        printf("12. Operacao 12 (A FAZER)\n");
        printf("13. Operacao 13 (A FAZER)\n");
        printf("14. Operacao 14 (A FAZER)\n");
        printf("15. Operacao 15 (A FAZER)\n");
        printf("16. Operacao 16 (A FAZER)\n");
        printf("17. Operacao 17 (A FAZER)\n");
        printf("18. Operacao 18 (A FAZER)\n");
        printf("19. Operacao 19 (A FAZER)\n");
        printf("0.  Sair\n");
        printf("=========================================\n");
        printf("Escolha uma operacao: ");
        scanf("%d", &opcao); 

        switch(opcao) { 
            case 1: adicao(); break;
            case 2: subtracao(); break;
            case 3: multiplicacao(); break;
            case 4: divisao(); break;
            case 5: resto_divisao(); break;
            case 6: media_tres_notas(); break;
            case 7: conversao_temperatura(); break;
            case 8: consumo_combustivel(); break;
            case 9: tabuada(); break;
            case 10: par_ou_impar(); break;
            
            // Espaco para a equipe chamar as funcoes
            case 11: operacao_11(); break;
            case 12: operacao_12(); break;
            case 13: operacao_13(); break;
            case 14: operacao_14(); break;
            case 15: operacao_15(); break;
            case 16: operacao_16(); break;
            case 17: operacao_17(); break;
            case 18: operacao_18(); break;
            case 19: operacao_19(); break;
            case 20: operacao_20(); break;
            
            case 0: 
                printf("Encerrando...\n"); 
                break;
            default: 
                printf("Opcao invalida!\n");
        }
    } while(opcao != 0);

    return 0; // Indica que o programa terminou com sucesso
}


void adicao() {
    float a, b;
    printf("\nDigite dois numeros: ");
    scanf("%f %f", &a, &b);
    printf("Resultado: %.2f\n", a + b); 
}

void subtracao() {
    float a, b;
    printf("\nDigite dois numeros para subtrair: ");
    scanf("%f %f", &a, &b);
    printf("Resultado: %.2f\n", a - b);
}

void multiplicacao() {
    float a, b;
    printf("\nDigite dois numeros para multiplicar: ");
    scanf("%f %f", &a, &b);
    printf("Resultado: %.2f\n", a * b); 
}

void divisao() {
    float a, b;
    printf("\nDigite o dividendo e o divisor: ");
    scanf("%f %f", &a, &b);
    if (b == 0) { 
        printf("Erro: Divisao por zero!\n");
    } else {
        printf("Resultado: %.2f\n", a / b);
    }
}

void resto_divisao() {
    int a, b; 
    printf("\nDigite dois numeros inteiros para o resto: ");
    scanf("%d %d", &a, &b);
    if (b == 0) {
        printf("Erro: Divisao por zero!\n");
    } else {
        printf("Resultado: %d\n", a % b); 
    }
}

void media_tres_notas() {
    float n1, n2, n3, media;
    printf("\nDigite as tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    media = (n1 + n2 + n3) / 3.0; 
    printf("A media final e: %.2f\n", media); 
}

void conversao_temperatura() {
    float c, f;
    printf("\nDigite a temperatura em Celsius: ");
    scanf("%f", &c);
    f = (c * 9.0 / 5.0) + 32.0; 
    printf("Temperatura em Fahrenheit: %.2f\n", f);
}

void consumo_combustivel() {
    float d, c, consumo;
    printf("\nDigite a distancia (km) e o combustivel (litros): ");
    scanf("%f %f", &d, &c);
    if(c > 0) {
        consumo = d / c; 
        printf("Consumo medio: %.2f km/l\n", consumo);
    } else {
        printf("Erro: Combustivel deve ser maior que zero.\n");
    }
}

void tabuada() {
    int n, i;
    printf("\nDigite um numero inteiro para ver a tabuada: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++) { 
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

void par_ou_impar() {
    int n;
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &n);
    if (n % 2 == 0) { 
        printf("O numero %d e PAR.\n", n);
    } else {
        printf("O numero %d e IMPAR.\n", n);
    }
}

void operacao_11() {
    printf("\nOperacao 11 ainda nao implementada.\n");
}

void operacao_12() {
    printf("\nOperacao 12 ainda nao implementada.\n");
}

void operacao_13() {
    printf("\nOperacao 13 ainda nao implementada.\n");
}

void operacao_14() {
    printf("\nOperacao 14 ainda nao implementada.\n");
}

void operacao_15() {
    printf("\nOperacao 15 ainda nao implementada.\n");
}

void operacao_16() {
    printf("\nOperacao 16 ainda nao implementada.\n");
}

void operacao_17() {
    printf("\nOperacao 17 ainda nao implementada.\n");
}

void operacao_18() {
    printf("\nOperacao 18 ainda nao implementada.\n");
}

void operacao_19() {
    printf("\nOperacao 19 ainda nao implementada.\n");
}

void operacao_20() {
    printf("\nOperacao 20 ainda nao implementada.\n");
}