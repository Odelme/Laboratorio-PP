#include <stdio.h>

int main (){

    float valor;

    printf("Imprima o valor da venda: R$");
    scanf("%f", &valor);

    if (valor >= 100000.00){
        printf("O valor da comissao sera de: R$%.2f", 700+(0.16*valor));
    }
    else if (valor < 100000.00 && valor >= 80000.00){
        printf("O valor da comissao sera de: R$%.2f", 650+(0.14*valor));
    }
    else if (valor < 80000.00 && valor >= 60000.00){
        printf("O valor da comissao sera de: R$%.2f", 600+(0.14*valor));
    }
    else if (valor < 60000.00 && valor >= 40000.00){
        printf("O valor da comissao sera de: R$%.2f", 550+(0.14*valor));
    }
    else if (valor < 40000.00 && valor >= 20000.00){
        printf("O valor da comissao sera de: R$%.2f", 500+(0.14*valor));
    }
    else if (valor < 20000.00){
        printf("O valor da comissao sera de: R$%.2f", 400+(0.14*valor));
    }


return 0;
}
