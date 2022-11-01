#include <stdio.h>

int main (){
    float num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    if (num1 == num2){
      printf("Numeros iguais.\n");
    }
    else {
        if(num1 > num2) {
        printf("%f eh o maior.\n", num1);
        }
        else{
        printf("%f eh o maior.\n", num2);
        }
        }

    return 0;
}
