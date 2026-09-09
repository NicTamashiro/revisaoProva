#include <stdio.h>

int soma_nat(int n){
    if(n == 0) return 0;

    return n + soma_nat(n-1);
}

int main(){

    int x;
    
    scanf("%d", &x);

    printf("Soma: %d\n", soma_nat(x));

    return 0;
}