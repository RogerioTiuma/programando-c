#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia 10 numeros inteiros e os armazene em um vetor. Imprima o vetor,
o maior elemento e a posic¸ao que ele se encontra.*/

int main()
{
    int vetor[10],i,maior=0,posicao=0;

    for(i=0;i<=9;i++){
    printf("Digite o numero da posição %d de 10\n",i+1);
    scanf("%d",&vetor[i]);

    if (i==0){
        maior = vetor[i];}

    if (vetor[i]>maior){
        maior = vetor[i];
        posicao = i+1;}

    }

    printf("O maior valor e %d e a posicao e %d:",maior,posicao);

    return 0;
}
