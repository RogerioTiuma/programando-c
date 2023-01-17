#include <stdio.h>
#include <stdlib.h>


/*1. Faça um programa que possua um vetor denominado A que armazene 6 numeros inteiros.
O programa deve executar os seguintes passos:

(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma variavel inteira (simples) a soma entre os valores das posições ˜
A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100. ˜
(d) Mostre na tela cada valor do vetor A, um em cada linha



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
}*\

/*2. Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos.

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
}*/

/*Ler um conjunto de numeros reais, armazenando-o em vetor e calcular o quadrado das ´
componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos temˆ
10 elementos cada. Imprimir todos os conjuntos*/

/*int main()
{
    int i, c[10],v[10];

    for(i=0;i<10;i++)
    {
        printf("Escreva o valor do vetor linear na posicao %d \n",i);
        scanf("%d",&c[i]);

        v[i]=c[i]*c[i];
    }

    printf("O vetor linear e: ");
    for(i=0;i<10;i++)
    {
        printf("%d  ",c[i]);
    }

    printf("\n O vetor quadratico e:  ");
    for(i=0;i<10;i++)
    {
        printf("%d  ",v[i]);
    }
}*/


/*Faça um programa que leia um vetor de 8 posicoes e, em seguida, leia tambem dois va- ´
lores X e Y quaisquer correspondentes a duas posicoes no vetor. Ao final seu programa ˜
devera escrever a soma dos valores encontrados nas respectivas posicoes ˜X e Y.*/


