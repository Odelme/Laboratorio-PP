#include <stdio.h>
#include <string.h>

int main ()
{
    char str[50];

    printf("\nDigite uma frase qualquer: ");
    gets(str);


    printf("\n%s", str);

    return 0;
}
