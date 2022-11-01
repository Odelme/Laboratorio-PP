#include <stdio.h>
#include <stdio.h>
#include <string.h>

int main (){
    char estado[2];
    float valor;

    printf ("Informe o valor do produto: ");
    scanf("%f", &valor);

    printf("Informe o estado em letras maiusculas\n");
    printf("[MG]Minas gerais\n[SP]Sao Paulo\n[RJ]Rio de Janeiro\n[MS]Mato Grosso do Sul\n");
    printf("Qual o estado: ");
    scanf("%s", &estado);

    if (strcmp(estado, "MG") == 0 || strcmp(estado, "SP") == 0 || strcmp(estado, "RJ") == 0 || strcmp(estado, "MS") == 0){
        if (strcmp(estado, "MG") == 0){
            printf("O preco final do produto acrescido do imposto do estado eh %.2f\n", (valor*0.07)+valor );
        }
        if (strcmp(estado, "SP") == 0){
            printf("O preco final do produto acrescido do imposto do estado eh %.2f\n", (valor*0.12)+valor );
        }
        if (strcmp(estado, "RJ") == 0){
            printf("O preco final do produto acrescido do imposto do estado eh %.2f\n", (valor*0.15)+valor );
        }
        if (strcmp(estado, "MS") == 0){
            printf("O preco final do produto acrescido do imposto do estado eh %.2f\n", (valor*0.08)+valor );
        }
    }

    else {
        printf("ERRO!!\nO estado digitado nao for valido!\n");
    }

return 0;
}
