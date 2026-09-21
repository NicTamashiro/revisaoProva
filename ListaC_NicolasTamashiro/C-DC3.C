#include <stdio.h>

int menor_dc(int vet[], int inicio, int fim){
    if(inicio == fim) return vet[inicio];

    int meio = (inicio + fim) / 2;

    int esquerda = menor_dc(vet, inicio, meio);
    int direita = menor_dc(vet, meio+1, fim);

    if(esquerda < direita) return esquerda;
    return direita;
}

int main(){

    int n;
    scanf("%d", &n);

    int vet[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }

    printf("Menor: %d\n", menor_dc(vet,0, n-1));

    return 0;
}