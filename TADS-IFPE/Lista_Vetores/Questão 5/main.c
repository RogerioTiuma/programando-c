#include <stdio.h>
#include <stdlib.h>

/*Leia um vetor de 10 posic¸oes. Contar e escrever quantos valores pares ele possui.*/


int main()
{
    int i,u=0,contagempar=0,vetor[9],pares[9];

    for(i=0;i<9;i++)
    {
        printf("Escreva o numero %d de 10 para verificarmos quantos sao pares: \n",i+1);
        scanf("%d",&vetor[i]);

        if (vetor[i]%2==0)
        {
            contagempar++;
            pares[u]=vetor[i];
            u++;
        }
    }
    printf("\n A quantidade de numeros pares sao: %d",contagempar);
    printf("\n Esses numeros sao:");

    for(u=0;u<=(contagempar-1);u++)
    {
        printf(" %d ",pares[u]);
    }
    return 0;
}
