#include <stdio.h>
#include <stdlib.h>

/*1. Faça um programa que possua um vetor denominado A que armazene 6 numeros inteiros.
O programa deve executar os seguintes passos:

(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma variavel inteira (simples) a soma entre os valores das posições ˜
A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100. ˜
(d) Mostre na tela cada valor do vetor A, um em cada linha*/



int main()
{
    int soma, v[6]={1,0,5,-2,-5,7},i;

    printf("O valor de %d \n",v[0]+v[1]+v[5]);
    v[4]=100;

    for(i=0;i<=5;i++)

    {
        printf("%d \n",v[i]);
    }
    return 0;
}
