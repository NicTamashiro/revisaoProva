#include <stdio.h>

long long contagem = 0;

long long fib(int n){
    contagem++;
    if(n == 0 || n == 1) return n;

    return fib(n-1) + fib(n-2);
}

int main(){

    int n;
    scanf("%d", &n);

    printf("Fib(%d) = %d\n", n, fib(n));

    printf("Chamadas: %d\n", contagem);

    return 0;
}