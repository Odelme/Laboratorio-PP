#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char letra, minu;
    printf("Digite uma letra maiuscula: ");
    scanf("%c", &letra);
    minu= letra + 32;
    printf("Essa letra em formato minusculo e: %c", minu);
    return 0;
}
