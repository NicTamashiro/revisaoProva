#include <stdio.h>

int busca_binaria_rec(int vet[], int inicio, int fim, int x){
    while(inicio <= fim){
        int meio = (inicio + fim) / 2;

        if(vet[meio] == x){
            return meio;
        } else if(vet[meio] > x){
            return busca_binaria_rec(vet, 0, meio - 1,x);
        } else {
            return busca_binaria_rec(vet, meio + 1, fim,x);
        }
    }
    return -1;
}

int main(){

    int n,x;
    scanf("%d", &n);

    int vet[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }

    scanf("%d", &x);

    int resultado = busca_binaria_rec(vet, 0, n - 1, x);

    printf("%d\n", resultado);

    return 0;
}