#include <stdio.h>

int main (){

    float salario,novo_sal;
     int tempo;

     printf("Digite o tempo de serviço em meses: ");
     scanf("%d", &tempo);
     printf("Digite o salario atual: ");
     scanf("%f", &salario);

//salario ate 500
     if (salario <= 500){
        if (tempo < 12){
            novo_sal = salario + (salario*0.25);
            printf("Seu salario sera de: R$%.2f", novo_sal);
        }
        else if (tempo >= 12 && tempo <= 36){
            novo_sal = salario + (salario*0.25) + 100;
            printf("Seu salario sera de: R$%.2f", novo_sal);
        }
        else if (tempo > 36 && tempo <= 72){
            novo_sal = salario + (salario*0.25) + 200;
            printf("Seu salario sera de: R$%.2f", novo_sal);
        }
        else if (tempo > 72 && tempo <= 120){
            novo_sal = salario + (salario*0.25) + 300;
            printf("Seu salario sera de: R$%.2f", novo_sal);
        }
        else if (tempo > 120){
            novo_sal = salario + (salario*0.25) + 500;
            printf("Seu salario sera de: R$%.2f", novo_sal);
        }
     }
//salario ate 1000
     else if (salario > 500 && salario <= 1000){
        if (tempo < 12){
            novo_sal = salario + (salario*0.20);
            printf("Seu salario sera de: R$%.2f", novo_sal);
        }
        else if (tempo >= 12 && tempo <= 36){
            novo_sal = salario + (salario*0.20) + 100;
            printf("Seu salario sera de: R$%.2f", novo_sal);
        }
        else if (tempo > 36 && tempo <= 72){
            novo_sal = salario + (salario*0.20) + 200;
            printf("Seu salario sera de: R$%.2f", novo_sal);
        }
        else if (tempo > 72 && tempo <= 120){
            novo_sal = salario + (salario*0.20) + 300;
            printf("Seu salario sera de: R$%.2f", novo_sal);
        }
        else if (tempo > 120){
            novo_sal = salario + (salario*0.20) + 500;
            printf("Seu salario sera de: R$%.2f", novo_sal);
        }
     }
//salario ate 1500
     else if (salario > 1000 && salario <= 1500){
        if (tempo < 12){
            novo_sal = salario + (salario*0.15);
            printf("Seu salario sera de: R$%.2f", novo_sal);
        }
        else if (tempo >= 12 && tempo <= 36){
            novo_sal = salario + (salario*0.15) + 100;
            printf("Seu salario sera de: R$%.2f", novo_sal);
        }
        else if (tempo > 36 && tempo <= 72){
            novo_sal = salario + (salario*0.15) + 200;
            printf("Seu salario sera de: R$%.2f", novo_sal);
        }
        else if (tempo > 72 && tempo <= 120){
            novo_sal = salario + (salario*0.15) + 300;
            printf("Seu salario sera de: R$%.2f", novo_sal);
        }
        else if (tempo > 120){
            novo_sal = salario + (salario*0.15) + 500;
            printf("Seu salario sera de: R$%.2f", novo_sal);
        }
     }
//salario ate 2000
     else if (salario > 1500 && salario <= 2000){
        if (tempo < 12){
            novo_sal = salario + (salario*0.10);
            printf("Seu salario sera de: R$%.2f", novo_sal);
        }
        else if (tempo >= 12 && tempo <= 36){
            novo_sal = salario + (salario*0.10) + 100;
            printf("Seu salario sera de: R$%.2f", novo_sal);
        }
        else if (tempo > 36 && tempo <= 72){
            novo_sal = salario + (salario*0.10) + 200;
            printf("Seu salario sera de: R$%.2f", novo_sal);
        }
        else if (tempo > 72 && tempo <= 120){
            novo_sal = salario + (salario*0.10) + 300;
            printf("Seu salario sera de: R$%.2f", novo_sal);
        }
        else if (tempo > 120){
            novo_sal = salario + (salario*0.10) + 500;
            printf("Seu salario sera de: R$%.2f", novo_sal);
        }
     }
//salario acima de 2000
     else if (salario > 2000){
        if (tempo < 12){
            novo_sal = salario;
            printf("Seu salario sera de: R$%.2f", novo_sal);
        }
        else if (tempo >= 12 && tempo <= 36){
            novo_sal = salario + 100;
            printf("Seu salario sera de: R$%.2f", novo_sal);
        }
        else if (tempo > 36 && tempo <= 72){
            novo_sal = salario + 200;
            printf("Seu salario sera de: R$%.2f", novo_sal);
        }
        else if (tempo > 72 && tempo <= 120){
            novo_sal = salario + 300;
            printf("Seu salario sera de: R$%.2f", novo_sal);
        }
        else if (tempo > 120){
            novo_sal = salario + 500;
            printf("Seu salario sera de: R$%.2f", novo_sal);
        }
     }

return 0;
}

