#include <stdio.h>

long long fat(int n){
    if(n == 0) return 1;
    
    return n * fat(n-1);
}

int main(){

    int n;
    scanf("%d", &n);

    printf("Fatorial: %lld\n", fat(n));

    return 0;
}