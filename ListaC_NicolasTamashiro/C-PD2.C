#include <stdio.h>

long long dc[100];

void inicializar_dc() {
    for (int i = 0; i < 100; i++) {
        dc[i] = -1;
    }
}

long long fib_topdown(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    if (dc[n] != -1) {
        return dc[n];
    }

    dc[n] = fib_topdown(n - 1) + fib_topdown(n - 2);

    return dc[n];
}

int main() {
    int n;
    
    inicializar_dc();

    scanf("%d", &n);
    
    printf("Fib(%d) = %lld\n", n, fib_topdown(n));
    
    return 0;
}