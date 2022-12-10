#include <stdio.h>
#include <string.h>

int main ()
{
    char str[50], caracter;
    int i, vogal=0;

    printf ("Digite uma palavra: ");
    fgets (str, 50, stdin);


    for(i=0; i < strlen(str); i++)
    {
        if( (str[i]=='a')||(str[i]=='i')||(str[i]=='e')||(str[i]=='o')||(str[i]=='u') )
        {
            vogal++;
        }
        else if ( (str[i]=='A') || (str[i]=='E') || (str[i]=='I') || (str[i]=='O') || (str[i]=='U') )
        {
            vogal++;
        }
    }

    printf ("\nA palavra tem %d vogais.\n", vogal);


    printf("\nAgora digite um caractere qualquer: ");
    scanf("%c", &caracter);

    for(i=0; i < strlen(str); i++)
    {
        if( (str[i]=='a')||(str[i]=='i')||(str[i]=='e')||(str[i]=='o')||(str[i]=='u') )
        {
            str[i]=caracter;
        }
        else if ( (str[i]=='A') || (str[i]=='E') || (str[i]=='I') || (str[i]=='O') || (str[i]=='U') )
        {
            str[i]=caracter;
        }
    }


    printf("\nTodas as vogais da palavra foram substituidas pelo caractere '%c' \nEntao sera imprimido: \n ", caracter);
    printf("%s ", str);

    return 0;
}
