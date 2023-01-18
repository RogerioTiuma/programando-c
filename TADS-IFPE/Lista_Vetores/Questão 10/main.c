#include <stdio.h>
#include <stdlib.h>

/*Fac¸a um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule
e imprima a media geral.*/

int main()
{
    int i;
    float vetor[15],soma=0;

    for(i=0;i<15;i++){

    printf("Escreva a nota do aluno %d \n",i+1);
    scanf("%f",&vetor[i]);
    soma = vetor[i]+soma;

    }

    printf("A media geral dos alunos e: %.2f",soma/15);

    return 0;
}
