#include <stdio.h>

void lados(int lado1, int lado2, int lado3)
{

    if ( (lado1 < (lado2 + lado3)) && (lado2 < (lado1 + lado3)) && (lado3 < (lado1 + lado2)) ) {

            if ( (lado1 == lado2) && (lado1 == lado3) && (lado2 == lado3) ) {
                printf("Os lados formam um triangulo equilatero");

            } else if ( (lado1 == lado2 && lado1 != lado3) || (lado1 == lado3 && lado1 != lado2) || (lado2 == lado3 && lado2 != lado1)) {
                printf("Os lados formam um triangulo isoceles");

            } else if ((lado1 != lado2) && (lado1 != lado3)) {
                printf("Os lados formam um triangulo escaleno");

            }
    }
    else {
        printf("Os lados nao formam um triangulo");

    }
}


void main()
{
    int a, b, c;

    printf("Digite o valor do lado a: ");
    scanf("%d", &a, &b, &c);
    printf("Digite o valor do lado b: ");
    scanf("%d", &b);
    printf("Digite o valor do lado c: ");
    scanf("%d", &c);

    lados(a, b, c);

}
