#include <stdio.h>

void selecao_direta(int n, int a[]) {
    for (int i = 0; i < n - 1; i++) {
        int k = i;                      

        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[k]) {
                k = j;                
            }
        }

        int aux = a[i];
        a[i] = a[k];
        a[k] = aux;

        printf("Passo %d: k = %d ->", i, k);
        for (int i = 0; i < n; i++) {
            printf(" %d", a[i]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    int a[100];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    selecao_direta(n, a);

    return 0;
}