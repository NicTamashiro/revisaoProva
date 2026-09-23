#include <stdio.h>
#include <string.h>

int string_match_pos(const char *s1, const char *s2) {
    int n = strlen(s1);
    int m = strlen(s2);
    
    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && s1[i + j] == s2[j]) {
            j++;
        }
        if (j == m) {
            return i;
        }
    }
    return -1;
}

int main() {
    char s1[1024], s2[1024];
    if (scanf("%s %s", s1, s2) == 2) {
        printf("%d\n", string_match_pos(s1, s2));
    }
    return 0;
}
