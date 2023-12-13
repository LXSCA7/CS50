#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

void substitui(string letras, string codifica);

int main(int argc, string argv[]) {
    // variavel alfabeto apenas pra facilitar na visualizacao do codigo
    string alfabeto = argv[1];

    // caso nao utilize chave no comando
    if (argc != 2) {
        printf("Use: ./substitution key\n");
        return 1;
    }

    // caso use numeros no comando
    for (int testes = 0; testes < strlen(argv[1]); testes++) {
        if ((isdigit(argv[1][testes])) || (ispunct(argv[1][testes]))) {
            printf("Use: ./substitution key\n");
            return 1;
        }
    }

    // caso tenham letras repetidas
    int comprimento = strlen(argv[1]);

    for (int repetir = 0; repetir < comprimento - 1; repetir++) {
        for (int pegaRepetida = repetir + 1; pegaRepetida < comprimento; pegaRepetida++) {
            if (argv[1][pegaRepetida] == argv[1][repetir]) {
                printf("Use: ./substitution key\n");
                return 1;
            }
        }
    }
    // se o numero de caracteres < 26 ou > 26
    if (strlen(argv[1]) != 26) {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    // se tiverem caracteres invalidos
    for (int repetidas = 0; repetidas < strlen(argv[1]); repetidas++) {
        if (argv[1][repetidas] == argv[1][repetidas + 1]) {
            printf("Key must contain 26 characters.\n");
            return 1;
        }
    }

    // pegar texto do usuario e depois escreve-lo codificado com a funcao
    string texto = get_string("ciphertext: ");

    printf("ciphertext: ");
    substitui(alfabeto, texto);

    printf("\n");
}

void substitui(string letras, string codifica) {

    string alfabetoReal = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (int contar = 0; contar < strlen(codifica); contar++) {
        if (ispunct(codifica[contar]) || isblank(codifica[contar]) || isdigit(codifica[contar])) {
            printf("%c", codifica[contar]); // escreve pontuacao / espacos / numeros
        }

        // escreve texto codificado
        for (int i = 0; i <= strlen(alfabetoReal); i++) {
            if (isupper(codifica[contar]) && codifica[contar] == toupper(alfabetoReal[i])) {
                printf("%c", toupper(letras[i]));
            } else if (islower(codifica[contar]) && codifica[contar] == tolower(alfabetoReal[i])) {
                printf("%c", tolower(letras[i]));
            }
        }
    }
}
