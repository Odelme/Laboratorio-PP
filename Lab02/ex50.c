#include <stdio.h>

int main() {
       int idade, anoatual, nasc;
        printf("Informe a sua idade: ");
        scanf("%d",&idade);
        printf("Informe o ano atual");
        scanf("%d", &anoatual);
        nasc= anoatual - idade;
        printf("Voce nasceu em %d", nasc);
        return 0;
}
