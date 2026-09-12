#include <stdio.h>

int n;

void imprime(int arr[]){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void quicksort(int a[], int e, int d) {
    int i = e, j = d;
    int x = a[(e + d) / 2];
    do {
        while (a[i] < x) i++;
        while (x < a[j]) j--;
        if (i <= j) {
            int temp = a[i]; a[i] = a[j]; a[j] = temp;
            i++; j--;
        }
    } while (i <= j);

    imprime(a);

    if (e < j) quicksort(a, e, j);
    if (i < d) quicksort(a, i, d);
}

int main(){
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    quicksort(arr, 0, n-1);

    return 0;
}

/*

(a) O quicksort tem etapa de combinação?
Não. Ao contrário do mergesort, o quicksort não precisa de uma etapa final de merge. 
Isso acontece porque o trabalho pesado é feito na partição: depois que ela termina, todos os elementos à esquerda são menores (ou iguais) e todos à direita são maiores (ou iguais) ao pivô. 
Cada metade é então ordenada de forma totalmente independente, e como já estão nas posições relativas corretas dentro do vetor original, não sobra nada para combinar,
o vetor já sai pronto ao final das recursões.

(b) o que ocorre com o desempenho se o vetor já está ordenado e o pivô é sempre o elemento mediano? E
se fosse o primeiro elemento?
Pivô sempre o elemento mediano: esse é justamente o melhor caso para o quicksort. 
Em um vetor já ordenado, o elemento do meio corresponde exatamente à mediana dos valores, então cada partição divide o vetor em duas metades de tamanho aproximadamente igual.

Pivô sempre o primeiro elemento: em um vetor já ordenado, o primeiro elemento é sempre o menor de cada subintervalo. 
Isso faz com que cada partição gere um lado vazio (ou com só o próprio pivô) e o outro lado com todos os n-1 elementos restantes.


*/