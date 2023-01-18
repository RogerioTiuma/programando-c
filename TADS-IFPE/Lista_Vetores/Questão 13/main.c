#include <stdio.h>
#include <stdlib.h>
/*Fazer um programa para ler 5 valores e, em seguida, mostrar a posic¸ao onde se encon- ˜
tram o maior e o menor valor.
*/

int main()
{
    int menor,maior,i,vetor[5],posicaomaior=0,posicaomenor=0;

    for(i=0;i<5;i++)
        {
        printf("Escreva o numero de posicao %d de 5:\n",i+1);
        scanf("%d",&vetor[i]);
        }

    for(i=0;i<5;i++){
        if(i==0){
        maior=vetor[i];
        menor=vetor[i];}
        else{
        if(vetor[i]>maior){
            maior=vetor[i];
            posicaomaior=i+1;}

        if(vetor[i]<menor){
            menor = vetor[i];
            posicaomenor=i+1;}}
    }

    printf("\n A posicao do maior valor digitado e %d e a posicao do menor e %d. \n", posicaomaior,posicaomenor);

    return 0;
}
