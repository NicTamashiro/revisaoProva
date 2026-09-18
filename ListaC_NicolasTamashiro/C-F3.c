#include <stdio.h>

void incrementa(int x){
    x++;
}

int main(){

    int n = 5;

    incrementa(n);

    printf("%d\n", n);

    return 0;
}

/*

Não foi impresso "6", porque foi passado por valor, foi apenas um cópia,
não passamos por referência. Ele representa um outro espaço na memória, uma outra variável.

*/