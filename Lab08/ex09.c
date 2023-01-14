#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct {

    char marca[15];
    int ano, preco;

} Ficha_Carro;

void clean(){
    fflush(stdin);
}

int main() {
    Ficha_Carro
        carro[5];
    char aprovados[5];
    int valor_max = 0, contador = 0, tamanho = 0, index = 0;

    printf("Digite o preço que você está disposto a pagar por um carro: ");
    scanf("%d", &valor_max);

    for (int count = 0; count < 5; count++)
    {
        printf("Carro %d\n", count + 1);
        clean();
        printf("Digite a marca do carro: ");
        scanf("%15[^\n]", &carro[count].marca);

        printf("Digite o ano que foi fabricado: ");
        scanf("%d", &carro[count].ano);

        printf("Digite o preco do carro: ");
        scanf("%d", &carro[count].preco);

        if(carro[count].preco <= valor_max)
        {
            aprovados[contador] = count;
            contador++;
        }
        printf("\n");
    }

    tamanho = strlen(aprovados);
    if (tamanho > 0)
    {
        for (int count = 0; count < tamanho; count++)
        {
            index = aprovados[count];
            printf("Marca: %s\nAno: %d\nPreco: %d\n", carro[index].marca, carro[index].ano, carro[index].preco);
        }
    }
}
