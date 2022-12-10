#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz_busca [5][5];
    int i, j, m_num=0, busca, certo, coluna, linha;

    for (i=0; i < 5; i++){
        for (j=0; j < 5; j++){
            printf ("Elemento [%d][%d] = ", i, j);
            scanf ("%d", &matriz_busca[ i ][ j ]);
        }
    }

    printf("\nDigite um valor para ser buscado: ");
    scanf("%d", &busca);

    for ( i=0; i < 5; i++ ){
        for ( j=0; j < 5; j++ ){
            printf ("\n Elemento [%d] [%d] = %d ", i, j, matriz_busca[ i ][ j ]);

            if (busca == matriz_busca[ i ][ j ]){
                certo++;
                coluna = j;
                linha = i;
            }
        }
    }

    if (busca > 0)
    printf("\nO numero %d esta na linha [%d] e coluna [%d]", busca, linha, coluna);

    else
    printf("\nNao encontrado!");

    return 0;
}
