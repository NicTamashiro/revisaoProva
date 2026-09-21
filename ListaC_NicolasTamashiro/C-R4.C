#include <stdio.h>
#include <stdbool.h>

bool impar(int n);

bool par(int n){
    if(n == 0) return true;
    if(n == 1) return false;

    return impar(n-1);
}

bool impar(int n){
    if(n == 1) return true;
    if(n == 0) return false;

    return par(n-1);
}

int main(){

    int n;
    scanf("%d", &n);

    if(par(n) == true){
        printf("par\n");
    } else {
        printf("impar\n");
    }

    return 0;
}