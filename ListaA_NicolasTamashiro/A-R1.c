#include <stdio.h>

long long fat(int n){
    if(n == 0) return 1;

    return n * fat(n-1);
}

int main(){

    int x;
    scanf("%d", &x);

    printf("Fatorial: %lld\n", fat(x));

    return 0;
}