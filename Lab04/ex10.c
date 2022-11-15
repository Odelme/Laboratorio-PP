#include <stdio.h>

int main()
{
    int soma=0, i;

    for(i=0; i<=50; i++){
        soma+=(i*2);
    }

    printf("A soma dos 50 primeiros numeros pares eh de %d", soma);

    return 0;
}

