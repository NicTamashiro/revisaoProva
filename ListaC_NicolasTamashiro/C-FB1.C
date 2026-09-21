#include <stdio.h>
#include <string.h>

int busca_char(const char *s, char c){
    int tamanho = strlen(s);
    for(int i = 0; i < tamanho; i++){
        if(s[i] == c){
            return i;
        }
    }
    return -1;
}

int main(){

    char str[101];
    char ch;

    scanf("%s", str);
    scanf(" %c", &ch);

    printf("%d\n", busca_char(str, ch));

    return 0;
}