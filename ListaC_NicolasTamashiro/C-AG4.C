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

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    intervalo *v = malloc(n * sizeof(intervalo));
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &v[i].inicio, &v[i].fim);
    }
    
    qsort(v, n, sizeof(intervalo), compara);
    
    int *escolhidos = malloc(n * sizeof(int));
    int num_escolhidos = 0;
    int ultimo_fim = -1;
    
    for (int i = 0; i < n; i++) {
        if (v[i].inicio >= ultimo_fim) {
            escolhidos[num_escolhidos++] = i;
            ultimo_fim = v[i].fim;
        }
    }
    
    printf("%d\n", num_escolhidos);
    for (int i = 0; i < num_escolhidos; i++) {
        printf("(%d,%d)\n", v[escolhidos[i]].inicio, v[escolhidos[i]].fim);
    }
    
    free(v);
    free(escolhidos);
    return 0;
}
