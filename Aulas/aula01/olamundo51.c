#include <stdio.h>
#include <stdlib.h>

void funcao(int vet[], int tam);

int main()
{
    int teste[7];
    int i;

    for(i=0;i<7;i++)
    {
        printf("\n Digite um numero: ");
        scanf("%d",&teste[i]);
    }

    funcao(teste,7);

    printf("\n Mostrando apos a funcao: ");

    for(i=0;i<7;i++)
    {
        printf("\n %d",teste[i]);
    }



    return 0;
}


void funcao(int  vet[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        if (vet[i]%2==0)
        {
            vet[i] = vet[i] * 2;
        }
        else
        {
            vet[i] = vet[i] * 3;
        }
    }
}
