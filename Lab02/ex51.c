#include <stdio.h>
#include <math.h>

int main() {

     float x1, x2,y1,y2, xpot, ypot, dist;
     printf("Digite coordenadas do ponto x: \n");
     scanf("%f %f", &x1, &x2);
     printf ("Digite coordenadas do pontoy: \n");
     scanf("%f %f", &y1, &y2);

     xpot= x1 - x2;
     ypot= y1 - y2;
     dist= sqrt ((xpot*xpot)+(ypot*ypot));

     printf("A distancia dos pontos ate a origem eh %f", dist);
return 0;
}
