#include <stdio.h>
#include <stdlib.h>

/*2. Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos.*/

int main()
{
    int i,v[6];
    for(i=0;i<6;i++)
    {
        printf("Escreva o valor para vetor na posicao %d \n",i);
        scanf("%d",&v[i]);
    }


    for(i=0;i<6;i++)
    {
        printf("\n %d \n",v[i]);
    }
    return 0;
}
