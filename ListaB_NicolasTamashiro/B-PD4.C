/*
Tabela da Mochila Booleana (Bottom-up)
p = {1, 3, 4, 5}, v = {1, 4, 5, 7}, c = 7

     c=0 c=1 c=2 c=3 c=4 c=5 c=6 c=7
i=0   0   0   0   0   0   0   0   0 
i=1   0   1   1   1   1   1   1   1  (item 1: peso 1, valor 1)
i=2   0   1   1   4   5   5   5   5  (item 2: peso 3, valor 4)
i=3   0   1   1   4   5   6   6   9  (item 3: peso 4, valor 5)
i=4   0   1   1   4   5   7   8   9  (item 4: peso 5, valor 7)

Valor ótimo: 9 (M[4][7])
Itens escolhidos: 2 e 3 (pesos 3 e 4, valores 4 e 5)
*/

#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int c, n;
    if (scanf("%d", &c) != 1) return 0;
    if (scanf("%d", &n) != 1) return 0;
    
    int *p = malloc((n + 1) * sizeof(int));
    int *v = malloc((n + 1) * sizeof(int));
    
    for (int i = 1; i <= n; i++) scanf("%d", &p[i]);
    for (int i = 1; i <= n; i++) scanf("%d", &v[i]);
    
    int **M = malloc((n + 1) * sizeof(int *));
    for (int i = 0; i <= n; i++) {
        M[i] = calloc(c + 1, sizeof(int));
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= c; j++) {
            if (p[i] > j) {
                M[i][j] = M[i - 1][j];
            } else {
                M[i][j] = max(M[i - 1][j], v[i] + M[i - 1][j - p[i]]);
            }
        }
    }
    
    printf("Valor maximo: %d\n", M[n][c]);
    
    for (int i = 0; i <= n; i++) free(M[i]);
    free(M);
    free(p);
    free(v);
    
    return 0;
}
