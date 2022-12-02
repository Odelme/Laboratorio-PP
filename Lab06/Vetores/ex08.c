#include<stdio.h>

int main()
{
	int valor[10];
	int i, j;

	for(i = 0; i < 10; i++) {

        printf("Digite um valor que equivale a posicao [%d]: ", i);
		scanf("%d", &valor[i]);

		for(j = 0; j < i; j++) {
            if(valor[i] == valor[j]) {
                printf("\nNumero repetido, digite outro valor\n");
                i--;
		    }
        }
	}

    printf("\nvetor[10] = ");

	for(int i = 0; i < 10; i++) {
		printf("[%d] ", valor[i]);
	}

	return 0;
}
