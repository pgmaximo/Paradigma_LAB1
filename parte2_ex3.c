#include <stdio.h>
int main()
{
    int valores[10];
    int i, j, temp;
    printf("Digite 10 valores:\n");

    for (i = 0; i < 10; i++)
    {

        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }
    for (i = 0; i < 10 - 1; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (valores[i] < valores[j])
            {

                temp = valores[i];
                valores[i] = valores[j];
                valores[j] = temp;
            }
        }
    }

    printf("\nValores em ordem decrescente:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", valores[i]);
    }
    return 0;
}
