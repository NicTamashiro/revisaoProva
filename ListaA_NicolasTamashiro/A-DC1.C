#include <stdio.h>

int maior_dc(int vet[], int inicio, int fim){
    if(inicio == fim)
        return vet[inicio];

    int meio = (inicio + fim) / 2;

    int maior_esquerda = maior_dc(vet, inicio, meio);
    int maior_direita = maior_dc(vet, meio+1, fim);

    if(maior_esquerda > maior_direita){
        return maior_esquerda;
    } else {
        return maior_direita;
    }
}

int main(){

    int n;
    scanf("%d", &n);

    int vet[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }

    int resultado = maior_dc(vet, 0, n - 1);

    printf("Maior: %d\n", resultado);

    return 0;
}