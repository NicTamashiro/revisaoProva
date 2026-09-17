#include <stdio.h>
#include <string.h>

void cabecalho(const char *titulo){
    int tamanho = strlen(titulo);
    for(int i = 0; i < tamanho+4; i++){
        printf("=");
    }
    printf("\n");

    printf("%s\n", titulo);

    for(int i = 0; i < tamanho+4; i++){
        printf("=");
    }
    printf("\n");

}

int main(){

    char palavra[51];

    scanf("%s", palavra);

    cabecalho(palavra);

    return 0;
}