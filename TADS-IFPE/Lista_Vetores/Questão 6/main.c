#include <stdio.h>
#include <stdlib.h>

/*Faca um programa que receba do usuario um vetor com 10 posicoes. Em seguida devera
ser impresso o maior e o menor elemento do vetor.*/

int main()
{
    int menor,maior,i,vetor[10];

    for(i=0;i<=9;i++)
        {
        printf("Escreva o numero de posicao %d de 10:\n",i+1);
        scanf("%d",&vetor[i]);
        }

    for(i=0;i<=9;i++){
        if(i==0){
        maior=vetor[i];
        menor=vetor[i];}
        else{
        if(vetor[i]>maior){
            maior=vetor[i];}

        if(vetor[i]<menor){
            menor = vetor[i];}}
    }

    printf("\n O maior valor digitado foi %d e o menor foi %d. \n", maior,menor);

    return 0;
}
