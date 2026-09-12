#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool string_match(const char *s1, const char *s2){
    int n = strlen(s1);
    int m = strlen(s2);

    if(m > n) return false;

    for(int i = 0; i <= n - m; i++){
        int j;
        for(j = 0; j < m; j++){
            if(s1[i + j] != s2[j]) break;
        }
        if(j == m) return true;
    }

    return false;
}

int main(){

    char s1[101];
    char s2[101];
    
    scanf("%s", s1);
    scanf("%s", s2);

    if(string_match(s1, s2)){
        printf("Encontrada\n");
    } else {
        printf("Nao encontrada\n");
    }

    return 0;
}