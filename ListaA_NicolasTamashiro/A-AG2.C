#include <stdio.h>

int max_arquivos(int capacidade, int tamanhos[], int n){
    int espacoUsado = 0;
    int contador = 0;

    for(int i = 0; i < n; i++){
        if(espacoUsado + tamanhos[i] <= capacidade){
            espacoUsado += tamanhos[i];
            contador++;
        }
    }
    return contador;
}

int main(){

    int capacidade, n;
    scanf("%d %d", &capacidade, &n);

    int tamanhos[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &tamanhos[i]);
    }

    int resultado = max_arquivos(capacidade, tamanhos, n);

    printf("Arquivos: %d\n", resultado);

    return 0;
}