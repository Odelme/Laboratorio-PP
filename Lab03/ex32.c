#include <stdio.h>
int main (){
    int codigo;
    int quantidade;

    printf("[codigo] produto\n[100] Cachorro Quente\n[101] Bauru Simples\n[102] Bauru com Ovo\n[103] Hambúrguer\n[104] Cheeseburguer\n[105] Suco\n[106] Refrigerante\n");
    printf("Qual o codigo do produto: ");
    scanf ("%d", &codigo);
    printf ("Qual a quantidade: ");
    scanf ("%d", &quantidade);

    if (codigo == 100){
        printf("O valor a ser pago pelo lache eh R$%.2f\n", quantidade*1.20);
    }
    else if (codigo == 101){
        printf("O valor a ser pago pelo lache eh R$%.2f\n", quantidade*1.30);

    }
    else if (codigo == 102){
        printf("O valor a ser pago pelo lache eh R$%.2f\n", quantidade*1.50);

    }
    else if (codigo == 103){
        printf("O valor a ser pago pelo lache eh R$%.2f\n", quantidade*1.20);

    }
    else if (codigo == 104){
        printf("O valor a ser pago pelo lache eh R$%.2f\n", quantidade*1.70);

    }
    else if (codigo == 105){
        printf("O valor a ser pago pelo lache eh R$%.2f\n", quantidade*2.20);

    }
    else if (codigo == 106){
        printf("O valor a ser pago pelo lache eh R$%.2f\n", quantidade*1.00);
    }
    else {
        printf("O codigo eh invalido");
    }

return 0;
}
