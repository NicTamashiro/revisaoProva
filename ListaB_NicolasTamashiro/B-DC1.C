#include <stdio.h>

int min_dc(int vet[], int inicio, int fim){
    if(inicio == fim) return vet[inicio];

    int meio = (inicio + fim) / 2;

    int min_esquerda = min_dc(vet, inicio, meio);
    int min_direita = min_dc(vet, meio+1, fim);

    if(min_esquerda < min_direita){
        return min_esquerda;
    } else {
        return min_direita;
    }
}

int main(){

    int n;
    scanf("%d", &n);

    int vet[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }

    printf("Menor: %d\n", min_dc(vet, 0, n - 1));


    return 0;
}