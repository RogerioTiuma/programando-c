#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos ˆ
na ordem inversa.*/


int main()
{
    int i,vetor[6];

    for(i=0;i<=5;i++)
    {
    printf("Escreva o valor da posicao %d de 6 \n",i+1);
    scanf("%d",&vetor[i]);
    }

    for(i=5;i>=0;i--)
    {
        printf("\n %d  ",vetor[i]);
    }

    return 0;
}
