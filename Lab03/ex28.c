#include <stdio.h>
#include <math.h>

int main (){
    float num1, num2, num3;
    float a,b,c,d;
    char escolha;

    printf("Escolha qual media devera ser feita:\n");
    printf("[a]GEOMETRICA\n[b]PONDERADA\n[c]HARMONICA\n[d]ARITMETICA\n");
    printf("Qual sua escolha: ");
    scanf("%c", &escolha);

    printf("\nDigite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%f", &num3);


    if (escolha =='a' || escolha =='b' || escolha == 'c' || escolha == 'd'){
        if (escolha == 'a'){
            a = num1*num2*num3;
            printf("A media geometrica desses numeros eh %f", pow(a ,1.0/3.0));
        }
        if (escolha == 'b'){
            b = (1*num1) + (2*num2) + (3*num3);
            printf("A media ponderada desses numeros eh %f", b/3.0);
        }
        if (escolha == 'c'){
            c = (1/num1) + (1/num2) + (1/num3);
            printf("A media harmonica desses numeros eh %f", 1.0/c);
        }
        if (escolha == 'd'){
            d = num1 + num2 + num3;
            printf("A media aritmetica desses numeros eh %f", d/3.0);
        }
    }
    else {
        printf("Escolha invalida!");
    }
return 0;
}

