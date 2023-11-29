#include <stdio.h>
#include <cs50.h>

int main(void) {
    char conc;
    printf("Voce concorda? [S/N] ");
    scanf("%c",&conc);
    if (conc == 's' || conc == 'S') {
        printf("voce concorda\n");
    }
    else if (conc == 'n' || conc == 'N') {
        printf("voce discorda\n");
    }
}
