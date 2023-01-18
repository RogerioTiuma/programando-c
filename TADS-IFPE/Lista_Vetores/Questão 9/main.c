#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que le 6 valores inteiros pares e, em seguida, mostre na tela os valores ˆ
lidos na ordem inversa*/


   int main()
{
    int i,vetor[6],testepar;

    for(i=0;i<=5;i++)
    {
    do{
    printf("Escreva um valor par para a posicao %d de 6 \n",i+1);
    scanf("%d",&vetor[i]);
    testepar = vetor[i];
    } while((testepar%2)>0);
    }

    for(i=5;i>=0;i--)
    {
        printf("\n %d  ",vetor[i]);
    }

    return 0;
}

