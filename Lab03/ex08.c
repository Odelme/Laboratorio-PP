#include <stdio.h>

int main (){

    float nota1, nota2;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    if (nota1<0 || nota1>10 || nota2<0 || nota2>10){
        printf("Valor invaido.");
    }
    else{
      printf("A media das notas eh %f", (nota1+nota2)/2);
    }

    return 0;
}
