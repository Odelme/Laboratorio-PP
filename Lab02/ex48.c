#include <stdio.h>

int main (){
  int seg, min, hor;
        printf("Informe o tempo em segundos ");
        scanf("%d", &seg);
        hor= seg / 3600;
        min=(seg-(hor*3600))/60;
        seg= seg- (hor*3600)-(min*60);

        printf("Esse valor em horas eh %dh\nMinutos eh %dmin\nE segundos eh %ds\n", hor, min, seg);


    return 0;
}
