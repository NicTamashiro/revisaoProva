#include <stdio.h>

int maior_dc(int vet[], int inicio, int fim){

    if(inicio == fim) return vet[inicio];

    int meio = (fim + inicio) / 2;

    int esquerda = maior_dc(vet, inicio, meio);
    int direita = maior_dc(vet, meio+1, fim);

    if(direita > esquerda) return direita;
    return esquerda;
}

int main(){

    int n;
    scanf("%d", &n);

    int vet[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }

    printf("Maior: %d\n", maior_dc(vet, 0, n-1));

    return 0;
}