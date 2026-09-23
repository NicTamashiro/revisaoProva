#include <stdio.h>
#include <stdlib.h>

void imprime_vetor(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", v[i]);
        if (i < n - 1) printf(" ");
    }
    printf("\n");
}

void intercala(int v[], int e, int m, int d, int n) {
    int *aux = malloc((d - e + 1) * sizeof(int));
    int i = e, j = m + 1, k = 0;
    
    while (i <= m && j <= d) {
        if (v[i] <= v[j]) aux[k++] = v[i++];
        else aux[k++] = v[j++];
    }
    while (i <= m) aux[k++] = v[i++];
    while (j <= d) aux[k++] = v[j++];
    
    for (i = e, k = 0; i <= d; i++, k++) {
        v[i] = aux[k];
    }
    
    imprime_vetor(v, n);
    free(aux);
}

void mergesort(int v[], int e, int d, int n) {
    if (e < d) {
        int m = (e + d) / 2;
        mergesort(v, e, m, n);
        mergesort(v, m + 1, d, n);
        intercala(v, e, m, d, n);
    }
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int *v = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    
    mergesort(v, 0, n - 1, n);
    
    free(v);
    return 0;
}
