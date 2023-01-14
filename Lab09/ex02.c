#include <stdio.h>
#include <stdlib.h>

int main (){

    int x, y;
    int *p1, *p2;

    p1 = &x;
    p2 = &y;

    printf("Endereco de X eh: %d\n", p1);
    printf("Endereco de Y eh: %d\n\n", p2);


    if(p1 > p2){
        printf("Endereco de X maior que de Y\n");
    } else {
         printf("Endereco de Y maior que de X\n");

    }

    return 0;

}
