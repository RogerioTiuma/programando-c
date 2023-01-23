#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
/*Fac¸a um programa que leia um vetor de 10 posic¸ ˜oes e verifique se existem valores iguais
=======
/*FacÂ¸a um programa que leia um vetor de 10 posicÂ¸ Ëœoes e verifique se existem valores iguais
>>>>>>> 6d33311238b1e2a464b1cdce35940607d0b0cc31
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
