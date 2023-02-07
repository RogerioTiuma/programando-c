#include <stdio.h>
#include <stdlib.h>

/*Fac¸a um programa que leia um vetor de 10 posic¸ ˜oes e verifique se existem valores iguais
=======
/*FacÂ¸a um programa que leia um vetor de 10 posicÂ¸ Ëœoes e verifique se existem valores iguais
>>>>>>> 6d33311238b1e2a464b1cdce35940607d0b0cc31
e os escreva na tela.*/

int main()
{
   int i=0,j=0,n=0, tam = 10,vet[tam],aux[tam];

   for(i=0;i<tam;i++)
   {
       printf("Digite o valor da posicao %d de %d \n",i+1,tam);
       scanf("%d",&vet[i]);

     }

   for(i=0;i<tam;i++)
   {
        for(j=0;j<n;j++)
        {
            //Procurando valores iguais varrendo os valores de j
            if(vet[i]==aux[j])
            {
                break;
            }
        }

            if(j == n)
            {
                aux[n]=vet[i];
                n++;
            }

    }


    for(i=0;i<n;i++){
        printf("%d ", aux[i]);}

   printf("\n");

    return 0;

}
