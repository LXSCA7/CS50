#include <cs50.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{

    // verficiar se tem 2 argc
    if (argc != 2)
    {
        printf("Use: ./caesar key\n");
        return 1;
    }

    // verficar se o comando é VALIDO
    int quantNum = strlen(argv[1]);

    for (int cont = 0; cont < quantNum; cont++)
    {
        if (!isdigit(argv[1][cont]))
        {
            printf("Use: ./caesar key\n");
            return 1;
        }
    }

    // transformar string chave em int
    int chave = atoi(argv[1]);

    // pega o texto do usuario
    string mensagem = get_string("Insira sua mensagem: ");

    // comeca a escrever o texto do usuario

    int quantLetras = strlen(mensagem);

    printf("ciphertext: ");
    for (int cont = 0; cont < quantLetras; cont++)
    {

        if (chave > 25)
        { // verificar se a chave ''e maior que 25
            do
            {
                chave -= 26;
            }
            while (chave > 25);
        }

        // printa a palavra com a criptografia
        if (isblank(mensagem[cont]))
        {
            printf(" ");
        }
        if (islower(mensagem[cont]) && (mensagem[cont] + chave > 122))
        {
            printf("%c", mensagem[cont] = (96 + (chave - (122 - (int) mensagem[cont]))));
        }
        else if (islower(mensagem[cont]))
        {
            printf("%c", mensagem[cont] + chave);
        }
        else if (isupper(mensagem[cont]) && (mensagem[cont] + chave > 90))
        {
            printf("%c", mensagem[cont] = (64 + (chave - (90 - (int) mensagem[cont]))));
        }
        else if (isupper(mensagem[cont]))
        {
            printf("%c", mensagem[cont] + chave);
        }
        else if (ispunct(mensagem[cont]))
        {
            printf("%c", mensagem[cont]);
        }
    }

    printf("\n");
    return 0;
}
