#include <stdio.h>
#include <math.h>

int main() {
        int seg,mim,hora,dur, finh, fins, finm, hf, mf, sf;
        // leitura das informações
        printf("Digite o horario informando as horas, os minutis e os segundos:\n");
        scanf("%d\n %d\n %d", &hora, &mim, &seg);
        printf("Qual a duracao da experiencia em segundos: ");
        scanf ("%d", &dur);
        //cauculos
        finh= dur/3600;
        finm= (dur%3600) / 60;
        fins= (dur%3600)%60;
        hf= hora + finh;
        mf= finm + mim;
        sf= fins + seg;
        //resultados
        printf("A experiencia terminara as %dh %dmin %ds", hf, mf, sf);
        return 0;
}
