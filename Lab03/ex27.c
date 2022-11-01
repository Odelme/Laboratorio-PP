#include <stdio.h>

int main (){
     int idade;

     printf("Qual a idade do nadador?\n");
     scanf("%d", &idade);

     if (idade >=5 && idade <=17){
        if (idade >=5 && idade <=7){
            printf("O nadador eh da categoria Infantil A");
        }
        if (idade >=8 && idade <=10){
            printf("O nadador eh da categoria Infantil B");
        }
        if (idade >=11 && idade <=13){
            printf("O nadador eh da categoria Juvenil A");
        }
        if (idade >=14 && idade <=17){
            printf("O nadador eh da categoria Juvenil B");
        }
     }

     else{
        if (idade >= 18){
            printf("O nadador eh da categoria Senior");
        }
        else{
            printf("O nadador tem menos de 5 anos, nao ha categoria");
        }
     }



return 0;
}

