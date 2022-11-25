#include <stdio.h>

float conversao(float celsius)
{
    int fahrenheit;

    fahrenheit = celsius * (9.0/5.0) + 32;
    return fahrenheit;
}

int main()
{
    int temperatura, fahrenheit;

    printf("Digite a temperatura Celsius que deseja converter para Fahrenheit: ");
    scanf("%d", &temperatura);

    fahrenheit = conversao(temperatura);

    printf("A temperatura em farenheit eh %d", fahrenheit);

return 0;
}
