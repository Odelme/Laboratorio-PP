#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;

    printf("Digite um numero:");
    scanf("%d", &num);
    printf("A soma do do sucessor de seu triplo com o antecessor de seu dobro eh: %d", (num*3 +1) + (num*2 -1));
    return 0;
}
