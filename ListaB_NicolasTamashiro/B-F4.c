#include <stdio.h>
#include <math.h>

void converte(float * angulo){
    printf("Graus: %.2f\n", (*angulo) * 180 / M_PI);
}

int main(){

    float radianos;
    scanf("%f", &radianos);

    converte(&radianos);

    return 0;
}