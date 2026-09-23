#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int inicio;
    int fim;
} intervalo;

int compara(const void *a, const void *b) {
    intervalo *i1 = (intervalo *)a;
    intervalo *i2 = (intervalo *)b;
    if (i1->fim != i2->fim)
        return i1->fim - i2->fim;
    return i1->inicio - i2->inicio;
}

void escalonamento_rec(intervalo evento[], int e, int d) {
    int m = e + 1;
    while (m <= d && evento[m].inicio < evento[e].fim) {
        m++;
    }
    if (m <= d) {
        printf("(%d,%d)\n", evento[m].inicio, evento[m].fim);
        escalonamento_rec(evento, m, d);
    }
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    intervalo *evento = malloc((n + 1) * sizeof(intervalo));
    evento[0].inicio = 0;
    evento[0].fim = 0;
    
    for (int i = 1; i <= n; i++) {
        scanf("%d %d", &evento[i].inicio, &evento[i].fim);
    }
    
    qsort(evento + 1, n, sizeof(intervalo), compara);
    
    escalonamento_rec(evento, 0, n);
    
    free(evento);
    return 0;
}
