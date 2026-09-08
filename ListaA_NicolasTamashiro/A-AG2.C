#include <stdio.h>

int soma(int a, int b){
    return a + b;
}

int main(){

    int a, b;
    scanf("%d %d", &a, &b);

    int resultado = soma(a, b);
    printf("Soma: %d\n", resultado);

    return 0;
}