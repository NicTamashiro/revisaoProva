#include <stdio.h>

typedef struct {
    int inicio; 
    int fim;    
} reserva;

int paraMinutos(int hora, int minuto) {
    return hora * 60 + minuto;
}

int vemAntes(reserva a, reserva b) {
    if (a.fim != b.fim) {
        return a.fim < b.fim;
    }
    return a.inicio < b.inicio;
}

void ordenar(int n, reserva res[]) {
    for (int i = 0; i < n - 1; i++) {
        int menor = i;

        for (int j = i + 1; j < n; j++) {
            if (vemAntes(res[j], res[menor])) {
                menor = j;
            }
        }

        if (menor != i) {
            reserva temp = res[i];
            res[i] = res[menor];
            res[menor] = temp;
        }
    }
}

int contarReservas(int n, reserva res[]) {
    if (n == 0) return 0;

    ordenar(n, res);

    int contador = 1;             
    int ultimoFim = res[0].fim;

    for (int i = 1; i < n; i++) {
        if (res[i].inicio >= ultimoFim) {
            contador++;
            ultimoFim = res[i].fim;
        }
    }

    return contador;
}

int main(void) {
    int n;
    scanf("%d", &n);

    reserva res[n];
    for (int i = 0; i < n; i++) {
        int h1, m1, h2, m2;
        scanf("%d:%d %d:%d", &h1, &m1, &h2, &m2);
        res[i].inicio = paraMinutos(h1, m1);
        res[i].fim = paraMinutos(h2, m2);
    }

    printf("%d\n", contarReservas(n, res));

    return 0;
}