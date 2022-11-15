#include <stdio.h>

int main()
{
    int i, num;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    if (num>=0){
    printf("Os naturais de 0 a %d eh:\n", num);
    for(i=0; i<=num; i++){
        printf("\n %d", i);
    }
    }
    else{
        printf("O numero eh invalido!!");
    }

    return 0;
}

