#include <stdio.h>
#include <string.h>

typedef struct
{
    char
        nome[30],
        endereco[100];
    float
        telefone;
}Ficha_pessoa;


void
main()
{
    char
        alfabeto_M[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'},
        alfabeto_m[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    printf("%c", alfabeto_M[0]);
    printf("%c", alfabeto_m[0]);

    Ficha_pessoa pessoa[5];

    for (int count = 0; count < 5; count++)
    {
        fflush(stdin);
        printf("Digite o nome da pessoa %d: ", count + 1);
        scanf("%30[^\n]", &pessoa[count].nome);

        fflush(stdin);
        printf("Digite o endereço da pessoa: ");
        scanf("%100[^\n]", &pessoa[count].endereco);

        printf("Digite o telefone: ");
        scanf("%f", &pessoa[count].telefone);
    }

    for (int count = 0; count < 26; count++)
    {
        if (pessoa[0].nome[0] == alfabeto_M[count] || pessoa[0].nome[0] == alfabeto_m[count])
            printf("Nome: %s\n Endereco: %s\n Telefone: %.0f\n\n", pessoa[0].nome, pessoa[0].endereco, pessoa[0].telefone);

        if (pessoa[1].nome[0] == alfabeto_M[count] || pessoa[1].nome[0] == alfabeto_m[count])
            printf("Nome: %s\n Endereco: %s\n Telefone: %.0f\n\n", pessoa[1].nome, pessoa[1].endereco, pessoa[1].telefone);

        if (pessoa[2].nome[0] == alfabeto_M[count] || pessoa[2].nome[0] == alfabeto_m[count])
            printf("Nome: %s\n Endereco: %s\n Telefone: %.0f\n\n", pessoa[2].nome, pessoa[2].endereco, pessoa[2].telefone);

        if (pessoa[3].nome[0] == alfabeto_M[count] || pessoa[3].nome[0] == alfabeto_m[count])
            printf("Nome: %s\n Endereco: %s\n Telefone: %.0f\n\n", pessoa[3].nome, pessoa[3].endereco, pessoa[3].telefone);

        if (pessoa[4].nome[0] == alfabeto_M[count] || pessoa[4].nome[0] == alfabeto_m[count])
            printf("Nome: %s\n Endereco: %s\n Telefone: %.0f\n\n", pessoa[4].nome, pessoa[4].endereco, pessoa[4].telefone);
    }

}
