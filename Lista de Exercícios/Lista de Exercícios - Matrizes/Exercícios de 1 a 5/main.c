#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int numaleatorio(int , int );
void exercicio1();
void exercicio2(int mat[10][10]);
int exercicio3(int mat[10][10]);
void exercicio4(int mat[10][10]);
void exercicio5(int mat[10][10],int );
void menu();

int main()
{
    setlocale(LC_ALL,"portuguese");
    srand(time(NULL)); // Inicialização, deve ser chamado uma única vez.
    exercicio1();
    return 0;
}

void exercicio1()
{
    /*
    Preencher uma matriz de 10 x 10 posições com valores aleatórios de 15 a 50
    (utilize para cada número a função rand – faça uma função que dados os valores
    inicial e final devolva um número aleatório dentro deste intervalo)
    Em seguida imprima os índices (i,j) da matriz e o valor correspondente,
    na forma de matriz, bem como chame os módulos abaixo(0,5)
    */
    printf("\nExercício 1: \n\n");
    int mat[10][10],i,j,resultado,num;
    for (i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            mat[i][j]=numaleatorio(15,50);
        }
    }
    for (i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            printf("mat[%i][%i]=%i    ",i,j,mat[i][j]);
        }
        printf("\n");
    }

    // Chamando os outros exercícios
    // Chamando o exercício 2
    exercicio2(mat);
    // Chamando o exercício 3,recebendo e imprimindo o resultado
    resultado = exercicio3(mat);
    printf("\nA soma dos elementos da diagonal é: %i\n",resultado);
    // Chamando o exercício 4
    exercicio4(mat);
    // Chamando o exercício 5
    printf("\nExercício 5: \n\n");
    // Imprimindo a matriz do exercício 5
    for (i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            printf("mat[%i][%i]=%i    ",i,j,mat[i][j]);
        }
        printf("\n");
    }
    printf("\nDigite um número para verificar se ele está presente na matriz: ");
    scanf("%i",&num);
    exercicio5(mat,num);
    // Fim da chamada dos outros exercícios

    /*
        Entrada           Saída Esperada       Saída do Programa        Observação
           -              Matriz 10x10         Matriz 10x10                 OK
                          com valores          com valores
                          aleatórios de        aleatórios de
                          15 a 50              15 a 50
    */
}

void exercicio2(int mat[10][10])
{
    printf("\nExercício 2: \n\n");
    // Imprimindo a matriz
    for (int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            printf("mat[%i][%i]=%4i   ",i,j,mat[i][j]);
        }
        printf("\n");
    }
    int maior=0,menor=999,iMaior,iMenor,jMaior,jMenor;
    // Fazendo as comparações de maior e menor
    for (int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            if (mat[i][j]>maior)
            {
                maior=mat[i][j];
                iMaior = i;
                jMaior = j;
            }
            if (mat[i][j]<menor)
            {
                menor=mat[i][j];
                iMenor = i;
                jMenor = j;
            }
        }
    }
    printf("\nO maior elemento é o %i e está na posição [%i][%i]\n",maior,iMaior,jMaior);
    printf("O menor elemento é o %i e está na posição [%i][%i]\n\n",menor,iMenor,jMenor);

    /*
        Entrada           Saída Esperada            Saída do Programa        Observação
           -              Maior e menor             Maior e menor                OK
                          elemento da matriz        elemento da matriz
                          bem como sua posição      bem como sua posição
    */
}

int exercicio3(int mat[10][10])
{
    printf("\nExercício 3: \n\n");
    // Imprimindo a matriz
    for (int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            printf("mat[%i][%i]=%4i   ",i,j,mat[i][j]);
        }
        printf("\n");
    }
    // Somando os elementos da diagonal principal
    int soma=0;
    for (int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            if (mat[i]==mat[j])
            {
                soma = soma + mat[i][j];
            }
        }
    }
    return soma;

    /*
        Entrada           Saída Esperada            Saída do Programa        Observação
           -              Soma dos elementos        Soma dos elementos           OK
                          da diagonal principal     da diagonal principal
                          da matriz                 da matriz
    */
}

void exercicio4(int mat[10][10])
{
    printf("\nExercício 4: \n\n");
    int i,j,valor;
    // Imprimindo a matriz
    for (int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            printf("mat[%i][%i]=%4i   ",i,j,mat[i][j]);
        }
        printf("\n");
    }
    // Pegando o valor da linha e coluna digitados
    while(i>=0 && j>=0)
    {
        printf("\nEscreva a linha da matriz(Digite -1 para parar): ");
        scanf("%i",&i);
        printf("Escreva a coluna da matriz(Digite -1 para parar): ");
        scanf("%i",&j);
        for (int a=0; a<10; a++)
        {
            for(int b=0; b<10; b++)
            {
                if (mat[a][b]==mat[i][j])
                {
                    valor = mat[a][b];
                }
            }
        }
        // Imprimindo o valor
        if (i>=0 && j>=0)
        {
            printf("\nO valor da posição [%i][%i] da matriz é %i\n",i,j,valor);
        }
    }

    /*
        Entrada           Saída Esperada          Saída do Programa        Observação
        Uma linha e       Valor naquela           Valor naquela                OK
        uma coluna        posição                 posição
    */
}

void exercicio5(int mat[10][10],int num)
{
    int i,j,cont=0;
    // Comparando o valor digitado com a matriz
    for (i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            if (mat[i][j]==num)
            {
                printf("\nO valor digitado está na posição [%i][%i] da matriz\n",i,j);
                cont=1;
            }
        }
    }
    if (cont==0)
    {
        printf("\nValor não encontrado!\n");
    }

    /*
        Entrada           Saída Esperada          Saída do Programa        Observação
        Um número         Posição daquele         Posição daquele              OK
                          número na matriz        número na matriz
                          ou mensagem de valor    ou mensagem de valor
                          não encontrado          não encontrado
    */
}

int numaleatorio(int vi, int vf)
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

