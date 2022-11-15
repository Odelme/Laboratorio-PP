#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2;
    int escolha;

    do {

        printf("Digite o primeiro valor: ");
        scanf("%f", &n1);
        printf("Digite o segundo valor: ");
        scanf("%f",&n2);


        do {
            printf("\nEscolha a operacao matematica que deseja: \n");
            printf("[1] Adicao \n");
            printf("[2] Subtracao \n");
            printf("[3] Multiplicacao \n");
            printf("[4] Divisao \n");
            printf("[5] SAIR\n");
            printf("Qual sua escolha: ");
            scanf("%d", &escolha);

        } while (escolha < 1 || escolha > 5);

        if (escolha >= 1 && escolha <= 5) {

            switch (escolha) {
                case 1:
                    printf("A adicao desses valores eh %.2f\n\n", n1, n2, (n1 + n2));
                    break;
                case 2:
                    printf("A subtracao desses valores eh %.2f\n\n", n1, n2, (n1 - n2));
                    break;
                case 3:
                    printf("A multiplicacao desses valores eh %.2f\n\n", n1, n2, (n1 * n2));
                    break;
                case 4:
                    printf("A divisao desses valores eh %.2f\n\n", n1, n2, (n1 / n2));
                    break;
                case 5:
                    break;

                }

        }

    } while (escolha != 5);

    printf("\nFIM!!");

    return 0;

}
