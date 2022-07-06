#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int diferenca(int a, int b)
{
    int resp = a - b;
    if(resp < 0)
    {
        resp = resp *(-1);
    }
    return resp;
}

void tridiagonal(int **matriz, int n)
{
    int aux = 1;
    for(int linha = 0; linha<n; linha++)
    {
        for(int coluna = 0; coluna<n; coluna++)
        {
            if(diferenca(linha, coluna)<=1)
            {
                matriz[linha][coluna] = aux;
                aux++;
            } else 
            {
                matriz[linha][coluna] = 0;
            }
        }
    }
}

void mostrar(int ** matriz, int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void gravar(int ** matriz, int n, char* file)
{
    FILE* arq = fopen(file, "wt");
    fprintf(arq, "%d\n", n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            fprintf(arq, "%d\n", matriz[i][j]);
        }
    }
    fclose(arq);
}
