#include <stdlib.h>
#include <conio.h>

int main()
{

    int dinheiro;
    int r1=0,r2=0,r5=0,r10=0,r20=0,r50=0,r100=0;


    printf("Digite o Valor: ");
    scanf("%d",&dinheiro);

    do{

        if(dinheiro>=100){
            dinheiro-=100;
            r100++;
        }
        else if(dinheiro>=50){
            dinheiro-=50;
            r50++;
        }
        else if(dinheiro>=20){
            dinheiro-=20;
            r20++;
        }
        else if(dinheiro>=10){
            dinheiro-=10;
            r10++;
        }
        else if(dinheiro>=5){
            dinheiro-=5;
            r5++;
        }
        else if(dinheiro>=2){
            dinheiro-=2;
            r2++;
        }
        else if(dinheiro>=1){
            dinheiro-=1;
            r1++;
        }
    }while(dinheiro!=0);

    printf("\n%d nota(s) de 100 Reais.",r100);
    printf("\n%d nota(s) de 50 Reais.",r50);
    printf("\n%d nota(s) de 20 Reais.",r20);
    printf("\n%d nota(s) de 10 Reais.",r10);
    printf("\n%d nota(s) de 5 Reais.",r5);
    printf("\n%d nota(s) de 2 Reais.",r2);
    printf("\n%d nota(s) de 1 Real.",r1);

return 0;

}

