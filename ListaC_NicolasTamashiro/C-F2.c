#include <stdio.h>

int absoluto(int x){
    if(x >= 0) return x;
    return x*(-1);
}

int main(){

    int n;
    scanf("%d", &n);

    printf("Avsoluto: %d\n", absoluto(n));

    return 0;
}