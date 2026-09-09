#include <stdio.h>

void troco(int valor){
    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    int qtd;

    for(int i = 0; i < 7; i++){
        qtd = valor / notas[i];

        if(qtd > 0){
            printf("%d nota(s) de R$%d\n", qtd, notas[i]);
            valor %= notas[i];
            if(valor == 0) break;
        }
    }
}

int main(){

    int valor;
    scanf("%d", &valor);

    troco(valor);

    return 0;
}