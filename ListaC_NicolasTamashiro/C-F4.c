#include <stdio.h>

void divisao(int a, int b, int *q, int *r){
    *q = 0;
    *r = a;

    while(*r >= b){
        *r = *r - b;
        *q = *q + 1;
    }
}

int main(){

    int a, b, q, r;

    scanf("%d %d", &a, &b);

    divisao(a, b, &q, &r);

    printf("Quociente: %d\n", q);
    printf("Resto: %d\n", r);

    return 0;
}