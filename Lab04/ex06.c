#include <stdio.h>

int main()
{
    int i=1, num;
    float media;

    while(i<=10){
        printf("Digite o %do numero inteiro para o calculo da media: ", i);
        scanf("%d", &num);
        media+=num;
        i++;
    }

    printf("A media eh de %.2f", media/10);
    return 0;
}
