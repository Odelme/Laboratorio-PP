#include <stdio.h>

int main (){
    int num1, num2, num3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

//caso 1
      if (num1 <= num2 && num2 <= num3){
          printf("A ordem crescente eh: %d, %d, %d\n", num1, num2, num3);
        }
//caso 2
      else if (num1 <= num3 && num3 <= num2){
          printf("A ordem crescente eh: %d, %d, %d\n", num1, num3, num2);
        }
//caso 3
      else if (num2 <= num1 && num1 <= num3){
          printf("A ordem crescente eh: %d, %d, %d\n", num2, num1, num3);
        }
//caso 4
      else if (num2 <= num3 && num3 <= num1) {
          printf("A ordem crescente eh: %d, %d, %d\n", num2, num3, num1);
        }
//caso 5
      else if (num3 <= num1 && num1 <= num2) {
          printf("A ordem crescente eh: %d, %d, %d\n", num3, num1, num2);
        }
//caso 6
      else if( num3 <= num2 && num2 < num1 ){
          printf("A ordem crescente eh: %d, %d, %d\n", num3, num2, num1);
        }

    return 0;
    }

