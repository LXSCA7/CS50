#include <ctype.h>
#include <stdio.h>

int main(void)
{

    int totalSemanas;
    float horasSemanais;
    float totalHoras = 0;
    float mediaHoras = 0;
    char escolha;
    printf("Quantidade de semanas no CS50: ");
    scanf("%i", &totalSemanas);

    for (int cont = 0; cont < totalSemanas; cont++)
    {
        printf("Horas com CS50 na semana: ");
        scanf("%f", &horasSemanais);
        totalHoras = totalHoras + horasSemanais;
    }

    getchar();

    printf("use T para TOTAL de horas e A para MEDIA de horas. ");
    scanf("%c", &escolha);

    if (escolha == 'A')
    {
        mediaHoras = totalHoras / (float) totalSemanas;
        printf("Media de horas: %.2f", mediaHoras);
    }
    else if (escolha == 'T')
    {
        printf("%.2f\n", (float) totalHoras);
    }
    else
    {
        printf("Entrada invalida\n");
    }
}
