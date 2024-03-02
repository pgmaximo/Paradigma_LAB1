#include <stdio.h>

int main() {
    int aumentoVendas = 50;
    int dia = 31;
    int mes = 12;
    int ano = 2000;
    float capital = 50000000.00;
    char barraPasta1 = '/';
    char barraPasta2 = '\\';

    printf("a) Vendemos %d%% a mais que no ano passado.\n", aumentoVendas);
    printf("b) Em %d/%d/%d nosso capital era de R$ %.2f.\n", dia, mes, ano, capital);
    printf("c) A barra utilizada para pastas seria '%c' ou '%c'?\n", barraPasta1, barraPasta2);

    return 0;
}