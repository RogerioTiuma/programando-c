#include <stdio.h>
#include <stdlib.h>

/*Fac¸a um programa que preencha um vetor com 10 numeros reais, calcule e mostre a ´
quantidade de numeros negativos e a soma dos n ´ umeros positivos desse vetor. */


int main()
{
    int i;
    float vetor[10],soma=0,contnegativo=0;

    for(i=0;i<10;i++){

    printf("Digite um numero real de posicao %d de 10 \n",i+1);
    scanf("%f",&vetor[i]);

    if(vetor[i]<0)
    {
        contnegativo++;
    }
    if(vetor[i]>0)
    {
        soma = vetor[i]+soma;
    }

    }
    printf("A quantidade de numeros negativo e %.2f e a soma dos numeros positivos e %.2f ", contnegativo,soma);
    return 0;

}
