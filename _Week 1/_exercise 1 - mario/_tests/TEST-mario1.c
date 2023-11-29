#include <stdio.h>

int main(void) {
    // pergunta ao usuario a area do bloco
    int blockNumbers;
    do {
        printf("Digite a area do bloco: ");
        scanf("%i",&blockNumbers);
    }
    while (blockNumbers < 1);
    printf("--------------\n");
    // escreve o bloco
    for (int blockHeight = 0; blockHeight < blockNumbers; blockHeight++) { // loop para gerar ALTURA. com a terceira '#', ele volta o loop e gera uma nova linha *****
        for (int blockWidth = 0; blockWidth < blockNumbers; blockWidth++) { // loop para gerar a largura, printa com a quantidade 'blockNumbers'. se blockNumbers = 10, vai escrever 10x
        printf("# ");
        }
        printf("\n"); // ***** gera uma nova linha!
    }
    printf("--------------\n");
}
