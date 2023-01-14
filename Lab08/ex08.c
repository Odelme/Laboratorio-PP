#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct
{
    char tipo[4][10]

} Naipe;


typedef struct
{
    Naipe naipe_carta;
    int valor;

} Baralho;

void
main()
{
    int
        random = 0,
        random_naipe = 0;

    Baralho
        baralho;

    srand(time(NULL));

    strcpy(baralho.naipe_carta.tipo[0], "Ouro");
    strcpy(baralho.naipe_carta.tipo[1], "Paus");
    strcpy(baralho.naipe_carta.tipo[2], "Copas");
    strcpy(baralho.naipe_carta.tipo[3], "Espadas");

    printf("O jogador 1 possui as cartas:\n");
    for (int count = 0; count < 3; count++)
    {
        random = (rand() % 9) + 1;
        random_naipe = (rand() % 3) + 1;
        printf("%d de %s\n", random, baralho.naipe_carta.tipo[random_naipe]);
    }

    printf("O jogador 2 possui as cartas:\n");
    for (int count = 0; count < 3; count++)
    {
        random = (rand() % 9) + 1;
        random_naipe = (rand() % 3) + 1;
        printf("%d de %s\n", random, baralho.naipe_carta.tipo[random_naipe]);
    }
}
