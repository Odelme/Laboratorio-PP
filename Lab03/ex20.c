#include <stdio.h>

int main (){
    int A,B,C;

    printf ("Digite o lado A: ");
    scanf ("%d", &A);
    printf ("Digite o lado B: ");
    scanf ("%d", &B);
    printf ("Digite o lado C: ");
    scanf ("%d", &C);

    if(A + B > C && A + C > B && B + C > A){
        printf("Os valores formam um triangulo!\n");
        if(A == B && A == C){
            printf("Equilatero\n");
        }
        else{
            if(A == B || A == C || B == C){
                printf("Isosceles\n");
            }
            else{
                printf("Escaleno\n");
            }
        }
    }

    else{
        printf("Os valores nao formam um triangulo!\n");
    }

return 0;
}
