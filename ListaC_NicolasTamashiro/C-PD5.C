#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void print_parens(int **s, int i, int j, int outmost) {
    if (i == j) {
        printf("A%d", i);
    } else {
        if (!outmost) printf("(");
        print_parens(s, i, s[i][j], 0);
        printf(" x ");
        print_parens(s, s[i][j] + 1, j, 0);
        if (!outmost) printf(")");
    }
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int *p = malloc((n + 1) * sizeof(int));
    for (int i = 0; i <= n; i++) {
        scanf("%d", &p[i]);
    }
    
    int **m = malloc((n + 1) * sizeof(int *));
    int **s = malloc((n + 1) * sizeof(int *));
    for (int i = 0; i <= n; i++) {
        m[i] = malloc((n + 1) * sizeof(int));
        s[i] = malloc((n + 1) * sizeof(int));
        for (int j = 0; j <= n; j++) {
            m[i][j] = 0;
            s[i][j] = 0;
        }
    }
    
    for (int l = 2; l <= n; l++) {
        for (int i = 1; i <= n - l + 1; i++) {
            int j = i + l - 1;
            m[i][j] = INT_MAX;
            for (int k = i; k <= j - 1; k++) {
                int q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (q < m[i][j]) {
                    m[i][j] = q;
                    s[i][j] = k;
                }
            }
        }
    }
    
    printf("Custo minimo: %d\n", m[1][n]);
    printf("Parentizacao: ");
    print_parens(s, 1, n, 1);
    printf("\n");
    
    for (int i = 0; i <= n; i++) {
        free(m[i]);
        free(s[i]);
    }
    free(m);
    free(s);
    free(p);
    return 0;
}
