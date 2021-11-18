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
    srand(time(NULL)); // Inicializa��o, deve ser chamado uma �nica vez.
    exercicio1();
    return 0;
}

void exercicio1()
{
    /*
    Preencher uma matriz de 10 x 10 posi��es com valores aleat�rios de 15 a 50
    (utilize para cada n�mero a fun��o rand � fa�a uma fun��o que dados os valores
    inicial e final devolva um n�mero aleat�rio dentro deste intervalo)
    Em seguida imprima os �ndices (i,j) da matriz e o valor correspondente,
    na forma de matriz, bem como chame os m�dulos abaixo(0,5)
    */
    printf("\nExerc�cio 1: \n\n");
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

    // Chamando os outros exerc�cios
    // Chamando o exerc�cio 2
    exercicio2(mat);
    // Chamando o exerc�cio 3,recebendo e imprimindo o resultado
    resultado = exercicio3(mat);
    printf("\nA soma dos elementos da diagonal �: %i\n",resultado);
    // Chamando o exerc�cio 4
    exercicio4(mat);
    // Chamando o exerc�cio 5
    printf("\nExerc�cio 5: \n\n");
    // Imprimindo a matriz do exerc�cio 5
    for (i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            printf("mat[%i][%i]=%i    ",i,j,mat[i][j]);
        }
        printf("\n");
    }
    printf("\nDigite um n�mero para verificar se ele est� presente na matriz: ");
    scanf("%i",&num);
    exercicio5(mat,num);
    // Fim da chamada dos outros exerc�cios

    /*
        Entrada           Sa�da Esperada       Sa�da do Programa        Observa��o
           -              Matriz 10x10         Matriz 10x10                 OK
                          com valores          com valores
                          aleat�rios de        aleat�rios de
                          15 a 50              15 a 50
    */
}

void exercicio2(int mat[10][10])
{
    printf("\nExerc�cio 2: \n\n");
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
    // Fazendo as compara��es de maior e menor
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
    printf("\nO maior elemento � o %i e est� na posi��o [%i][%i]\n",maior,iMaior,jMaior);
    printf("O menor elemento � o %i e est� na posi��o [%i][%i]\n\n",menor,iMenor,jMenor);

    /*
        Entrada           Sa�da Esperada            Sa�da do Programa        Observa��o
           -              Maior e menor             Maior e menor                OK
                          elemento da matriz        elemento da matriz
                          bem como sua posi��o      bem como sua posi��o
    */
}

int exercicio3(int mat[10][10])
{
    printf("\nExerc�cio 3: \n\n");
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
        Entrada           Sa�da Esperada            Sa�da do Programa        Observa��o
           -              Soma dos elementos        Soma dos elementos           OK
                          da diagonal principal     da diagonal principal
                          da matriz                 da matriz
    */
}

void exercicio4(int mat[10][10])
{
    printf("\nExerc�cio 4: \n\n");
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
            printf("\nO valor da posi��o [%i][%i] da matriz � %i\n",i,j,valor);
        }
    }

    /*
        Entrada           Sa�da Esperada          Sa�da do Programa        Observa��o
        Uma linha e       Valor naquela           Valor naquela                OK
        uma coluna        posi��o                 posi��o
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
                printf("\nO valor digitado est� na posi��o [%i][%i] da matriz\n",i,j);
                cont=1;
            }
        }
    }
    if (cont==0)
    {
        printf("\nValor n�o encontrado!\n");
    }

    /*
        Entrada           Sa�da Esperada          Sa�da do Programa        Observa��o
        Um n�mero         Posi��o daquele         Posi��o daquele              OK
                          n�mero na matriz        n�mero na matriz
                          ou mensagem de valor    ou mensagem de valor
                          n�o encontrado          n�o encontrado
    */
}

int numaleatorio(int vi, int vf)
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

