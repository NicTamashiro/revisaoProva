#include <stdio.h>
#include <stdlib.h>

int trocas = 0;
int particoes = 0;

void quicksort(int *a, int e, int d) {
    if (e < d) {
        particoes++;
        int pivo = a[(e + d) / 2];
        int i = e;
        int j = d;
        
        while (i <= j) {
            while (a[i] < pivo) i++;
            while (a[j] > pivo) j--;
            if (i <= j) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                trocas++;
                i++;
                j--;
            }
        }
        
        quicksort(a, e, j);
        quicksort(a, i, d);
    }
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int *v = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    
    quicksort(v, 0, n - 1);
    
    for (int i = 0; i < n; i++) {
        printf("%d%s", v[i], i == n - 1 ? "" : " ");
    }
    printf("\n");
    printf("Trocas: %d\n", trocas);
    printf("Particoes: %d\n", particoes);
    
    free(v);
    return 0;
}
