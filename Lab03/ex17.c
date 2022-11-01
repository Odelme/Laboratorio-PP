#include <stdio.h>

int main (){

	 float A,B,h;

	 printf ("digite o valor da base maior: ");
	 scanf("%f", &A);
	 printf ("digite o valor da base menor: ");
	 scanf("%f", &B);
     printf ("digite o valor da altura: ");
	 scanf("%f", &h);

     if (A == 0 || B == 0){
        printf("Valores invalidos");
     }
     else{
     printf ("A area do trapezio eh %f\n",(A+B)*h/2);
     }

    return 0;
}
