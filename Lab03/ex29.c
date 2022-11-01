#include <stdio.h>

int main (){
    int acertos = 0;
    int a,b,soma,resposta;

//pergunta 1
    a = (rand() % 100) + 1;
    b = (rand() % 100) + 1;
    soma = a+b;
    resposta = soma;
    printf("Qual eh a soma de %d + %d?\n",a,b);
    scanf("%d",&resposta);

    if (resposta != soma){
        printf("\nVoce errou!!\nA resposta certa eh: %d\n",soma);
    }
    else{
        acertos ++;
    }

//pergunta 2
    a = (rand() % 100) + 1;
    b = (rand() % 100) + 1;
    soma = a+b;
    resposta = soma;
    printf("\nQual eh a soma de %d + %d?\n",a,b);
    scanf("%d",&resposta);

    if (resposta != soma){
        printf("\nVoce errou!!\nA resposta certa eh: %d\n",soma);
    }
    else{
        acertos ++;
    }

//pergunta 3
    a = (rand() % 100) + 1;
    b = (rand() % 100) + 1;
    soma = a+b;
    resposta = soma;
    printf("\nQual eh a soma de %d + %d?\n",a,b);
    scanf("%d",&resposta);

    if (resposta != soma){
        printf("\nVoce errou!!\nA resposta certa eh: %d\n",soma);
    }
    else{
        acertos ++;
    }

//pergunta 4
    a = (rand() % 100) + 1;
    b = (rand() % 100) + 1;
    soma = a+b;
    resposta = soma;
    printf("\nQual eh a soma de %d + %d?\n",a,b);
    scanf("%d",&resposta);

    if (resposta != soma){
        printf("\nVoce errou!!\nA resposta certa eh: %d\n",soma);
    }
    else{
        acertos ++;
    }

//pergunta 5
    a = (rand() % 100) + 1;
    b = (rand() % 100) + 1;
    soma = a+b;
    resposta = soma;
    printf("\nQual eh a soma de %d + %d?\n",a,b);
    scanf("%d",&resposta);

    if (resposta != soma){
        printf("\nVoce errou!!\nA resposta certa eh: %d\n",soma);
    }
    else{
        acertos ++;
    }

//acertos
    printf("\nVoce teve %d acertos\n",acertos);

return 0;
}

