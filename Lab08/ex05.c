#include <stdio.h>
#include <math.h>

int main() {

    struct vetor {
        float a;
        float b;
        float c;
    };

    struct vetor vtr[2];
    float posX, posY, Vet1=0, Vet2=0;
    int i;

    for (i=0; i<2; i++) {
        printf ("Apresente a coordenada X de um vetor: ");
        scanf("%f", &vtr[i].a);
        printf ("Apresente a coordenada Y de um vetor: ");
        scanf("%f", &vtr[i].b);
        printf ("Apresente a coordenada Z de um vetor: ");
        scanf ("%f", &vtr[i].c);

    }

    Vet1= sqrt(( vtr[0].a * vtr[0].a ) + ( vtr[0].b * vtr[0].b ) + ( vtr[0].c * vtr[0].c ) );
    Vet2= sqrt(( vtr[1].a * vtr[1].a ) + ( vtr[1].b * vtr[1].b ) + ( vtr[1].c * vtr[1].c ) );

    printf ("RESULTADO: %f", Vet1 + Vet2);

    return 0;
}
