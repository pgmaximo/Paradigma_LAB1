#include <stdio.h>
main()
{
    float celsius, farenheit;
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);
    farenheit = (celsius * 9 / 5) + 32;

    printf("%.2f graus Celsius equivalem a %.2f graus farenheit.\n", celsius, farenheit);
}
