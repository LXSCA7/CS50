#include <stdio.h>

int main(void) {
    int pNumero;
    int sNumero;
    int resultado;
    printf("------------------------\n");
    printf(" CALCULADORA DE PITBULL \n");
    printf("------------------------\n");
    printf(" Joga um número ai papai: ");
    scanf("%i", &pNumero);
    printf(" Agora joga mais um: ");
    scanf("%i", &sNumero);
    printf("------------------------\n");
    resultado = pNumero + sNumero;
    printf(" %i + %i é igual a: %i\n",pNumero,sNumero,resultado);
    printf("------------------------\n");
    return 0;
}
