#include <stdio.h>
#include <stdlib.h>

int main() {
  float quantia, primeiro, segundo;
  quantia = 780000.00;
  primeiro = quantia*0.46;
  printf("O primeiro ganhador ira receber o valor de R$%.2f\n", primeiro);
  segundo = quantia*0.32;
  printf("O segundo ganhador ira receber o valor de R$%.2f\n", segundo);
  printf("O terceiro ganhador ira receber o valor de R$%.2f\n", quantia-primeiro-segundo);
return 0;
}
