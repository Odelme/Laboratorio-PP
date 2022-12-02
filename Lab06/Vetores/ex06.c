#include <stdio.h>

int main()
{
  int A[10], resultado = 0;

  for (int i = 0; i < 10; i++){
    printf("Digite um valor que equivale a posicao [%d]: ", i);
    scanf("%d", &A[i]);
  }

  printf("\n");

  for (int i = 0; i < 10; i++){
    for (int j = 2; j <= A[i]/2; j++){
      if (A[i] % j == 0){
        resultado++;
        break;
      }
    }

    if (resultado == 0){
      printf("Posicao [%d] que vale %d eh primo\n", i, A[i]);
    }
  }

  return 0;
}
