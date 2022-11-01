#include <stdio.h>
#include <stdio.h>

int main (){
    char genero;
    float altura;

    printf("Informe o genero\n");
    printf("Homem [h]\nMulher[m]\n");
    printf("informe: ");
    scanf("%c", &genero);

    printf ("Informe a altura: ");
    scanf("%f", &altura);

    if (genero == 'h'){
        printf("Seu peso ideal eh: %.2f\n", (72.7 * altura) - 58.0);
    }
    if (genero == 'm'){
        printf("Seu peso ideal eh: %.2f\n", (62.1 * altura) - 44.7);
    }

    return 0;
}
