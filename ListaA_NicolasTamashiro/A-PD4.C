#include <stdio.h>

int maximo(int a, int b) {
    return (a > b) ? a : b;
}

int main(void) {
    int c, n;
    scanf("%d", &c);
    scanf("%d", &n);

    int p[n + 1]; 
    int v[n + 1]; 

    for (int i = 1; i <= n; i++) {
        scanf("%d", &p[i]);
    }
    for (int i = 1; i <= n; i++) {
        scanf("%d", &v[i]);
    }

    int M[n + 1][c + 1];

    for (int cap = 0; cap <= c; cap++) {
        M[0][cap] = 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int cap = 0; cap <= c; cap++) {
            if (p[i] > cap) {
                M[i][cap] = M[i - 1][cap];
            } else {
                int semPegar = M[i - 1][cap];
                int comPegar = v[i] + M[i - 1][cap - p[i]];
                M[i][cap] = maximo(semPegar, comPegar);
            }
        }
    }

    printf("Valor maximo: %d\n", M[n][c]);

    return 0;
}


/*

Complexidade: O(n * c) -- tabela de (n+1) x (c+1) celulas,
cada uma preenchida em tempo constante.

Comparando com forca bruta O(2^n): a PD e muito mais rapida,
pois evita recalcular decisoes repetidas. Mas O(n*c) eh
"pseudo-polinomial": eh rapido so se c nao for gigante,
porque depende do VALOR de c, nao do tamanho da entrada.

*/
