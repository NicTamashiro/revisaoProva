#include <stdio.h>

float media2(float a, float b){
    return (a+b)/2;
}

int main(){

    float a,b;
    scanf("%f %f", &a, &b);

    float resultado = media2(a,b);

    printf("Media: %.2f\n", resultado);

    return 0;
}