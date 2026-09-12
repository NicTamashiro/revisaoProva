#include <stdio.h>

void fib_sequencia(int n){
    int tabela[n+1];

    tabela[0] = 0;
    if(n > 0) tabela[1] = 1;

    for(int i = 2; i <= n; i++){
        tabela[i] = tabela[i - 1] + tabela[i - 2];
    }

    for(int i = 0; i <= n; i++){
        printf("%d ", tabela[i]);
    }
}

int main(){

    int n;
    scanf("%d", &n);

    fib_sequencia(n);

    return 0;
}