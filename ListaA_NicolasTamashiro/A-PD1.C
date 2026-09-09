#include <stdio.h>

long long tabela[1000];

long long fib_bottomup(int n){
    tabela[0] = 0;
    tabela[1] = 1;

    for(int i = 2; i <= n; i++){
        tabela[i] = tabela[i - 1] + tabela[i -2];
    }
    return tabela[n];
}

int main(){

    int n;
    scanf("%d", &n);

    long long resultado = fib_bottomup(n);

    printf("Fib(%d) = %lld\n", n, resultado);

    return 0;
}