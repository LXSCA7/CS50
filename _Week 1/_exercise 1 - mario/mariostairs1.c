#include <stdio.h>

int main(void){
    int stairsHeight;
    // gets height
    do {
        printf("Insira a altura: ");
        scanf("%i",&stairsHeight);
    }
    while (stairsHeight < 1);
    for (int stairsColumns = 0; stairsColumns < stairsHeight; stairsColumns++) {
        for (int stairsSteps = 0; stairsSteps <= stairsColumns; stairsSteps++) {
            printf("#");
        }
        printf("\n");
    }
}
