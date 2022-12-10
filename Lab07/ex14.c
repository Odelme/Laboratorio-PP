#include <stdio.h>
#include <string.h>

int main(){

    char str1[100], str2[100];
    int num = 0;

    printf("Digite a primeira string: ");
    fflush(stdin);
    scanf("%100[^\n]", str1);
    fflush(stdin);

    printf("Digite a segunda string: ");
    fflush(stdin);
    scanf("%100[^\n]", str2);
    fflush(stdin);

    do{
        printf("\nAgora o numero de caracteres que voce quer concatenar: ");
        scanf("%d", &num);

    } while (strlen(str2) < num);


    str2[num] = '\0';

    printf("\nO resultado concatenado eh: %s\n", strcat(str1, str2));

    return 0;
}
