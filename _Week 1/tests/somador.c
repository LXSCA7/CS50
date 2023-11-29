#include <stdio.h>
#include <cs50.h>

int main(void) {
    printf("--------------\n");
    printf(" SOMADOR PICA \n");
    printf("--------------\n");
    int n1 = get_int(" Digite um número: ");
    int n2 = get_int(" Digite outro número: ");
    int n3 = n1 + n2;
    printf("--------------\n");
    if ((n1 == 77 && n2 == 33) || (n1 == 33 && n2 == 77)) {
        printf("A soma de %i e %i é: 100\n",n1,n2);
    }
    else {
    printf("A soma de %i e %i é: %i\n",n1,n2,n3);
    }
    printf("--------------\n");
}
