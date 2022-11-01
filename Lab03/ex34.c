#include <stdio.h>

int main (){
  int falta;
  float nota;

  printf("Qual a nota: ");
  scanf("%f", &nota);
  printf("Qual o numero de faltas: ");
  scanf("%d", &falta);

//ate 20 faltas
    if (falta <= 20){
        //9.0 ate 10.0
        if (nota >=9.0 && nota <=10.0){
            printf("Seu conceito eh A\n");
        }
        //7.5 ate 8.9
        else if (nota >=7.5 && nota < 9){
            printf("Seu conceito eh B\n");
        }
        //5.0 ate 7.4
        else if (nota >= 5.0 && nota < 7.5 ){
            printf("Seu conceito eh C\n");
        }
        //4.0 ate 4.9
        else if (nota >= 4.0 && nota < 5.0){
            printf("Seu conceito eh D\n");
        }
        //0.0 até 3.9
        else if (nota >= 0.0 && nota < 4.0){
            printf("Seu conceito eh E\n");
        }
    }
//mais de 20 faltas
    if (falta > 20){
        //9.0 ate 10.0
        if (nota >=9.0 && nota <=10.0){
            printf("Seu conceito eh B\n");
        }
        //7.5 ate 8.9
        else if (nota >=7.5 && nota < 9){
            printf("Seu conceito eh C\n");
        }
        //5.0 ate 7.4
        else if (nota >= 5.0 && nota < 7.5 ){
            printf("Seu conceito eh D\n");
        }
        //4.0 ate 4.9
        else if (nota >= 4.0 && nota < 5.0){
            printf("Seu conceito eh E\n");
        }
        //0.0 até 3.9
        else if (nota >= 0.0 && nota < 4.0){
            printf("Seu conceito eh E\n");
        }
    }
return 0;
}
