#include <cs50.h>
#include <stdio.h>

int main (void) {
    printf("--------------------------------------\n");
    printf("        ESCREVE     NOME           |\n");
    printf("--------------------------------------\n");
    string seuNome = get_string("Insira seu nome: ");
    printf("Seja bem vindo, %s\n", seuNome);
    printf("--------------------------------------\n");
}
