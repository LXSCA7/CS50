#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int comando, string palavra[]) {
    if (palavra[1]) {
        // loop pra pegar cada caractere da palavra e pegar vogais
        int quantLetras = strlen(palavra[1]);
        for (int cont = 0; cont < quantLetras; cont++) {
            switch (palavra[1][cont]) {
                case 'a':
                    printf("6");
                    break;
                case 'e':
                    printf("3");
                    break;
                case 'i':
                    printf("1");
                    break;
                case 'o':
                    printf("0");
                    break;
                default:
                    printf("%c", palavra[1][cont]);
                    break;
            }
        }
        printf("\n");

    } else {
        printf("usage: ./no-vowels word\n");
    }
}
