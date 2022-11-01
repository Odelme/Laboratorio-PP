#include <stdio.h>

int main (){

    float km, l, consumo;

    printf("Qual a distancia: ");
    scanf("%f", &km);
    printf("Qual a quantidade de litros de gasolina consumidos: ");
    scanf("%f", &l);

    consumo = km/l;

    if (consumo < 8){
            printf("Venda o carro!");
    }
    else{
        if (consumo >= 8 && consumo <= 14){
            printf ("Economico!");
        }
        else {
            printf("Super economiso!");
        }
    }

return 0;
}
