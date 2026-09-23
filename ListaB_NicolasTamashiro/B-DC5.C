#include <stdio.h>
#include <stdlib.h>

void imprime_vetor(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", v[i]);
        if (i < n - 1) printf(" ");
    }
    printf("\n");
}

void quicksort(int a[], int e, int d, int n) {
    int i = e, j = d;
    int x = a[(e + d) / 2];
    
    while (i <= j) {
        while (a[i] < x) i++;
        while (x < a[j]) j--;
        if (i <= j) {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    }
    
    imprime_vetor(a, n);
    
    if (e < j) quicksort(a, e, j, n);
    if (i < d) quicksort(a, i, d, n);
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int *v = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    
    quicksort(v, 0, n - 1, n);
    
    free(v);
    return 0;
}
