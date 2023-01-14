#include <stdlib.h>
#include <string.h>

int main () {

    struct horario {
        int hora, minutos, segundos;
    };

    struct data {
        int dia, mes, ano;
    };

    struct compromisso {
        int dat2, horario;
        char texto[500];
    };

    struct horario hor;
    struct data dat3;
    struct compromisso com;

    printf ("Apresente um horario. (hora, minutos e segundos): ");
    scanf ("%d %d %d", &hor.hora, &hor.minutos, &hor.segundos);

    printf ("\nApresente uma data (dia, mes e ano): ");
    scanf ("%d %d %d", &dat3.dia, &dat3.mes, &dat3.ano);

    printf("\nApresente uma data e um horario: ");
    scanf("%d %d", &com.dat2, &com.horario);
    fflush(stdin);
    printf ("Apresente um compromisso: ");
    fgets (com.texto, 500, stdin);

    printf ("\n\nHorario: %d %d %d", hor.hora, hor.minutos, hor.segundos);
    printf("\n\nData: %d %d %d ", dat3.dia, dat3.mes, dat3.ano);
    printf("\n\nCompromisso: %d %d \n%s", com.dat2, com.horario, com.texto);

    return 0;
}
