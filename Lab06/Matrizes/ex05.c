#include <stdio.h>
#include <time.h>

int main ()
{

    int contador [10][10];
    int i, j, m_num=0, busca, certo, coluna, linha;

    for (i=0; i < 5; i++){
        for (j=0; j < 5; j++){
            printf ("Elemento [%d][%d] = ", i, j);
            scanf ("%d", &contador[ i ][ j ]);
        }
    }

    printf("Digite um valor para ser buscado: ");
    scanf("%d", &busca);

    for ( i=0; i < 5; i++ ){
        for ( j=0; j < 5; j++ ){
            printf ("\n Elemento [%d] [%d] = %d ", i, j, contador[ i ][ j ]);

            if (busca == contador[ i ][ j ]){
                certo++;
                coluna = j;
                linha = i;
            }
        }
    }

    return 0;
}
