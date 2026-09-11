#include <stdio.h>

int maior_fb(int n, int vet[]){
    int maior = vet[0];
    for(int i = 1; i < n; i++){
        if(vet[i] > maior) maior = vet[i];
    }
    return maior;
}

int main(){ 

    int n;
    scanf("%d", &n);
    
    int vet[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }

    printf("Maior: %d\n", maior_fb(n, vet));

    return 0;
}