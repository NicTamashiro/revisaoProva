#include <stdio.h>

int somavet(const int vet[], int n){
    if(n == 1) return vet[0];

    return vet[n - 1] + somavet(vet, n - 1);
}

int main(){

    int n;
    scanf("%d", &n);

    int vet[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }

    printf("Soma: %d\n", somavet(vet, n));

    return 0;
}