#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <stdbool.h>
#define printf __mingw_printf

int vi,vf,i;
void menu();
int numaleatorio(int, int, int);
int calculaFatorial(int vetor[15], int tam, int num, long double *);
void inverteVetor(int vetor[20]);
void exercicio1();
void exercicio2();
void exercicio3();
void exercicio4();
void exercicio5();

int main()
{
    setlocale(LC_ALL,"portuguese");
    srand(time(NULL)); // Inicialização, deve ser chamado uma única vez.
    menu(); // O menu com a escolha do exercício é chamado
    return 0;
}

void exercicio1()
{
    /*1 - Preencher um vetor de 15 posições posições com valores aleatórios de 15 a 50.
    Construir um vetor B do mesmo tipo, em que cada elemento de B deva ser o resultado
    do fatorial correspondente de cada elemento da matriz A.
    Apresentar A e B.*/
    int vetor[15],num,i,tam=15,vi=15,vf=50;
    long double fat=1,vetorB[15];
    for (i=0; i<tam; i++)
    {
        num = numaleatorio(vi,vf,tam);
        vetor[i]= num;
        calculaFatorial(vetor,tam,num,&fat);
        vetorB[i]= fat;
        fat=1;
    }
    //Imprimindo o primeiro vetor gerado aleatoriamente
    printf("\nPrimeiro vetor:\n");
    for (i=0; i<tam; i++)
    {
        printf("vetorA[%i]=%i\n",i,vetor[i]);
    }
    //Imprimindo o segundo vetor com os fatoriais
    printf("\nSegundo vetor: \n");
    for (i=0; i<tam; i++)
    {
        printf("vetorB[%i]=%Le\n",i,vetorB[i]);
    }
    printf("\n");
    /*
        Entrada
     (Número gerado)     Saída Esperada       Saída do Programa        Observação
           48          1.2413915592536E+61   1.2413915592536E+61            OK
           20          2,432902e+18          2,432902e+18                   OK
           38          5,230226e+44          5,230226e+44                   OK
           16          2,092279e+13          2,092279e+13                   OK

        Obs: As saídas esperadas foram calculadas com ajuda de uma calculadora de fatorial
    */
}

void exercicio2()
{
    /* Preencher dois vetores A e B de 15 posições cada com valores aleatórios de vi a vf
    (lidos do teclado). Construir um vetor C, sendo este o resultado da união dos elementos
    de A e B – sem repetição. Apresentar C.
    */
    int vetorA[15],vetorB[15],vi,vf,i,tam=15,num,vetorC[30],j=0,rept;
    printf("Digite um valor inicial para o intervalo: ");
    scanf("%i",&vi);
    printf("Digite um valor final para o intervalo: ");
    scanf("%i",&vf);
    printf("\n");
    // Preenchendo o vetor A
    for (i=0; i<tam; i++)
    {
        num = numaleatorio(vi,vf,tam);
        vetorA[i]= num;
        printf("vetorA[%i] = %i\n",i,vetorA[i]);
    }
    printf("\n");
    // Preenchendo o vetor B
    for (i=0; i<tam; i++)
    {
        num = numaleatorio(vi,vf,tam);
        vetorB[i]= num;
        printf("vetorB[%i] = %i",i,vetorB[i]);
        printf("\n");
    }
    printf("\n");
    // Preenchendo o vetor C, sem considerar os valores iguais por enquanto
    for (int i = 0; i < 15; i++)
    {
        vetorC[i] = vetorA[i];
    }
    for (int j = 0; j < 15; j++)
    {
        vetorC[j + 15] = vetorB[j];
    }
    printf("Preenchendo o vetor C com a união: \n\n");
    // Comparando se tem valor igual e imprimindo o vetor C sem repetição
    for (i=0; i<30; i++)
    {
        rept = false;
        for (j = 0; j < i; j++)
        {
            if (vetorC[i] == vetorC[j])
            {
                rept = true;
                break;
            }
        }
        if (!rept)
        {
            printf("vetorC[%i]=%i\n",i,vetorC[i]);
        }
    }
    printf("\n");
    /*
        Entrada        Saída Esperada                Saída do Programa          Observação
      Um intervalo     Os números presentes          Os números presentes           OK
                       nos dois vetores              nos dois vetores
                       aleatórios, escritos          aleatórios, escritos
                       no vetorC sem repetição       no vetorC sem repetição
    */
}

void exercicio3()
{
    /*
    Preencher um vetor A de 20 elementos com valores aleatórios de vi a vf
    (lidos do teclado), em seguida crie um procedimento que inverta os elementos
    armazenados. Ou seja, o primeiro elemento de A passará a ser o ultimo, o segundo
    elemento passará a ser o penúltimo e assim por diante. Apresentar A.
    */
    int vetorA[20],i,tam=20,num,vi,vf;
    printf("Digite um valor inicial para o intervalo: ");
    scanf("%i",&vi);
    printf("Digite um valor final para o intervalo: ");
    scanf("%i",&vf);
    printf("\nVetor antes da inversão:\n\n");
    // Cria e imprime o vetor antes da inversão
    for (i=0; i<tam; i++)
    {
        num = numaleatorio(vi,vf,tam);
        vetorA[i]= num;
        printf("vetorA[%i]=%i\n",i,vetorA[i]);
    }
    inverteVetor(vetorA); // Chama a função que inverte o vetor
    printf("\n");
    /*
        Entrada        Saída Esperada       Saída do Programa        Observação
      Um intervalo     Inversão do vetor    Inversão do vetor            OK
                       aleatório gerado     aleatório gerado
    */
}

void exercicio4()
{
    /*
    Preencher um vetor A de x elementos (x deverá ser lido do teclado) com
    valores aleatórios de vi a vf (lidos do teclado) . Crie um vetor ParImpar
    de 2 posições e armazene no índice 0 quantos elementos de A são par e no índice 1
    quantos elementos de A são ímpar. Apresentar o vetor ParImpar.
    Obs.: não utilize nenhum comando condicional(if,switch).
    */
    int x,i,vi,vf,parImpar[2],num,par=0,impar=0,z,y;
    printf("\nDigite a quantidade de elementos do vetor: ");
    scanf("%i",&x);
    int vetorA[x];
    printf("Digite um valor inicial para o intervalo: ");
    scanf("%i",&vi);
    printf("Digite um valor final para o intervalo: ");
    scanf("%i",&vf);
    // Cria e imprime o vetor criado
    printf("\nApresentando o vetor criado:\n\n");
    for (i=0; i<x; i++)
    {
        num = numaleatorio(vi,vf,x);
        vetorA[x]= num;
        printf("vetorA[%i]=%i\n",i,vetorA[x]);
        z = vetorA[x]; // Realiza as comparações e adiciona a quantidade as variáveis ímpar e par
        z = (z%2==0);
        par = par + z;
        y = vetorA[x];
        y = (y%2==1);
        impar = impar + y;
    }
    // Adicionando a quantidade de pares e ímpares ao vetor parImpar
    parImpar[0] = par;
    parImpar[1] = impar;
    // Imprimindo vetor parImpar
    for (i=0; i<2; i++)
    {
        printf("\nParImpar[%i]=%i\n",i,parImpar[i]);
    }
    printf("\n");
    /*
        Entrada        Saída Esperada       Saída do Programa        Observação
      Quantidade de    Quantidade de        Quantidade de                OK
      elementos e      números pares e      números pares e
      um intervalo     ímpares              ímpares

    */
}

void exercicio5()
{
    /*
    Preencher um vetor A de 10 elementos com valores aleatórios de vi a vf
    (lidos do teclado).Ordene e imprima o vetor A.
    */
    int vi,vf,tam=10,vetorA[10],num,i,aux;
    printf("\nDigite um valor inicial para o intervalo: ");
    scanf("%i",&vi);
    printf("Digite um valor final para o intervalo: ");
    scanf("%i",&vf);
    // Preenchendo e imprimindo o vetor
    printf("\nVetor gerado: \n\n");
    for (i=0; i<tam; i++)
    {
        num = numaleatorio(vi,vf,tam);
        vetorA[i]= num;
        printf("vetorA[%i]=%i\n",i,vetorA[i]);
    }
    printf("\n");
    // Ordenando vetor
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            if (vetorA[i] < vetorA[j])
            {
                aux = vetorA[i];
                vetorA[i] = vetorA[j];
                vetorA[j] = aux;
            }
        }
    }
    // Imprimindo vetor
    printf("Vetor ordenado: \n\n");
    for (i=0; i<tam; i++)
    {
        printf("vetorA[%i]=%i\n",i,vetorA[i]);
    }
    printf("\n");
    /*
      Entrada        Saída Esperada       Saída do Programa        Observação
      Um intervalo   Vetor gerado         Vetor gerado                 OK
                     aleatoriamente e     aleatoriamente e
                     o mesmo vetor        o mesmo vetor
                     apresentado de       apresentado de
                     forma ordenada       forma ordenada
    */
}

void inverteVetor(int vetorA[20])
{
    int tam=20,i,j,vetorB[20];
    // Inverte e imprime o vetor invertido
    printf("\nVetor depois da inversão:\n\n");
    for (i=0,j=19; i<tam; i++,j--)
    {
        vetorB[i]=vetorA[j];
        printf("VetorA[%i]=%i\n",i,vetorB[i]);
    }
}

int calculaFatorial(int vetor[15], int tam, int num, long double *fat)
{
    int i;
    i = num;
    for (int j=num; j>0; j--)
    {
        *fat = *fat * i;
        i--;
    }
    return 0;
}

int numaleatorio(int vi, int vf, int tam)
{

    int r = vi + (rand() % vf); // retorna um número randômico inteiro entre 0 e RAND_MAX
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

void menu()
{
    int opcao;
    do
    {
        printf("-------------------------------\n");
        printf("0 - Sair\n");
        printf("1 - Exercício 1\n");
        printf("2 - Exercício 2\n");
        printf("3 - Exercício 3\n");
        printf("4 - Exercício 4\n");
        printf("5 - Exercício 5\n");
        printf("-------------------------------\n");
        printf("\nDigite um exercício: ");
        scanf("%i",&opcao);
        switch (opcao)
        {
        case(1):
            exercicio1();
            break;
        case(2):
            exercicio2();
            break;
        case(3):
            exercicio3();
            break;
        case(4):
            exercicio4();
            break;
        case(5):
            exercicio5();
            break;
        }
    }
    while (opcao!=0);
}
