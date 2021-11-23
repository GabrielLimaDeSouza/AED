#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int * criaVetor(int valor);
void inverteVetor(int *vet,int tam);

int main()
{
    setlocale(LC_ALL,"portuguese");
    srand(time(NULL));
    int valor,i,*vet;
    // Pedindo o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%i",&valor);
    // Chamando a função que cria o vetor passando o tamanho
    vet = criaVetor(valor);
    // Imprimindo o vetor antes da inversão
    printf("\nVetor antes da inversão:\n\n");
    for (i=0; i<valor; i++)
    {
        printf("vetor[%i]=%i\n",i,vet[i]);
    }
    // Chamando o procedimento que inverte o vetor passando o vetor e o tamanho
    inverteVetor(vet,valor);
    // Imprimindo o vetor depois da inversão
    printf("\nVetor depois da inversão:\n\n");
    for (i=0; i<valor; i++)
    {
        printf("vetor[%i]=%i\n",i,vet[i]);
    }
    return 0;
}

int * criaVetor(int valor)
{
    int *vet,i;
    vet = malloc(sizeof(int)*valor);
    for (i=0; i<valor; i++)
    {
        vet[i]=(rand()%15)+1;
    }
    return vet;
}

void inverteVetor(int *vet,int tam)
{
    int aux,j=tam-1;
    for (int i=0; i<tam; i++)
    {
        if (i<j)
        {
            aux = vet[i];
            vet[i]=vet[j];
            vet[j]=aux;
            j--;
        }
    }
}

