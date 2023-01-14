#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    struct registro {
        char Nome[100], sexo, Cargo[30];
        int idade, dia, mes, ano, cpf, codigo;
        float salario;
    };

    struct registro funcionario;
    printf ("Apresente o nome de um funcionario: ");
    fgets(funcionario.Nome, 100, stdin);

    printf("Apresente a idade desse funcionario: ");
    fflush(stdin);
    scanf("%d", &funcionario.idade);

    printf("Apresente o sexo desse funcionario (M/F): ");
    fflush(stdin);
    scanf("%c", &funcionario.sexo);

    printf("Apresente o CPF desse funcionario: ");
    fflush(stdin);
    scanf("%d", &funcionario.cpf);

    printf ("Apresente o dia, mes e ano do nascimento desse funcionario: ");
    fflush(stdin);
    scanf("%d %d %d", &funcionario.dia, &funcionario.mes, &funcionario.ano);

    printf("Apresente o codigo do setor desse funcionario (0-99): ");
    fflush(stdin);
    scanf("%d", &funcionario.codigo);

    printf("Apresente o cargo desse funcionario: ");
    fflush(stdin);
    fgets(funcionario.Cargo, 30, stdin);

    printf ("Apresente o salario desse funcionario: ");
    fflush(stdin);
    scanf("%f", &funcionario.salario);

    if(funcionario.sexo > 90) {
    funcionario.sexo= tolower(funcionario.sexo);
    }

    printf ("\nNOME: %s", funcionario.Nome);
    printf("\nIDADE: %d", funcionario.idade);
    printf("\nSEXO: %c", funcionario.sexo);
    printf("\nCPF: %d", funcionario.cpf);
    printf("\nNASCIMENTO: %d / %d / %d", funcionario.dia, funcionario.mes, funcionario.ano);
    printf("\nCODIGO DE SETOR: %d", funcionario.codigo);
    printf("\nCARGO: %s", funcionario.Cargo);
    printf("\nSALARIO: %f", funcionario.salario);

    return 0;
}
