#include <stdio.h>

int busca_sequencial(int vet[], int n, int x){  
    for(int i = 0; i < n; i++){
        if(vet[i] == x) return i;
    }
    return -1;
}

int main(){

    int n, x;

    scanf("%d", &n);

    int vet[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }

    scanf("%d", &x);

    int resultado = busca_sequencial(vet, n, x);

    printf("%d\n", resultado);

    return 0;
}