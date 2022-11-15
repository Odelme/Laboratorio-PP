#include <stdio.h>

int main(){
    int i=1;
    float soma=0, num;

    while(i<=10){
        printf("Digite o %do numero para soma: ", i);
        scanf("%f", &num);
        soma+=num;
        i++;
    }
    printf("A soma total eh de %.2f", soma);
    return 0;
}

