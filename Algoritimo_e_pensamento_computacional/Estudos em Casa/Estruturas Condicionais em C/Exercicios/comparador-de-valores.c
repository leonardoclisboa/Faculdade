#include <stdio.h>

int main(){
    int n1;
    int n2;

    printf("Digite um número ");
    scanf("%d", &n1);

    printf("Digite outro número ");
    scanf("%d", &n2);

    if( n1 > n2){
        printf("%d é maior que %d", n1, n2);
    } else {
        printf("%d é maior que %d", n2, n1);
    }

    return 0;
}