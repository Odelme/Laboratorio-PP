#include <stdio.h>

int main(){
    int i=2;
    float num, nmaior, nmenor;

    printf("Digite o 1o numero: ");
    scanf("%f", &num);
    nmenor=num;
    nmaior=num;

    while(i<=10){
        printf("Digite o %do numero: ", i);
        scanf("%f", &num);

        if(num<nmenor){
            nmenor=num;
        }
        else if(num>nmaior){
            nmaior=num;
        }
        i++;
    }

    printf("\nO menor numero eh %.2f e o maior eh %.2f", nmenor, nmaior);
    return 0;
}
