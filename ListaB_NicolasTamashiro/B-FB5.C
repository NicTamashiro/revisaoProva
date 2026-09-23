#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto {
    int x;
    int y;
};

double pontos_mais_proximos(int n, struct ponto p[]) {
    double min_dist = -1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            double dx = p[i].x - p[j].x;
            double dy = p[i].y - p[j].y;
            double dist = sqrt(dx * dx + dy * dy);
            if (min_dist < 0 || dist < min_dist) {
                min_dist = dist;
            }
        }
    }
    return min_dist;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    struct ponto *p = malloc(n * sizeof(struct ponto));
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &p[i].x, &p[i].y);
    }
    
    double dist = pontos_mais_proximos(n, p);
    printf("Distancia: %.2f\n", dist);
    
    free(p);
    return 0;
}
