#include <stdio.h>

int main (){

    float altura, peso;

    printf("Qual a altura: ");
    scanf("%f", &altura);
    printf("Qual peso: ");
    scanf("%f", &peso);

//altura menor que 1,20
    if (altura <1.20){
       if (altura <1.20 && peso < 60)
         printf("Sua classificacao eh A");
       else if (altura <1.20 && peso >= 60 && peso <=90)
         printf("Sua classificacao eh D");
       else if (altura <1.20 && peso > 90)
         printf("Sua classificacao eh G");
    }
//altura entre 1,20 e 1,70
    if (altura >=1.20 && altura <=1.70){
       if (altura >=1.20 && altura <=1.70 && peso < 60)
         printf("Sua classificacao eh B");
       else if (altura >=1.20 && altura <=1.70 && peso >= 60 && peso <=90)
         printf("Sua classificacao eh E");
       else if (altura >=1.20 && altura <=1.70 && peso > 90)
         printf("Sua classificacao eh H");
    }
//altura maior 1.70
    if (altura > 1.70){
       if (altura > 1.70 && peso < 60)
         printf("Sua classificacao eh C");
       else if (altura > 1.70 && peso >= 60 && peso <=90)
         printf("Sua classificacao eh F");
       else if (altura > 1.70 && peso > 90)
         printf("Sua classificacao eh I");
    }
return 0;
}
