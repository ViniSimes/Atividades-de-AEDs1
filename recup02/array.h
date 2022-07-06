#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void lerArranjo(int arranjo[], int n, char* file)
{
    FILE* arquivo = fopen(file, "rt");

    fscanf(arquivo, "%d", &n);
    for(int i=0; i<n; i++)
    {
        fscanf(arquivo, "%d", &arranjo[i]);
    }

    fclose(arquivo);
}

bool decrescente(int arranjo [], int n)
{
    bool resp = true;
    for(int i=0; i<n-1 && resp; i++)
    {
        resp = (arranjo[i]>=arranjo[i+1]);
    }
    return resp;
}

void ordenar(int arranjo[], int n)
{
    for(int j=0; j<n; j++)
    {
        for(int i=0; i<n-1; i++)
        {
            if(arranjo[i]<arranjo[i+1])
            {
                int aux = arranjo[i];
                arranjo[i] = arranjo[i+1];
                arranjo[i+1] = aux;
            }
        }
    }
}

void gravarArranjo(int arranjo[], int n, char* file)
{
    FILE* arquivo = fopen(file, "wt");

    fprintf(arquivo, "%d\n", n);
    for(int i=0; i<n; i++)
    {
        fprintf(arquivo, "%d\n", arranjo[i]);
    }

    fclose(arquivo);
}
