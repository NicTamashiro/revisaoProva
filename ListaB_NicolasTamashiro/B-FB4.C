#include <stdio.h>
#include <string.h>

int conta_substring(const char *s1, const char *s2) {
    int cont = 0;
    int len2 = strlen(s2);
    if (len2 == 0) return 0;
    
    const char *p = s1;
    while ((p = strstr(p, s2)) != NULL) {
        cont++;
        p += len2;
    }
    return cont;
}

int main() {
    char s1[1000], s2[1000];
    if (scanf("%s %s", s1, s2) == 2) {
        printf("Ocorrencias: %d\n", conta_substring(s1, s2));
    }
    return 0;
}
