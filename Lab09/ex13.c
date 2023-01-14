#include <stdio.h>
#include <string.h>

int verifica(char *string1, char *string2){

    int i, j, retorno = 0;

    for(i = 0, j = 0; (*(string1 + i)) != '\0'; i++){
        while( (*(string1 + i)) == (*(string2 + j)) ){
            i++;
            j++;
            if( (*(string2 + j)) == '\n' || (*(string2 + j)) == '\0')
                return 1;
            else if( (*(string1 + i)) != (*(string2 + j)) )
                retorno = 0;
        }
    }
    return retorno;
}

int main (){

    char string1[100], string2[100];
    int retorno;

    printf("Digite a primeira strings:\n");
    fgets(string1, 100, stdin);
    printf("Digite a primeira strings:\n");
    fgets(string2, 100, stdin);

    retorno = verifica(string1, string2);

    if(retorno == 1)
        printf("A segunda string ocorre dentro da primeira string\n");
    else
        printf("A segunda string nao ocorre dentro da primeira string\n");

    return 0;

}
