#include <stdio.h>

void analisa(int vet[], int n, int *pares, int *impares, int *soma){
    for(int i = 0; i < n; i++){
        (*soma)+=vet[i];
        if(vet[i] % 2 == 0){
            (*pares)++;
        } else {
            (*impares)++;
        }
    }
    printf("Pares: %d\n", *pares);
    printf("Pares: %d\n", *impares);
    printf("Soma: %d\n", *soma);
}

int main(){

    int n, pares = 0, impares = 0, soma = 0;
    scanf("%d", &n);

    int vet[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }
    
    analisa(vet, n, &pares, &impares, &soma);

    return 0;
}