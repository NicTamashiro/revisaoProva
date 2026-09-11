#include <stdio.h>

/*
 * (a) PROGRAMACAO DINAMICA - duas caracteristicas:
 *
 * 1) Subestrutura otima: Fn = F(n-1) + F(n-2)
 *    -> a solucao do problema maior (Fn) e construida
 *       diretamente a partir das solucoes dos subproblemas menores.
 *
 * 2) Sobreposicao de subproblemas: ao calcular fib(4) recursivamente,
 *    os mesmos subproblemas (fib(2), fib(1), fib(0)) sao recalculados
 *    varias vezes em ramos diferentes da recursao.
 */

int fib(int n, int nivel) {
    
    for (int i = 0; i < nivel; i++) printf("  ");
    printf("fib(%d)\n", n);

    if (n <= 1) return n;
    return fib(n - 1, nivel + 1) + fib(n - 2, nivel + 1);
}

int main() {
    int resultado = fib(4, 0);
    printf("Resultado: fib(4) = %d\n", resultado);
    return 0;
}