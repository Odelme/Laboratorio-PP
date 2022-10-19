#include <stdio.h>

int main (){
    float comprimento, largura, area, valor, metro;

    printf("Qual o comprimento?\n");
    scanf("%f", &comprimento);
    printf("Qual o largura?\n");
    scanf("%f", &largura);
    printf("Qual o valor do metro?\n");
    scanf("%f", &metro);

    area = comprimento*largura;
    valor = area*metro;
    printf("O custo vai ser de: R$%f", valor);
 return 0;
}
