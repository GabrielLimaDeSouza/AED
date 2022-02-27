#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int numaleatorio(int vi, int vf, int tam);
float * constroiVetor(int n);
void imprimeVetor(float * vet, int n);

int main()
{
    /*
    - Escrever um programa que leia um valor e chame a fun��o e o procedimentos criados.
        - Construa uma fun��o que retorne um vetor real, com valores aleat�rios
        entre 30 e 50 (intervalo fechado), de tamanho N � passe o tamanho N por valor.
        - Construa um procedimento para imprimir um vetor real de tamanho N �
        passe o vetor e o tamanho N por valor
    */
    srand(time(NULL)); // Inicializa��o, deve ser chamado uma �nica vez.
    int n;
    printf("Digite um tamanho: ");
    scanf("%i",&n);
    // Chamando a fun��o para criar o vetor
    float *vet = constroiVetor(n);
    // Chamando a fun��o para imprimir o vetor
    imprimeVetor(vet,n);
    return 0;

    /*
        Entrada       Sa�da esperada           Sa�da do programa         Observa��o
        Tamanho(N)    Vetor de tamanho N       Vetor de tamanho N            OK
        do vetor      com n�meros aleat�rios   com n�meros aleat�rios
                      de 30 a 50               de 30 a 50
     */
}

void imprimeVetor(float * vet,int n)
{
    // Imprimindo o vetor
    for (int i=0;i<n;i++)
    {
        printf("vet[%i]=%.2f\n",i,vet[i]);
    }
}

float * constroiVetor(int n)
{
    float *vet=malloc(sizeof(float)*n);
    // Criando o vetor com n�meros aleat�rios de 30 a 50
    for (int i=0;i<n;i++)
    {
        vet[i]=numaleatorio(30,50,n);
    }
    return vet;
}

int numaleatorio(int vi, int vf, int tam)
{
    int r = vi + (rand() % vf); // retorna um n�mero rand�mico inteiro entre 0 e RAND_MAX
    if (r>=vi && r<=vf)
    {
        return r;
    }
    else
    {
        while(r<vi || r>vf)
        {
            r = (rand() % vf);
        }
        return r;
    }
}
