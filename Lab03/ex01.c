#include <stdio.h>

int main (){

    int x1, x2;

    printf("Digite dois numeros:\n");
    scanf("%d""%d", &x1, &x2);

    if (x1 > x2) {
      printf("O maior eh %d e o menor eh %d.\n", x1, x2);
    }

    else {
      printf("O maior eh %d e o menor eh %d.\n", x2, x1);
    }

    return 0;
}
