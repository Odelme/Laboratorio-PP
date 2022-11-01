#include <stdio.h>

int main (){
    int num1, num2, escolha;

    printf("Escolha qual operacao devera ser feita:\n");
    printf("[1]SOMA\n[2]DIFERENCA\n[3]PRODUTO\n[4]DIVISAO\n");
    printf("Qual sua escolha: ");
    scanf("%d", &escolha);
    printf("\nDigite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);


    if (escolha >=1 && escolha <=4){
        if (escolha == 1){
            printf("A soma desses numeros eh %d", num1+num2);
        }
        if (escolha == 2){
            printf("A diferca desses numeros eh %d", num1-num2);
        }
        if (escolha == 3){
            printf("A produto desses numeros eh %d", num1*num2);
        }
        if (escolha == 4){
            printf("A divisao desses numeros eh %d", num1/num2);
        }
    }
    else {
        printf("Escolha invalida!");
    }
return 0;
}

