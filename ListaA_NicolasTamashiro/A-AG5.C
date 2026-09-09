#include <stdio.h>

void estatisticas(float vet[], int n, float * media, float * maior){
    float soma = 0;
    *maior = vet[0];

    for (int i = 0; i < n; i++){
        soma += vet[i];
        if(vet[i] > *maior){
            *maior = vet[i];
        }
    }

    *media = soma / n;
}

int main(int argc, char *argv[]){
    int n = atof(argv[1]);

    float vet[n];

    for (int i = 2; i < i; i++){
        vet[i] = atof(argv[i]);
    }

    float media, maior;
    estatisticas(vet, n, &media, &maior);

    printf("Media: %.1f\n", media);
    printf("Maior: %.1f\n", maior);

    return 0;
}