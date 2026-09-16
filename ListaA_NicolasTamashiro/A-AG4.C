#include <stdio.h>

typedef struct {
    int inicio;
    int fim;
} intervalo;

int vemAntes(intervalo a, intervalo b) {
    if (a.fim != b.fim) {
        return a.fim < b.fim;
    }
    return a.inicio < b.inicio;
}

void ordenar(int n, intervalo evento[]) {
    for (int i = 0; i < n - 1; i++) {
        int menor = i;

        for (int j = i + 1; j < n; j++) {
            if (vemAntes(evento[j], evento[menor])) {
                menor = j;
            }
        }

        if (menor != i) {
            intervalo temp = evento[i];
            evento[i] = evento[menor];
            evento[menor] = temp;
        }
    }
}

void escalonamento(int n, intervalo evento[]) {
    if (n == 0) return;

    ordenar(n, evento);

    printf("(%d,%d)\n", evento[0].inicio, evento[0].fim);
    int ultimoFim = evento[0].fim;

    for (int i = 1; i < n; i++) {
        if (evento[i].inicio > ultimoFim) {
            printf("(%d,%d)\n", evento[i].inicio, evento[i].fim);
            ultimoFim = evento[i].fim;
        }
    }
}

int main(void) {
    int n;
    scanf("%d", &n);

    intervalo evento[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &evento[i].inicio, &evento[i].fim);
    }

    escalonamento(n, evento);

    return 0;
}