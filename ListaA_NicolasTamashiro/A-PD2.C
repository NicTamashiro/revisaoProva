#include <stdio.h>

long long tabela[1000];

long long fib_topdown(int n){
    if (n == 1 || n == 0)
    return n;

    tabela[n] = fib_topdown(n-1) + fib_topdown(n-2);
    return tabela[n];
}

int main(){

    int n;
    scanf("%d", &n);

    printf("Fib(%d) = %lld\n", n, fib_topdown(n));

    return 0;
}