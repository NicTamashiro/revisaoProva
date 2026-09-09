#include <stdio.h>

void linha(){
    for(int i = 0; i < 80; i++){
        printf("-");
    }
    printf("\n");
}

int main(){

    linha();
    printf("\tUm programa em C\n");
    linha();

    return 0;
}