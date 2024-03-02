#include <stdio.h>
#include <math.h>

int main()
{
    int primeiro = 0;
    int segundo = 0;

    printf("Digite o primeiro valor: ");
    scanf("%d", &primeiro);

    printf("\nDigite o segundo valor: ");
    scanf("%d", &segundo);

    int soma = primeiro + segundo;
    int divi = primeiro / segundo;
    int multi = primeiro * segundo;
    float mediaReal = soma / 2;
    int mediaInteira = soma / 2;

    printf("Soma: %d", soma);
    printf("\nDivisão: %d", divi);
    printf("\nMultiplicação: %d", multi);
    printf("\nMedia real: %.2f", mediaReal);
    printf("\nMedia inteira: %d", mediaInteira);

    return 0;
}
