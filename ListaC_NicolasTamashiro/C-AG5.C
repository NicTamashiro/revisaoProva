#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int inicio;
    int fim;
} reserva;

int compara(const void *a, const void *b) {
    reserva *r1 = (reserva *)a;
    reserva *r2 = (reserva *)b;
    if (r1->fim != r2->fim)
        return r1->fim - r2->fim;
    return r1->inicio - r2->inicio;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    reserva *v = malloc(n * sizeof(reserva));
    for (int i = 0; i < n; i++) {
        int h1, m1, h2, m2;
        scanf("%d:%d %d:%d", &h1, &m1, &h2, &m2);
        v[i].inicio = h1 * 60 + m1;
        v[i].fim = h2 * 60 + m2;
    }
    
    qsort(v, n, sizeof(reserva), compara);
    
    int atendidos = 0;
    int ultimo_fim = -1;
    
    for (int i = 0; i < n; i++) {
        if (v[i].inicio >= ultimo_fim) {
            atendidos++;
            ultimo_fim = v[i].fim;
        }
    }
    
    printf("%d\n", atendidos);
    
    free(v);
    return 0;
}
