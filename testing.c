#include <stdio.h>

    int main(void) {
        int nota;
        int escolhaCurso;
        printf("Insira sua nota do ENEM: ");
        scanf("%i",&nota);
        if (nota >= 700) {
            printf("Voce foi aprovado!\n");
        }
        else {
            printf("Voce nao foi aprovado\n");
        }
        do {

            printf("Qual curso voce deseja?\n");
            printf("[1] CIENCIA DA COMPUTACAO\n");
            printf("[2] MEDICINA\n");
            printf("[3] MATEMATICA\n");
            printf("[4] HISTORIA\n");
            printf("[5] VETERINARIA\n");
            scanf("%i",&escolhaCurso);
        } while (escolhaCurso < 1 || escolhaCurso > 5);
        switch (escolhaCurso) {
            case 1:
                if (nota > 690) {
                    printf("PARABÉNS, VOCÊ FOI APROVADO!/n");
                }
                else {
                    printf("VOCÊ NAO FOI APROVADO!/n");
                }
            break;
            case 2:
                if (nota > 780) {
                    printf("PARABÉNS, VOCE FOI APROVADO!\n");
                }
                else {
                    printf("VOCE NAO FOI APROVADO!\n");
                }
            break;
            case 3:
                if (nota > 650) {
                    printf("PARABENS, VOCE FOI APROVADO!\n");
                }
                else {
                    printf("VOCE NAO FOI APROVADO!\n");
                }
            break;
            case 4:
                if (nota > 600) {
                    printf("PARABENS, VOCE FOI APROVADO!\n");
                }
                else {
                    printf("VOCE NAO FOI APROVADO!\n");
                }
            break;
            case 5:
                if (nota > 720) {
                    printf("PARABENS, VOCE FOI APROVADO!\n");
                }
                else {
                    printf("VOCE NAO FOI APROVADO!\n");
                }
            break;
        }
    }
