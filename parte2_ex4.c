#include <stdio.h>
#include <stdlib.h>

typedef enum areaProjeto
{
    marketing,
    operacional,
    inovacao
} AreaProjeto;

typedef struct Projeto
{
    char nome[50];
    AreaProjeto area;
    float valorTotal;
    char data[10];
    int duracaoMeses;
} Projeto;

void cadastrar(Projeto *projetos, int *nProjetos)
{
    printf("Nome do projeto: ");
    scanf(" %[^\n]%*c", projetos[*nProjetos].nome);

    int opcaoArea;
    do
    {
        printf("Digite a area ( 1 - Marketing, 2 - Operacional, 3 - Inovacao\n");
        scanf("%d", &opcaoArea);
    } while (opcaoArea < 1 || opcaoArea > 3);
    projetos[*nProjetos].area = opcaoArea - 1;

    printf("Valor Total do projeto: ");
    scanf("%f", &projetos[*nProjetos].valorTotal);

    printf("Data de inicio do projeto (dd/mm/aaaa): ");
    scanf("%s", &projetos[*nProjetos].data);

    printf("Duracao prevista em meses: ");
    scanf("%d", &projetos[*nProjetos].duracaoMeses);

    (*nProjetos)++;
}

void consultar(Projeto *projetos, int nProjetos)
{
    char nomeProjeto[50];
    int i;

    printf("Digite o nome do projeto: ");
    scanf("%s", nomeProjeto);

    for (i = 0; i <= nProjetos; i++)
    {
        if (strcmp(projetos[i].nome, nomeProjeto) == 0)
        {
            printf("\n** consulta de projeto **");
            printf("\nNome: %s\n", projetos[i].nome);

            // converter enum area em string
            char *areaStr;
            switch (projetos[i].area)
            {
            case marketing:
                areaStr = "Marketing";
                break;
            case operacional:
                areaStr = "Operacional";
                break;
            case inovacao:
                areaStr = "Inovacao";
                break;
            }

            printf("Area: %s\n", areaStr);
            printf("Valor total: R$ %.2f\n", projetos[i].valorTotal);
            printf("Data de inicio: %s\n", projetos[i].data);
            printf("Duracao: %d meses\n\n", projetos[i].duracaoMeses);
            break;
        }
        if (i == nProjetos)
        {
            printf("\nProjeto nao encontrado!\n\n");
        }
    }
}

int main()
{
    Projeto projetos[100];
    int nProjetos = 0;
    int opcao;

    do
    {
        printf("Digite 1 para cadastrar um projeto novo\n");
        printf("Digite 2 para consultar um projeto existente\n");
        printf("Digite 3 para sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            cadastrar(projetos, &nProjetos);
            break;
        case 2:
            consultar(projetos, nProjetos);
            break;
        case 3:
            printf("Saindo do programa\n");
            break;
        default:
            printf("Opcao invalida\n");
        }
    } while (opcao != 3);

    return 0;
}
