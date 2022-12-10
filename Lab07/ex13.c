#include <stdio.h>
#include <string.h>

int main ()
{
    char str [250];
    int i, k, j = 0, resultado=0;

    printf("Digite uma frase qualquer para verificar se eh um palindromo: ");
    fflush(stdin);
    fgets(str, 250, stdin);

    k = strlen(str);

    for (i = 0; i < k; i++){
        while(str[i] == 32){
            for ( j = i; j < k - 1; j++){
                str[j] = str [j +1];
            }
            str[j] = '\0';
        }
    }

    k = strlen(str) - 1;

    for (i = 0; i < k; i++){
        if (str[i] != str [k-i-1]){
            resultado = 1;
        }
    }


    if ( resultado == 0){
        printf ("\nEh um palindromo!\n");
    }
    else{
        printf ("\nNao eh um palindromo\n");
    }

    return 0;
}

