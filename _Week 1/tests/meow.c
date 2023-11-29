#include <stdio.h>

int main(void) {
    int contador = 0;
    printf("Quantas vezes vai miar? ");
    scanf("%i",&contador);
    while ( 0 < contador) {
    printf("miau\n");
    contador--;
   }
}
