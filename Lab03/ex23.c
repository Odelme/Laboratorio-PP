#include <stdio.h>

int main (){
   int ano,regra1, regra2, regra3;

   printf("Digite o ano a ser analisado: ");
   scanf("%d", &ano);

   regra1 = ano%400;
   regra2 = ano%4;
   regra3 = ano%100;

   if (regra2 == 0 && regra3 != 0 || regra1 == 0){
    printf("O ano eh bissexto");
   }
   else{
    printf("O ano nao eh bissexto");
        }
return 0;
}
