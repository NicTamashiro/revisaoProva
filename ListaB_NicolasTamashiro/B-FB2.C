#include <stdio.h>

void bubblesort(int n, int a[]){
    int temp;
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j <= n - 2 - i; j++){
            if(a[j] > a[j + 1]){
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        for(int j = 0; j < n; j++){
            printf("%d ", a[j]);
        }
        printf("\n");
    }
}

int main(){

    int n;
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    bubblesort(n, a);

    return 0;
}