#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, a, b, primo;
    int div = 0;

   printf("[Digite numeros inteiros possitivos]\n");
   printf("Digite o valor inicial: ");
   scanf("%d", &a);
   printf("Digite o valor ate onde deseja ir: ");
   scanf("%d", &b);

   if(a > 0 && a < b ) {

     for (i = a; i < b; i++) {

       primo = 1;

       for (j = 2; j <= i; j++) {

           if (((i % j) == 0) && (j != i)) {

               primo = 0;
               break;
           }
       } if (primo == 1) {
                printf("%d ", i);

       }

     }

   } else {

     printf("Digite numeros validos!");

   }

    return 0;

}
