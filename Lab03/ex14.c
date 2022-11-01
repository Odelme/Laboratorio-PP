#include <stdio.h>
#include <math.h>

int main (){
    float a,b,c,media;

 	printf("Digite a nota do trabalho de laboratorio: ");
	scanf("%f", &a);
 	printf("Digite a nota da avaliacão semestral: ");
	scanf("%f", &b);
 	printf("Digite a nota do exame final: ");
	scanf("%f", &c);

    media = (a*2 + b*3 + c*5)/10;

    if (a<0 || a>10 || b<0 || b>10 || c<0 || c >10){
        printf("Valor invalido!!");
    }

    else{
        if (media >= 0 && media < 3){
            printf("O aluno esta reprovado");
        }
        if (media >=3 && media <5 ){
            printf("O aluno esta de recuperacao!!");
        }
        if (media >=5 && media<=10){
            printf("Aluno aprovado!!");
        }
        }

    return 0;
}
