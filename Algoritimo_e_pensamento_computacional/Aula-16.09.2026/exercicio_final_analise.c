#include <stdio.h>

int main() { //Linhas 03 a 08 Declaração das variáveis: vetor, contadores, acumuladores e variáveis de controle.
    int vet[20];
    int i, somaMult3 = 0, somaPares = 0;
    int contNeg = 0, contPos = 0, contPares = 0;
    float mediaPares = 0.0;
    int maior, menor;

    printf("Digite 20 números inteiros:\n"); //Linhas 10 a 13 Leitura dos 20 números e armazenamento no vetor.
    for (i = 0; i < 20; i++) { //Estrutura muit ultizada em laços for.
        scanf("%d", &vet[i]);
    }

    maior = vet[0]; //Linhas 15 e 16 Inicializa o maior e o menor valor com o primeiro elemento do vetor.
    menor = vet[0];

    for (i = 0; i < 20; i++) { //Estrutura muit ultizada em laços for. Linhas 18 a 33 Percorre o vetor e processa as informações.
        if (vet[i] % 3 == 0)
            somaMult3 += vet[i]; //soma dos múltiplos de 3
        if (vet[i] % 2 == 0) { //soma e contagem dos pares até a linha 25
            somaPares += vet[i];
            contPares++;
        }
        if (vet[i] < 0) 
            contNeg++; //contagem de negativos e positivos até a linha 28
        else if (vet[i] > 0)
            contPos++;
        if (vet[i] > maior) //atualização do maior e do menor valor (linhas 29–32)
            maior = vet[i];
        if (vet[i] < menor)
            menor = vet[i];
    }

    if (contPares > 0) //Calcula a média dos pares (evita divisão por zero).
        mediaPares = (float)somaPares / contPares;

    printf("\nResultados:\n"); //Exibe os resultados calculados. (até a linha 44)
    printf("Soma dos múltiplos de 3: %d\n", somaMult3);
    printf("Média dos pares: %.2f\n", mediaPares);
    printf("Quantidade de negativos: %d\n", contNeg);
    printf("Quantidade de positivos: %d\n", contPos);
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    printf("\nElementos do vetor:\n"); //Mostra todos os elementos do vetor na tela. até a linha 50
    for (i = 0; i < 20; i++) {
        printf("%d ", vet[i]);
    }
    
    return 0;
} //fim do programa