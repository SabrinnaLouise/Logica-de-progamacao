#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, dist;

    printf("Digite as coordenadas do primeiro ponto (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Digite as coordenadas do segundo ponto (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("A distancia entre os pontos é: %.4f\n", dist);

    return 0;
}
