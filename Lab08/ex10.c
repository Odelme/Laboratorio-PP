#include <stdio.h>
#include <string.h>

typedef struct
{
    char titulo[30],
         autor[15];
}Biblioteca;

void main()
{
    Biblioteca livro[5];

    char busca[30];


    for (int count = 0; count < 5; count++)
    {
        switch (count)
        {
        case 0:
            strcpy(livro[count].titulo, "Harry Potter");
            strcpy(livro[count].autor, "JK Rowling");
            break;

        case 1:
            strcpy(livro[count].titulo, "Seja Foda");
            strcpy(livro[count].autor, "Caio Carneiro");
            break;

        case 2:
            strcpy(livro[count].titulo, "Memórias Póstumas");
            strcpy(livro[count].autor, "Machado de Assis");
            break;

        case 3:
            strcpy(livro[count].titulo, "Quincas Borba");
            strcpy(livro[count].autor, "Machado de Assis");
            break;

        case 4:
            strcpy(livro[count].titulo, "Pense como um monge");
            strcpy(livro[count].autor, "Jay Shetty");
            break;

        default:
            break;
        }
    }


    printf("Qual obra você quer achar? ");
    scanf("%30[^\n]", &busca);

    for (int count = 0; count < 5; count++)
    {
        if (!(strcmp(livro[count].titulo, busca)))
        {
            printf("O livro: %s\nDo autor: %s\nFoi encontrado no índice: %d", livro[count].titulo, livro[count].autor, count + 1);
        }
    }
}
