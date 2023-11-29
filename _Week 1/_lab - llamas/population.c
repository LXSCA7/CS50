#include <stdio.h>

int main(void)
{
    int totalLlamas;
    int endLlamas;
    int years = 0;
    // recebe as informacoes
    do
    {
        printf("Start size: ");
        scanf("%i", &totalLlamas);
    }
    while (totalLlamas < 9);
    do
    {
        printf("End size: ");
        scanf("%i", &endLlamas);
    }
    while (endLlamas < totalLlamas);
    for (; totalLlamas < endLlamas; years++)
    {
        int bornLlamas = totalLlamas / 3; // calcula as lhamas nascidas por ano
        int deadLlamas = totalLlamas / 4; // calcula as lhamas que morrem por ano
        totalLlamas = totalLlamas + bornLlamas - deadLlamas;
    }
    printf("Years: %i\n", years); // escreve a quantidade de anos necessarios
}
