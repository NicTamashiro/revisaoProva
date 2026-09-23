#include <stdio.h>
#include <stdlib.h>

int mochila_iter(int p[], int v[], int c, int n) {
    int max_valor = 0;
    int total_sub = 1 << n;
    
    for (int i = 0; i < total_sub; i++) {
        int peso_atual = 0;
        int valor_atual = 0;
        for (int j = 0; j < n; j++) {
            if ((i >> j) % 2 == 1) {
                peso_atual += p[j];
                valor_atual += v[j];
            }
        }
        if (peso_atual <= c && valor_atual > max_valor) {
            max_valor = valor_atual;
        }
    }
    return max_valor;
}

int main() {
    int c, n;
    if (scanf("%d %d", &c, &n) != 2) return 0;
    
    int *p = malloc(n * sizeof(int));
    int *v = malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++) scanf("%d", &p[i]);
    for (int i = 0; i < n; i++) scanf("%d", &v[i]);
    
    printf("Valor maximo: %d\n", mochila_iter(p, v, c, n));
    
    free(p);
    free(v);
    return 0;
}
