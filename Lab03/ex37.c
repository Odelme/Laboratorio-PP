#include <stdio.h>

int main (){

    int hora_entra, hora_saida, hora_final;
    int min_entra, min_saida, min_final;
    int tempo;
    float preco;

    printf("Digite a hora que entrou: ");
    scanf("%d", &hora_entra);
    printf("Digite os minutos que entrou: ");
    scanf("%d", &min_entra);

    printf("Digite a hora da saida: ");
    scanf("%d", &hora_saida);
    printf("Digite os minutos da saida: ");
    scanf("%d", &min_saida);

//horas
    if (hora_entra > hora_saida){
        hora_final = (hora_saida + 24) - hora_entra;
    }
    else{
        hora_final = hora_saida - hora_entra;
    }
//minutos
    if (min_entra > min_saida){
        min_final = (min_saida + 60) - min_entra;
    }
    else{
        min_final = min_saida - min_entra;
    }
//tempo no estacionamneto
    tempo = hora_final * 60 + min_final;

//casos possiveis
    if (tempo <= 60){
        preco = 1;
        printf("O valor a ser pago ser de R$%.2f", preco);
    }
    else if (60 < tempo && tempo <= 120){
        preco = 2;
        printf("O valor a ser pago sera de R$%.2f", preco);
    }
    else if (120 < tempo && tempo <= 180){
        preco = 2 + 1.40;
        printf("O valor a ser pago sera de R$%.2f", preco);
    }
    else if (180 < tempo && tempo <= 240){
        preco = 2 + 1.40 + 1.40;
        printf("O valor a ser pago sera de R$%.2f", preco);
    }
    else if (240 < tempo){
        preco = 2 + 1.40 + 1.4 + (((tempo - 240)/60) * 2);
        printf("O valor a ser pago sera de R$%.2f", preco);
    }

return 0;
}

