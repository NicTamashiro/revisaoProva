#include <stdio.h>

int menor_dc(int vet[], int inicio, int fim){
    if(inicio == fim)
        return vet[inicio];

    int meio = (inicio + fim) / 2;

    int menor_esquerda = menor_dc(vet, inicio, meio);
    int menor_direita = menor_dc(vet, meio+1, fim);

    if(menor_esquerda < menor_direita){
        return menor_esquerda;
    } else {
        return menor_direita;
    }
}

int main(){

    int n;
    scanf("%d", &n);

    int vet[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }

    int resultado = menor_dc(vet, 0, n - 1);

    printf("Menor: %d\n", resultado);

    return 0;
}