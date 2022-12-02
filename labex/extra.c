#include <stdio.h>
#include <string.h>

int main()
{
    char frase[100];
    char cebola[100];
    int i,j = 0, letra;
    char k;

    prinf("Digite a frase\n");
    fgets(frase, 100, stdin);

    k = strlen(str);

    for (i=0; i<100; i++){
        if(frase[i] == 'r'|| frase[i] == 'R'){
            switch(frase[i]){
            case 'r':
                 letra = "l"
                break;
                case 'R':
                 letra = "L"
                break;

                default:
                break;
                }

        }
        else {
                c = letra[i];
                cebola[j] = c;
                j++;
        }
    }

    cebola[j] = '\0';
    printf("%s\n", cebola);

    return 0;
}
