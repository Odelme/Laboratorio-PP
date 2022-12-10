#include <stdio.h>
#include <string.h>

int main()
{
    char str[30];
    char L1, L2;
    int i;

    printf("Digite uma palavra: ");
    fgets(str, 30, stdin);

    printf("Digite a letra 1: ");
    scanf("%c", &L1);

    fflush(stdin);

    printf("Digite a letra 2: ");
    scanf("%c", &L2);

    char len = strlen(str);

    for ( i = 0; i < len; i++) {
        if (str[i] == L1) {
            str[i] = L2;
        }
    }

    printf("A nova palavra digitada eh: %s", str);

    return 0;

}
