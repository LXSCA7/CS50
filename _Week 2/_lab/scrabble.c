#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // declara funcao e variaveis
    int pontos(char resposta[]);
    char primeiraResposta[90], segundaResposta[90];
    int pontuacaoPlayer1, pontuacaoPlayer2;

    // player insere sua palavra
    printf("Player 1: ");
    scanf("%s", primeiraResposta);
    printf("Player 2: ");
    scanf("%s", segundaResposta);

    // chama as funcoes
    int scorePlayer1 = pontos(primeiraResposta);
    int scorePlayer2 = pontos(segundaResposta);

    // print pontos
    printf("%i\n", scorePlayer1);
    printf("%i\n", scorePlayer2);

    // diz quem venceu
    if (scorePlayer1 > scorePlayer2)
    {
        printf("Player 1 wins!\n");
    }
    else if (scorePlayer1 == scorePlayer2)
    {
        printf("Tie!\n");
    }
    else
    {
        printf("Player 2 wins!\n");
    }
}

int pontos(char resposta[])
{
    int pontuacao = 0;
    int quantLetras = strlen(resposta);
    for (int cont = 0; cont < quantLetras; cont++)
    {
        if (resposta[cont] == toupper(resposta[cont]))
        {
            resposta[cont] = tolower(resposta[cont]);
        }
        if ((resposta[cont] == 'a') || (resposta[cont] == 'e') || (resposta[cont] == 'i') || (resposta[cont] == 'l') ||
            (resposta[cont] == 'n') || (resposta[cont] == 'o') || (resposta[cont] == 'r') || (resposta[cont] == 's') ||
            (resposta[cont] == 't') || (resposta[cont] == 'u'))
        {
            pontuacao += 1;
        }
        else if ((resposta[cont] == 'd') || (resposta[cont] == 'g'))
        {
            pontuacao += 2;
        }
        else if ((resposta[cont] == 'b') || (resposta[cont] == 'c') || (resposta[cont] == 'm') || (resposta[cont] == 'p'))
        {
            pontuacao += 3;
        }
        else if ((resposta[cont] == 'f') || (resposta[cont] == 'h') || (resposta[cont] == 'v') || (resposta[cont] == 'w') ||
                 (resposta[cont] == 'y'))
        {
            pontuacao += 4;
        }
        else if (resposta[cont] == 'k')
        {
            pontuacao += 5;
        }
        else if ((resposta[cont] == 'j') || (resposta[cont] == 'x'))
        {
            pontuacao += 8;
        }
        else if ((resposta[cont] == 'q') || (resposta[cont] == 'z'))
        {
            pontuacao += 10;
        }
        else
        {
            pontuacao += 0;
        }
    }
    return pontuacao;
}
