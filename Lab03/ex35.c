#include <stdio.h>

int main (){
    int mes, dia, ano;

    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("Digite o mes: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    if(mes >= 1 && mes <=12){
    //meses 31 dias
        if( mes == 1 || mes == 3 || mes == 5 || mes==7 || mes == 8 || mes == 10 || mes == 12){
            if (dia <= 31){
                printf ("Esse dia existe nesse mes!");
            }
            else {
                printf("Esse dia nao existe nesse mes!");
            }
        }
    //meses 30 dias
        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
            if (dia <= 30){
                printf ("Esse dia existe nesse mes!");
            }
            else {
                printf("Esse dia nao existe nesse mes!");
            }
        }
    //fevereiro
        else if (mes == 2){
           //teste ano bissexto
           if ((ano%4 == 0 && ano%100 != 0) || (ano%400==0)){
                if (dia <= 29){
                    printf ("Esse dia existe nesse mes!");
                }
                else{
                    printf("Esse dia nao existe nesse mes!");
                }
            }
            //demais casos
            else if (dia <= 28){
                printf ("Esse dia existe nesse mes!");
            }
            else {
                printf("Esse dia nao existe nesse mes!");
            }
        }
    }

    else{
        printf("Mes invalido!");
    }

return 0;
}
