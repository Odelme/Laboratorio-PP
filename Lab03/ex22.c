#include <stdio.h>

int main (){
    int idade, tempo;

    printf("Qual a idade do trabalhador?\n");
    scanf("%d", &idade);
    printf("Quanto tempo de trabalho?\n");
    scanf("%d", &tempo);

    if (idade >= 65 || tempo >=30){
        printf("Voce pode se aposentar!");
    }
    else{
        if (idade >=60 && tempo >= 25){
            printf("Voce pode se aposentar!");
        }
        else {
             printf("Voce ainda nao pode se aposentar!");
        }
    }
return 0;
}
