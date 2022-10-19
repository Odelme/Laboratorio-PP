#include <stdio.h>
#include <stdlib.h>

int main(){
    float raio, pi;

    printf("Digite o valor do raio do circulo:  ");
    scanf("%f", &raio);
    pi = 3.141592;
    printf("A area desse quadrado mede %.2f", pi*(raio*raio));
    return 0;
}
