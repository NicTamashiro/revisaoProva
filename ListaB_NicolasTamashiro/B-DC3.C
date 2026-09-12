#include <stdio.h>

int busca_bin_conta(int vet[], int n, int x, int *divisoes) {
    int inicio = 0;
    int fim = n - 1;
    *divisoes = 0;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (vet[meio] == x) {
            return meio;
        } else if (vet[meio] > x) {
            fim = meio - 1;
            (*divisoes)++;
        } else {
            inicio = meio + 1;
            (*divisoes)++;
        }
    }
    return -1;
}

int main() {
    int n, x;
    int divisoes;
    scanf("%d", &n);

    int vet[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }

    scanf("%d", &x);

    int indice = busca_bin_conta(vet, n, x, &divisoes);
    printf("indice %d, %d divisoes\n", indice, divisoes);

    return 0;
}