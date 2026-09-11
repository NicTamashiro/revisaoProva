#include <stdio.h>

void insercao(int n, int a[]) {
    int i, j, aux;
    for (i = 1; i < n; i++) {
        aux = a[i];
        j = i - 1;
        
        while (j >= 0 && a[j] > aux) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = aux;

        for (j = 0; j < n; j++) {
            printf("%d ", a[j]);
        }
        printf("\n");
    }
}

int main() {
    int n, i;
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    insercao(n, a);

    return 0;
}