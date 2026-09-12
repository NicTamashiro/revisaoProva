#include <stdio.h>

int n;

void imprime(int arr[]){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void merge(int arr[], int inicio, int meio, int fim){
    int esquerda = inicio;
    int direita = meio + 1;
    int pos = 0;
    int temp[fim - inicio + 1];

    while(esquerda <= meio && direita <= fim){
        if(arr[esquerda] <= arr[direita]){
            temp[pos++] = arr[esquerda++];
        } else {
            temp[pos++] = arr[direita++];
        }
    }

    while(esquerda <= meio){
        temp[pos++] = arr[esquerda++];
    }

    while(direita <= fim){
        temp[pos++] = arr[direita++];
    }

    for(int i = inicio; i <= fim; i++){
        arr[i] = temp[i - inicio];
    }
}

void mergesort(int arr[], int inicio, int fim){
    if(inicio < fim){
        int meio = (inicio + fim) / 2;

        mergesort(arr, inicio, meio);
        mergesort(arr, meio+1, fim);

        merge(arr, inicio, meio, fim);
        imprime(arr);
    }
}

int main(){

    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    mergesort(arr, 0, n-1);

    return 0;
}