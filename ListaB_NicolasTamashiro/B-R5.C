#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool palindromo(const char *s, int i, int j){
    if(i >= j) return true;
    
    if(s[i] != s[j]) {
        return false;
    } else {
        return palindromo(s, i+1, j-1);
    }

}

int main(){

    char palavra[101];

    scanf("%s", palavra);

    if(palindromo(palavra, 0, strlen(palavra)-1)){
        printf("Palindromo\n");
    } else {
        printf("Nao palindromo\n");
    }

    return 0;
}