#include <stdio.h>
#include <stdlib.h>
/*Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos
juntamente com o maior, o menor e a media dos valores.*/


int main()
{
    int menor,maior,i,vetor[5],soma=0;

    for(i=0;i<5;i++)
        {
        printf("Escreva o numero de posicao %d de 5:\n",i+1);
        scanf("%d",&vetor[i]);
        soma = vetor[i]+soma;
        }

    for(i=0;i<5;i++){
        if(i==0){
        maior=vetor[i];
        menor=vetor[i];}
        else{
        if(vetor[i]>maior){
            maior=vetor[i];}

        if(vetor[i]<menor){
            menor = vetor[i];}}
    }

    printf("\n O maior valor digitado foi %d, menor foi %d e a media %f. \n", maior,menor,(float)soma/5);

    return 0;
}
