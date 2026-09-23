#include <stdio.h>
#include <stdlib.h>

int main() {
    int c, n;
    if (scanf("%d %d", &c, &n) != 2) return 0;
    
    int *p = malloc((n + 1) * sizeof(int));
    int *v = malloc((n + 1) * sizeof(int));
    
    for (int i = 1; i <= n; i++) scanf("%d", &p[i]);
    for (int i = 1; i <= n; i++) scanf("%d", &v[i]);

    int **M = malloc((n + 1) * sizeof(int *));
    for (int i = 0; i <= n; i++) {
        M[i] = malloc((c + 1) * sizeof(int));
        for (int j = 0; j <= c; j++) {
            M[i][j] = 0;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= c; j++) {
            if (p[i] <= j) {
                int op1 = M[i - 1][j];
                int op2 = v[i] + M[i - 1][j - p[i]];
                M[i][j] = (op1 > op2) ? op1 : op2;
            } else {
                M[i][j] = M[i - 1][j];
            }
        }
    }

    printf("Valor maximo: %d\n", M[n][c]);

    int *itens = malloc(n * sizeof(int));
    int count = 0;
    int curr_c = c;
    
    for (int i = n; i > 0; i--) {
        if (M[i][curr_c] != M[i - 1][curr_c]) {
            itens[count++] = i;
            curr_c -= p[i];
        }
    }

    printf("Itens:");
    for (int i = count - 1; i >= 0; i--) {
        printf(" %d", itens[i]);
    }
    printf("\n");

    for (int i = 0; i <= n; i++) free(M[i]);
    free(M);
    free(p);
    free(v);
    free(itens);
    return 0;
}
