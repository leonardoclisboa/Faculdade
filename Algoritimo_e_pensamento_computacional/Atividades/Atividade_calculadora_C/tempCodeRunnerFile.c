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

    do { 
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
        printf("11. Potenciacao\n");
        printf("12. Raiz Quadrada\n");
        printf("13. Porcentagem\n");
        printf("14. Area do Terreno (Retangulo)\n");
        printf("15. Area do Circulo\n");
        printf("16. Calculo de Desconto\n");
        printf("17. Calculadora de IMC\n");
        printf("18. Fatorial\n");
        printf("19. Maior de dois numeros\n");
        printf("20. Verificar Maioridade\n");
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
            case 11: potenciacao(); break;
            case 12: raiz_quadrada(); break;
            case 13: porcentagem(); break;
            case 14: area_terreno(); break;
            case 15: area_circulo(); break;
            case 16: calculo_desconto(); break;
            case 17: calculo_imc(); break;
            case 18: fatorial(); break;
            case 19: maior_dois_numeros(); break;
            case 20: verifica_maioridade(); break;
            case 0: 
                printf("Encerrando...\n"); 
                break;
            default: 
                printf("Opcao invalida!\n");
        }
    } while(opcao != 0);

    return 0;
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

void potenciacao() {
    float base, expoente;
    printf("\nDigite a base e o expoente: ");
    scanf("%f %f", &base, &expoente);
    printf("Resultado: %.2f\n", pow(base, expoente)); 
}

void raiz_quadrada() {
    float num;
    printf("\nDigite o numero: ");
    scanf("%f", &num);
    if(num >= 0) {
        printf("Resultado: %.2f\n", sqrt(num));
    } else {
        printf("Erro: Raiz de numero negativo nao pertence aos reais!\n");
    }
}

void porcentagem() {
    float valor, perc;
    printf("\nDigite o valor total e a porcentagem: ");
    scanf("%f %f", &valor, &perc);
    printf("%.2f%% de %.2f e: %.2f\n", perc, valor, valor * (perc / 100.0));
}

void area_terreno() {
    float largura, comprimento, area;
    printf("\nDigite a largura e o comprimento (em metros): ");
    scanf("%f %f", &largura, &comprimento);
    area = largura * comprimento; 
    printf("A area do terreno e: %.2f m2\n", area);
}

void area_circulo() {
    double raio, area;
    printf("\nDigite o raio do circulo: ");
    scanf("%lf", &raio);
    area = 3.1415926535 * pow(raio, 2); 
    printf("A area do circulo e: %.2lf\n", area);
}

void calculo_desconto() {
    float preco, desconto, preco_final;
    printf("\nDigite o preco original e a porcentagem de desconto: ");
    scanf("%f %f", &preco, &desconto);
    preco_final = preco - (preco * (desconto / 100.0));
    printf("Valor do desconto: %.2f\n", preco * (desconto / 100.0));
    printf("Preco final com desconto: R$ %.2f\n", preco_final);
}

void calculo_imc() {
    float peso, altura, imc;
    printf("\nDigite o peso (kg) e altura (m): ");
    scanf("%f %f", &peso, &altura);
    imc = peso / (altura * altura);
    printf("Seu IMC e: %.2f\n", imc);
    if (imc < 18.5) {
        printf("Classificacao: Abaixo do peso\n");
    } else if (imc < 25) {
        printf("Classificacao: Peso normal\n");
    } else if (imc < 30) {
        printf("Classificacao: Sobrepeso\n");
    } else {
        printf("Classificacao: Obesidade\n"); 
    }
}

void fatorial() {
    int n, i, fat = 1;
    printf("\nDigite um numero inteiro positivo: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Erro: Nao existe fatorial de numero negativo!\n");
    } else {
        for(i = 1; i <= n; i++) {
            fat = fat * i;
        }
        printf("O fatorial de %d e: %d\n", n, fat);
    }
}

void maior_dois_numeros() {
    float n1, n2;
    printf("\nDigite dois numeros: ");
    scanf("%f %f", &n1, &n2);
    if(n1 > n2) {
        printf("O maior numero e: %.2f\n", n1);
    } else if (n2 > n1) {
        printf("O maior numero e: %.2f\n", n2);
    } else {
        printf("Os dois numeros sao iguais.\n");
    }
}

void verifica_maioridade() {
    int idade;
    printf("\nDigite a idade: ");
    scanf("%d", &idade);
    if (idade >= 18) {
        printf("Maior de idade. Entrada permitida.\n");
    } else {
        printf("Menor de idade. Entrada negada.\n");
    }
}