#include <stdio.h>

void troco_moedas(int centavos){
    int moedas[] = {50,25,10,5,1};
    int qtd = 5;

    for(int i = 0; i < 5; i++){
        int valor = moedas[i];
        int qtd = centavos / valor;

        if(qtd > 0){
            printf("%d moeda(s) de %dc\n", qtd, valor);
            centavos %= valor;
        }
    }
}

int main(){
    int centavos;
    scanf("%d", &centavos);

    troco_moedas(centavos);

    return 0;
}