#include <stdio.h>

int ordem = 3;

// função para escrever matriz
void escreverMatriz(int matriz[ordem][ordem])
{
    for (int i = 0; i < ordem; i++)
    {
        for (int j = 0; j < ordem; j++)
        {
            printf("Digite o valor da matriz na posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

// função para imprimir matriz
void printMatriz(int matriz[ordem][ordem])
{
    for (int i = 0; i < ordem; i++)
    {
        for (int j = 0; j < ordem; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// função para somar as matrizes
void somarMatrizes(int matriz1[ordem][ordem], int matriz2[ordem][ordem], int matrizSoma[ordem][ordem])
{
    for (int i = 0; i < ordem; i++)
    {
        for (int j = 0; j < ordem; j++)
        {
            matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

// função para subtrair as matrizes
void subtrairMatrizes(int matriz1[ordem][ordem], int matriz2[ordem][ordem], int matrizSubtracao[ordem][ordem])
{
    for (int i = 0; i < ordem; i++)
    {
        for (int j = 0; j < ordem; j++)
        {
            matrizSubtracao[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
}

// função para multiplicar as matrizes
void multiplicacaoMatrizes(int matriz1[ordem][ordem], int matriz2[ordem][ordem], int matrizMultiplicada[ordem][ordem])
{
    for (int i = 0; i < ordem; i++)
    {
        for (int j = 0; j < ordem; j++)
        {
            matrizMultiplicada[i][j] = 0;
            for (int k = 0; k < ordem; k++)
            {
                matrizMultiplicada[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}
// função para calcular a transposta da matriz
void transpostaMatriz(int matriz1[ordem][ordem], int matriz2[ordem][ordem], int matrizTransposta[ordem][ordem])
{
    int matrizMultiplicada[ordem][ordem];
    multiplicacaoMatrizes(matriz1, matriz2, matrizMultiplicada);
    for (int i = 0; i < ordem; i++)
    {
        for (int j = 0; j < ordem; j++)
        {
            matrizTransposta[i][j] = matrizMultiplicada[j][i];
        }
    }
}

// imprimir opções
void imprimirOpcao()
{
    printf("\nEscolha uma opção:\n");
    printf("1. C = A * B\n");
    printf("2. C = A - B\n");
    printf("3. C = A + B\n");
    printf("4. Transposta da matriz C (C = A * B)\n");
    printf("5. Sair do programa\n");
}

int main(void)
{
    int matriz1[ordem][ordem];
    int matriz2[ordem][ordem];
    int matrizSoma[ordem][ordem];
    int matrizSubtracao[ordem][ordem];
    int matrizMultiplicada[ordem][ordem];
    int matrizTransposta[ordem][ordem];

    printf("Digite os valores da primeira matriz:\n");
    escreverMatriz(matriz1);
    printf("Digite os valores da segunda matriz:\n");
    escreverMatriz(matriz2);

    int opcao;
    do
    {
        imprimirOpcao();
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            multiplicacaoMatrizes(matriz1, matriz2, matrizMultiplicada);
            printf("Matriz C = A * B:\n");
            printMatriz(matrizMultiplicada);
            break;
        case 2:
            subtrairMatrizes(matriz1, matriz2, matrizSubtracao);
            printf("Matriz C = A - B:\n");
            printMatriz(matrizSubtracao);
            break;
        case 3:
            somarMatrizes(matriz1, matriz2, matrizSoma);
            printf("Matriz C = A + B:\n");
            printMatriz(matrizSoma);
            break;
        case 4:
            transpostaMatriz(matriz1, matriz2, matrizTransposta);
            printf("Matriz Transposta da matriz C = A * B:\n");
            printMatriz(matrizTransposta);
            break;
        case 5:
            printf("Saindo do programa...\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
        }
    } while (opcao != 5);

    return 0;
}
