#include <stdio.h>

void quadrado(int x){
    printf("Quadrado: %d\n", x*x);
    printf("Original: %d\n", x);
}

int main(){

    int x;
    scanf("%d", &x);

    quadrado(x);

    return 0;
}