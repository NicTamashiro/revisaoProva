#include <stdio.h>

void dobro(int x){
    printf("Dobro: %d\n", x*2);
}

int main(){

    int n;
    scanf("%d", &n);

    dobro(n);

    printf("Numero informado: %d\n", n);

    return 0;
}