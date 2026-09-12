#include <stdio.h>
#include <stdbool.h>

bool pode_pegar(int valor, int notas[], int n){
    int restante = valor;

    for(int i = 0; i < n; i++){
        if(notas[i] <= restante){
            restante -= notas[i];
        }
    }

    return restante == 0;
}

int main(){

    int valor, n;
    scanf("%d %d", &valor, &n);

    int notas[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &notas[i]);
    }

    if(pode_pegar(valor, notas, n)){
        printf("Possivel");
    } else {
        printf("Impossivel");
    }

    return 0;
}