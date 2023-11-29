#include <stdio.h>

int main(void) {
    int x;
    int y;
    printf("Insira X: ");
    scanf("%i",&x);
    printf("Insira Y: ");
    scanf("%i",&y);
    if (x < y) {
        printf("x e menor que y\n");
    }
    else if (x > y) {
        printf("x nao e menor que y\n");
        }
        else {
            printf("x e igual a y\n");
        }
}
