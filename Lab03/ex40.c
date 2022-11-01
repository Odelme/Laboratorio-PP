#include <stdio.h>
#include <stdlib.h>

int main(){

    float fabrica, consumidor;

    printf("Digite o custo de fabricao do carro: R$");
    scanf("%f", &fabrica);

    if (fabrica <= 12000) {
        consumidor = (fabrica) + (fabrica * 0,05);
        printf("O custo para o consumidor eh R$%.2f", consumidor);
    }
    else if (fabrica > 12000 && fabrica <= 25000) {
        consumidor = (fabrica) + (fabrica * 0,10) + (fabrica * 0,15);
        printf("O custo para o consumidor eh R$%.2f", consumidor);
    }
    else if (fabrica > 25000) {
        consumidor = (fabrica) + (fabrica * 0,15) + (fabrica * 0,20);
        printf("O custo para o consumidor eh R$%.2f", consumidor);
    }

    return 0;
}
