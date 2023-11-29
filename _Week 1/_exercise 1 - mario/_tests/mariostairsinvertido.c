#include <stdio.h>

int main(void) {
    int stairsHeight;
    // gets height
    do {
        printf("Insira a altura: ");
        scanf("%i",&stairsHeight);
    }
    while (stairsHeight < 1 || stairsHeight > 8);
    printf("-----------------\n");
    for (int stairsColumns = 0; stairsColumns < stairsHeight; stairsColumns++) {
        for(int stairsSpaces = 0; stairsSpaces < stairsHeight - stairsColumns; stairsSpaces++) {
            printf(" ");
        }
        for (int stairsSteps = 0; stairsSteps <= stairsColumns; stairsSteps++) {
            printf("#");
        }
        for (int stairsSpaces2 = 0; stairsSpaces2 < 2; stairsSpaces2++) {
            printf(" ");

        }
        for (int stairsSteps = 0; stairsSteps <= stairsColumns; stairsSteps++) {
            printf("#");
        }
        printf("\n");
    } while (escolha)

}

