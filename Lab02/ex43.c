#include <stdio.h>
#include <stdlib.h>

int main() {
    float total, pagar;
    float des10, vlrapagar,par3;

    printf("Qual o valor total? ");
    scanf("%f", &total);

    des10 = total * 0.10;
    pagar = total - des10;
    par3 = (total/3)*0,03;

    printf("o total a pagar com 10 porcento de desconto eh R$%.2f\n" , pagar);
    printf("O valor da parcela com 3 porcento de juros eh R$%f\n",(total/3)+ par3) ;
    printf("Comissao do vendedor, venda a vista com 5 porcento de desconto R$%.2f\n", pagar * 0.05);
    printf("Comissao do vendedor, venda parcelada 5 porcento R$%.2f", total * 0.05);
    return 0;
}
