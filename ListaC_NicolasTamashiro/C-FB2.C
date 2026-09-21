#include <stdio.h>

void bubblesort(int n, int a[]) {
    for (int i = 0; i < n - 1; i++) {            
        for (int j = 0; j < n - 1 - i; j++) {    
            if (a[j] > a[j + 1]) {
                int aux = a[j];
                a[j] = a[j + 1];
                a[j + 1] = aux;
            }
        }

        for (int i = 0; i < n; i++) {
            if (i > 0) printf(" ");
            printf("%d", a[i]);
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

    bubblesort(n, a);

    return 0;
}