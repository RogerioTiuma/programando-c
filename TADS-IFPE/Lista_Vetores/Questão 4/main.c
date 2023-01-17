#include <stdio.h>
#include <stdlib.h>

/*4.Faça um programa que leia um vetor de 8 posições e, em seguida, leia tambem dois va- ´
lores X e Y quaisquer correspondentes a duas posic¸oes no vetor. Ao final seu programa ˜
devera escrever a soma dos valores encontrados nas respectivas posic¸ ´ oes ˜ X e Y .*/


int main()
{
    int i,v[7],posicao1,posicao2;

    for (i=0;i<=7;i++){
        printf("Digite um numero para a posicao %d \n",i+1);
        scanf("%d",&v[i]);}


    printf("\n Escreva uma posicao de 1 a 8: \n");
    scanf("%d",&posicao1);

    printf("\n Escreva outra posicao de 1 a 8: \n");
    scanf("%d",&posicao2);

    printf("O resultado da soma e: %d",v[posicao1-1]+v[posicao2-1]);


    return 0;

}
