#include <stdio.h>

int main()
{
    int num, i;

    printf("Quantos numeros impares deseja mostrar? ");
    scanf("%d", &num);

    for(i=0; i<num; i++){
        printf("%d \n", 1+(2*i));
    }
    return 0;
}
