#include <stdio.h>
#include <stdlib.h>

/*Fac¸a um programa que leia um vetor de 10 posic¸ ˜oes e verifique se existem valores iguais
e os escreva na tela.*/

int main()
{
   int i,j, tam = 10,vet[tam];

   for(i=0;i<tam;i++)
   {
       printf("Digite o valor da posicao %d de %d \n",i+1,tam);
       scanf("%d",&vet[i]);
   }

   for(i=0;i<tam;i++){
        for(j=i+1;j<tam;j++){
            if(vet[i]==vet[j]){
                printf("O valor %d esta repetido na posicao %d e %d \n",vet[i],i+1,j);

            }

        }

   }
    return 0;

}
