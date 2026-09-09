#include <stdio.h>

int compr(const char *str){
    if(*str == '\0') return 0;

    return 1 + compr(str + 1);
}

int main(){

    char str[101];

    scanf("%s", str);

    printf("Comprimento: %d\n", compr(str));
    
    return 0;
}