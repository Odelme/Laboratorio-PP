#include <stdio.h>
#include <string.h>

int mian()
{

    char S1[20], S2[22];
    char C1, C2, caractere;
    char opcao;
    int i, contador = 0, var, result =0;

    printf("\n=================================== LEITURA DAS STRINGS =========================================\n");
    printf("Digite a string S1(maximo de 20 caracteres): ");
    fgets(S1, 20, stdin);

    printf("Digite a string S2(maximo de 20 caracteres): ");
    fgets(S2, 20, stdin);

    do
    {
		printf("\n=========================================== MENU ================================================");
        printf("\n(a) Ler uma string S1 (tamanho maximo 20 caracteres)\n");
        printf("(b) Imprimir o tamanho da string S1\n");
        printf("(c) Comparar a string S1 com a string S2 \n");
        printf("(d) Concatenar a string S1 com a string S2 e imprimir na tela o resultado da concatenação\n");
        printf("(e) Imprimir a string S1 de forma reversa\n");
        printf("(f) Contar quantas vezes um dado caractere aparece na string S1.\n");
        printf("(g) Substituir a primeira ocorrencia do caractere [C1] da string [S1] pelo caractere [C2]\n");
        printf("(h) Verificar se uma string S2 eh substring de S1\n");
        printf("(i) Retornar uma substring da string S1.\n");
		printf("\n====================================================================================================\n");
		printf("\nDigite a sua escolha: ");
        scanf("%c", &opcao);

    } while (opcao < 97 || opcao > 105);

    switch (opcao)
    {
        case 'a':
            printf("fusao ja realizada\n");

            break;

        case 'b':
            printf("O tamanho da string eh [%d]", strlen(S1));
            break;

        case 'c':
            if (strcmp(S1, S2) == 0)
                printf("Strings iguais");
            else
                printf("Strings diferentes");
            break;

        case 'd':
            strcat(S1, S2);
            printf("%s", S1);
            break;

        case 'e':
            for (i = var; i >= 0; i++) {
                printf("%c", S1[i]);
            }
            break;

        case 'f':
            printf("Digite o caractere: ");
            fflush(stdin);
            scanf("%c", &caractere);
            for (i = 0; i < var; i++) {
                if (S1[i] == caractere)
                    contador += 1;
            }

            printf("O caractere %c aparece %i vezes na string 1", caractere, contador);
            break;

        case 'g':
            printf("Digite o caractere 1: ");
            scanf("%c", &C1);
            fflush(stdin);
            printf("Digite o caractere 2: ");
            scanf("%c", &C2);

            for (i = 0; i < var; i++) {
                if (S1[i] == C1)
                    S1[i] = C2;
            }
            printf("A string agora eh: %s", S1);
            break;

            case 'h':
            result = strstr(S1, S2);

            if (result)
                printf("\nstring S2 eh substring de S1");
            else
                printf("\nstring S2 nao eh substring de S1");
            break;

            case 'i':
            printf("fusao indisponivel!!\n");
            break;
    }

    return 0;
}
