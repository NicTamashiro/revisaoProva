#include <stdio.h>

void printArr(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void selecao_direta(int a[], int n){
   for(int i = 0; i < n - 1; i++){
    int min_idx = i;

    for(int j = i + 1; j < n; j++){
        if(a[j] < a[min_idx]){
            min_idx = j;
        }
    }

    int temp = a[i];
    a[i] = a[min_idx];
    a[min_idx] = temp;
    printArr(a, n);
   } 
}


int main(){

    int n;
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    selecao_direta(a, n);

    return 0;
}