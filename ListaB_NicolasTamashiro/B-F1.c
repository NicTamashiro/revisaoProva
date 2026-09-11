#include <stdio.h>

void imprime_vetor(int v[], int n){
    printf("[");
    for(int i = 0; i < n; i++){
        printf("%d", v[i]);
        if(i < n - 1){
            printf(", ");
        }
    }
    printf("]\n");
}

int main(){

    int n;
    scanf("%d", &n);

    int v[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }

    imprime_vetor(v, n);

    return 0;
}