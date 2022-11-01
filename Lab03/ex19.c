#include <stdio.h>
 int main (){
    int valor;

    printf("Digite um valor: ");
    scanf("%d" ,&valor);

    if(valor%5 == 0 || valor%3 == 0){
        if(valor%5 == 0 && valor%3 != 0){
            printf("Divisivel por 5 mas nao por 3.");
        }
        if(valor%3 == 0 && valor%5 != 0){
            printf("Divisivel por 3 mas nao por 5.");
        }
        if(valor%3 == 0 && valor%5 == 0){
            printf("Erro!! Esse valor eh divisivel por 3 e 5.");
        }
    }

        else{
            printf("O valor nao eh multiplo nem de 3, nem de 5.");
        }
 return 0;
 }
