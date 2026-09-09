#include <stdio.h>

int conta(int vet[], int n, int x){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(vet[i] == x){
            count++;
        }
    }
    return count;
}

int main(){

    int n, x;

    scanf("%d", &n);

    int vet[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }

    scanf("%d", &x);

    int count = conta(vet, n, x);

    printf("Ocorrencias: %d\n", count);

    return 0;
}