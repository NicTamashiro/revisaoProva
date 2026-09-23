/*
Multiplicação de Cadeia de Matrizes

A1: 10x30, A2: 30x5, A3: 5x60
p = {10, 30, 5, 60}

Cálculos das células (fora da diagonal principal):
M[1][1] = 0, M[2][2] = 0, M[3][3] = 0

Tamanho 2 (distância 1):
M[1][2] = M[1][1] + M[2][2] + p[0]*p[1]*p[2] = 0 + 0 + 10*30*5 = 1500
M[2][3] = M[2][2] + M[3][3] + p[1]*p[2]*p[3] = 0 + 0 + 30*5*60 = 9000

Tamanho 3 (distância 2):
M[1][3]:
  k=1 -> M[1][1] + M[2][3] + p[0]*p[1]*p[3] = 0 + 9000 + 10*30*60 = 27000
  k=2 -> M[1][2] + M[3][3] + p[0]*p[2]*p[3] = 1500 + 0 + 10*5*60 = 4500
O menor é para k=2. Portanto, M[1][3] = 4500.

Custo minimo: 4500
Parentização ótima: (A1 x A2) x A3
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int *p = malloc((n + 1) * sizeof(int));
    for (int i = 0; i <= n; i++) {
        scanf("%d", &p[i]);
    }
    
    int **M = malloc((n + 1) * sizeof(int *));
    for (int i = 0; i <= n; i++) {
        M[i] = calloc(n + 1, sizeof(int));
    }
    
    for (int l = 2; l <= n; l++) {
        for (int i = 1; i <= n - l + 1; i++) {
            int j = i + l - 1;
            M[i][j] = INT_MAX;
            for (int k = i; k <= j - 1; k++) {
                int q = M[i][k] + M[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (q < M[i][j]) {
                    M[i][j] = q;
                }
            }
        }
    }
    
    printf("Custo minimo: %d\n", M[1][n]);
    
    for (int i = 0; i <= n; i++) free(M[i]);
    free(M);
    free(p);
    
    return 0;
}
