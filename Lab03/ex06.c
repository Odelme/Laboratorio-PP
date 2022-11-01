#include <stdio.h>

int main (){

    int num1, num2;

    printf("Digite o primeiro numero:\n");
    scanf("%d", &num1);
    printf("Digite o segundo numero:\n");
    scanf("%d", &num2);

    if (num1 > num2) {
      printf("%d eh maior.\n", num1);
      printf("E a diferenca entre ambos eh: %d\n", (num1-num2));
    }

    else {
      printf("%d eh maior.\n", num2);
      printf("E a diferenca entre ambos eh: %d\n", (num2-num1));
    }

    return 0;
}
