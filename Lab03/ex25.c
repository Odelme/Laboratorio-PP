#include <stdio.h>
#include <math.h>

int main() {

  float A,B,C,delta;

  printf ("Digite o valor de A: ");
  scanf ("%f",&A);
  printf ("Digite o valor de B: ");
  scanf ("%f",&B);
  printf ("Digite o valor de C: ");
  scanf ("%f",&C);

  delta = B*B - 4*A*C;

    if (A == 0){
        printf("Nao eh equacao de segundo grau");
    }

    else {
      if ( delta < 0 ){
       printf ("Nao existe raiz\n");
      }
      else{
          if (delta == 0){
           printf("Raiz unica");
           printf("R1 = %.2f\n",(-B + sqrt(delta)) / (2*A));
          }
          else{
           printf("R1 = %.2f\n",(-B + sqrt(delta)) / (2*A));
           printf ("R2 = %.2f\n",(-B - sqrt(delta)) / (2*A));
          }
      }
   }

    return 0;
 }
