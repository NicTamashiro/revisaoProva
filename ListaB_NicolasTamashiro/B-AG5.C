#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int h1, m1, h2, m2;
    int inicio;
    int fim;
} reserva;

int compara(const void *a, const void *b) {
    reserva *r1 = (reserva *)a;
    reserva *r2 = (reserva *)b;
    return r1->fim - r2->fim;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    reserva *r = malloc(n * sizeof(reserva));
    for (int i = 0; i < n; i++) {
        scanf("%d:%d %d:%d", &r[i].h1, &r[i].m1, &r[i].h2, &r[i].m2);
        r[i].inicio = r[i].h1 * 60 + r[i].m1;
        r[i].fim = r[i].h2 * 60 + r[i].m2;
    }
    
    qsort(r, n, sizeof(reserva), compara);
    
    int cont = 0;
    int *escolhidos = malloc(n * sizeof(int));
    int ultimo_fim = -1;
    
    for (int i = 0; i < n; i++) {
        if (r[i].inicio >= ultimo_fim) {
            escolhidos[cont++] = i;
            ultimo_fim = r[i].fim;
        }
    }
    
    printf("%d\n", cont);
    for (int i = 0; i < cont; i++) {
        int idx = escolhidos[i];
        printf("%d:%02d %d:%02d\n", r[idx].h1, r[idx].m1, r[idx].h2, r[idx].m2);
    }
    
    free(r);
    free(escolhidos);
    return 0;
}
