#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void menu();
void exercicioA();
void exercicioB();
void exercicioC();
void exercicioD();
void exercicioE();

int main()
{
    setlocale(LC_ALL,"portuguese");
    menu();
    return 0;
}

void exercicioA()
{
    /*
    Fazer um programa com um menu para:
    a) - gravar em um arquivo os 64 primeiros valores da s�rie: 1 1 2 3 5 8 13 21 34 . . .
    */
    FILE * arquivo;
    if ((arquivo=fopen("serie.txt","w"))==NULL)
    {
        printf("Ocorreu um erro na abertura!\n");
    }
    else
    {
        int num=64;
        double n2=1,n1=1,n3,fibo=0;
        fprintf(arquivo,"%.0f",n1);
        fprintf(arquivo,"\n");
        fprintf(arquivo,"%.0f",n2);
        fprintf(arquivo,"\n");
        while (fibo<(num-2))
        {
            n3 = n1+n2;
            fprintf(arquivo,"%.0f",n3);
            fprintf(arquivo,"\n");
            n1 = n2;
            n2 = n3;
            fibo = fibo + 1;
        }
        fclose(arquivo);
        printf("\nS�rie de 64 primeiros termos de Fibonacci gerada com sucesso no arquivo ""serie.txt""!\n");
    }
    /*
        Entrada    Sa�da esperada            Sa�da do programa        Observa��o
           -       64 primeiros termos       64 primeiros termos          OK
                   da s�rie de Fibonacci     da s�rie de Fibonacci
                   gerada no arquivo         gerada no arquivo
                   serie.txt                 serie.txt
    */
}

void exercicioB()
{
    /*
    Fazer um programa com um menu para:
    b) - ler o arquivo letra A e armazenar os dados em uma matriz 8 x 8,imprima essa matriz na tela
    */
    FILE *f;
    double num,mat[8][8];
    if ((f=fopen("serie.txt","r"))==NULL)
    {
        printf("Ocorreu um erro na abertura\n");
    }
    else
    {
        for (int i=0; i<8; i++)
        {
            for (int j=0; j<8; j++)
            {
                fscanf(f,"%lf",&num);
                mat[i][j]=num;
            }
        }
        fclose(f);
    }
    for (int i=0; i<8; i++)
    {
        for (int j=0; j<8; j++)
        {
            printf("%14.0lf ",mat[i][j]);
        }
        printf("\n");
    }
    /*
        Entrada    Sa�da esperada          Sa�da do programa        Observa��o
           -       Matriz 8x8 com os       Matriz 8x8 com os            OK
                   dados da letra A        dados da letra A
    */
}

void exercicioC()
{
    /*
    Fazer um programa com um menu para:
    c) - ler o arquivo letra a e armazenar os dados em uma matriz 8 x 8
    armazene essa matriz em um arquivo.
    */
    FILE *f,*novo;
    double num,mat[8][8];
    if ((f=fopen("serie.txt","r"))==NULL)
    {
        printf("Ocorreu um erro na abertura\n");
    }
    else
    {
        if ((novo=fopen("letraC.txt","w"))==NULL)
        {
            printf("Ocorreu um erro na abertura!\n");
        }
        else
        {
            for (int i=0; i<8; i++)
            {
                for (int j=0; j<8; j++)
                {
                    fscanf(f,"%lf",&num);
                    mat[i][j]=num;
                }
            }
            for (int i=0; i<8; i++)
            {
                int quebralinha=0;
                for (int j=0; j<8; j++)
                {
                    if (quebralinha!=7)
                    {
                        fprintf(novo,"%.0lf   ",mat[i][j]);
                    }
                    else
                    {
                        fprintf(novo,"%.0lf   \n",mat[i][j]);
                    }
                    quebralinha++;
                }
            }
        }
    }
    fclose(f);
    fclose(novo);
    printf("Matriz gerada no arquivo letraC.txt com sucesso!\n");
    /*
        Entrada    Sa�da esperada          Sa�da do programa        Observa��o
           -       Matriz 8x8 com os       Matriz 8x8 com os            OK
                   dados da letra A        dados da letra A
                   armazenados no          armazenados no
                   arquivo letraC.txt      arquivo letraC.txt
    */
}

void exercicioD()
{
    /*
    Fazer um programa com um menu para:
    d) - ler o arquivo letra a e armazenar os valores pares em um arquivo
    e os impares em outro arquivo
    */
    FILE *f,*impar,*par;
    double num;
    if ((f=fopen("serie.txt","r"))==NULL)
    {
        printf("Ocorreu um erro na abertura\n");
    }
    else
    {
        if ((par=fopen("pares.txt","w"))==NULL)
        {
            printf("Ocorreu um erro na abertura!\n");
        }
        else
        {
            if ((impar=fopen("impares.txt","w"))==NULL)
            {
                printf("Ocorreu um erro na abertura!\n");
            }
            else
            {
                for (int i=0; i<64; i++)
                {
                    fscanf(f,"%lf",&num);
                    if (fmod(num,2)==0)
                    {
                        fprintf(par,"%.0lf\n",num);
                    }
                    else
                    {
                        fprintf(impar,"%.0lf\n",num);
                    }
                }
            }
        }
    }
    fclose(f);
    fclose(par);
    fclose(impar);
    printf("Os n�meros pares do arquivo da letra A foram gravados em ""pares.txt""\n");
    printf("Os n�meros �mpares do arquivo da letra A foram gravados em ""impares.txt""\n");
    /*
        Entrada    Sa�da esperada            Sa�da do programa            Observa��o
           -       Os n�meros �mpares        Os n�meros �mpares               OK
                   da s�rie gerada na        da s�rie gerada na
                   letra A foram salvos      letra A foram salvos
                   no arquivo impares.txt    no arquivo impares.txt
                   e os n�meros pares no     e os n�meros pares no
                   arquivo pares.txt         arquivo pares.txt
    */
}

void exercicioE()
{
    /*
    Fazer um programa com um menu para:
    e) - ler o arquivo letra a e armazenar em um vetor apenas os primos,
    imprima esse vetor, e salve os dados desse vetor em um arquivo.
    */
    FILE *f,*primos;
    double num,primo[64];
    if ((f=fopen("serie.txt","r"))==NULL)
    {
        printf("Ocorreu um erro na abertura!\n");
    }
    else
    {
        if ((primos=fopen("primos.txt","w"))==NULL)
        {
            printf("Ocorreu um erro na abertura!\n");
        }
        else
        {
            int i,temp = 0,j=0;
            printf("\nOs n�meros primos s�o:\n\n");
            while(j<64)
            {
                temp=0;
                fscanf(f,"%lf",&num);
                for (i=2; i<=num/2; i++)
                {
                    if (fmod(num,i)==0)
                    {
                        temp++;
                        break;
                    }
                }
                if (temp==0)
                {
                    primo[j]=num;
                    printf("primo[%i]=%.0lf\n",j,primo[j]);
                    fprintf(primos,"%.0lf\n",primo[j]);
                }
                j++;
            }
        }
    }
    fclose(f);
    fclose(primos);
    printf("\nOs primos foram salvos no arquivo ""primos.txt""!\n");
    /*
        Entrada    Sa�da esperada          Sa�da do programa        Observa��o
           -       Vetor com n�meros       Vetor com n�meros            OK
                   primos da s�rie         primos da s�rie
                   gerada na letra A       gerada na letra A
                   impressos na tela e     impressos na tela e
                   salvos no arquivo       salvos no arquivo
                   primos.txt              primos.txt
    */
}

void menu()
{
    int opcao;
    do
    {
        printf("-------------------------------\n");
        printf("0 - Sair\n");
        printf("1 - Exerc�cio A\n");
        printf("2 - Exerc�cio B\n");
        printf("3 - Exerc�cio C\n");
        printf("4 - Exerc�cio D\n");
        printf("5 - Exerc�cio E\n");
        printf("-------------------------------\n");
        printf("\nDigite um exerc�cio: ");
        scanf("%i",&opcao);
        printf("\n");
        switch (opcao)
        {
        case(1):
            exercicioA();
            printf("\n");
            break;
        case(2):
            exercicioB();
            printf("\n");
            break;
        case(3):
            exercicioC();
            printf("\n");
            break;
        case(4):
            exercicioD();
            printf("\n");
            break;
        case(5):
            exercicioE();
            printf("\n");
            break;
        }
    }
    while (opcao!=0);
}
