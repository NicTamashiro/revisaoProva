#include <stdio.h>
#include <stdlib.h>

void intercala(int *a, int e, int m, int d) {
    int *temp = malloc((d - e + 1) * sizeof(int));
    int i = e, j = m + 1, k = 0;
    
    while (i <= m && j <= d) {
        if (a[i] <= a[j]) temp[k++] = a[i++];
        else temp[k++] = a[j++];
    }
    
    while (i <= m) temp[k++] = a[i++];
    while (j <= d) temp[k++] = a[j++];
    
    for (i = e, k = 0; i <= d; i++, k++) {
        a[i] = temp[k];
    }
    
    free(temp);
}

void mergesort(int *a, int e, int d) {
    if (e < d) {
        int m = e + (d - e) / 2;
        mergesort(a, e, m);
        mergesort(a, m + 1, d);
        intercala(a, e, m, d);
    }
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int *v = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    
    mergesort(v, 0, n - 1);
    
    for (int i = 0; i < n; i++) {
        printf("%d%s", v[i], i == n - 1 ? "" : " ");
    }
    printf("\n");
    
    free(v);
    return 0;
}
