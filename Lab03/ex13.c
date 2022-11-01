#include <stdio.h>
#include <math.h>

int main (){
 	float a,b,c,media;

 	printf("Digite a primeira nota: ");
	scanf("%f", &a);
 	printf("Digite a segunda nota: ");
	scanf("%f", &a);
 	printf("Digite a terceira nota: ");
	scanf("%f", &a);

    media = (a*1 + b*1 + c*2)/4;

    if (media >= 60){
        printf("Aluno aprovado!!");
    }
    else {
        printf("Aluno reprovado!!");
    }
    return 0;
}
