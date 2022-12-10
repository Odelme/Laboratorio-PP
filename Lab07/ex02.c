#include <stdio.h>
#include <string.h>

int main ()
{
    char str[200];
    int i, numero=0;

    printf("Digite um valor qualquer: ");
    fgets(str, 200, stdin);

    for(i = 0; i < 200; i++)
    {
        if (str[i]=='1')
        {
            numero++;
        }
    }

    printf("Dado o numero apresentado, a quantidade de 1's presente no numero eh [ %d ]", numero);

    return 0;
}
