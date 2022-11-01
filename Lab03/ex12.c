#include <stdio.h>
#include <math.h>

int main (){
    int num, logx, logx10;

    printf("Digite um numeros:\n");
    scanf("%d", &num);

    if (num >0) {
      logx = log(num);
      logx10 = log10(num);
      printf("O logatimo natural eh %d e logaritimo na base 10 eh %d\n", log, log10);
    }

    else {
      printf("Numero invalido\n");
    }
    return 0;
}
