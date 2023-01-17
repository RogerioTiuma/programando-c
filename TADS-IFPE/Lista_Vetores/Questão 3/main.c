#include <stdio.h>
#include <stdlib.h>

/*3.Ler um conjunto de numeros reais, armazenando-o em vetor e calcular o quadrado das ´
componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos temˆ
10 elementos cada. Imprimir todos os conjuntos*/

int main()
{
    int i, c[10],v[10];

    for(i=0;i<10;i++)
    {
        printf("Escreva o valor do vetor linear na posicao %d \n",i);
        scanf("%d",&c[i]);

        v[i]=c[i]*c[i];
    }

    printf("O vetor linear e: ");
    for(i=0;i<10;i++)
    {
        printf("%d  ",c[i]);
    }

    printf("\n O vetor quadratico e:  ");
    for(i=0;i<10;i++)
    {
        printf("%d  ",v[i]);
    }
}
