#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;

    printf("Digite um numero:");
    scanf("%d", &num);
    printf("O antecessor eh: %d\nE o sucessor eh: %d\n", num-1, num+1);
}
