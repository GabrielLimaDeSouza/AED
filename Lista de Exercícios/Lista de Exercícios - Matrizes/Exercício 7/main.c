#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

const int qtd=4;
char ** lerAlunos(int numalunos);
int ** leNotas(int numalunos, char ** alunos);
float * calcMedia(int numalunos,int **notas);
int * ordenaAlunos(int numalunos,char **nomeAlunos);
void boletimFinal (int numalunos, char **alunos, int *classificado, int **notas, float *media);

int main()
{
    setlocale(LC_ALL,"portuguese");
    int numalunos;
    char **nomeAlunos;
    int **notas;
    float *media;
    int *classificacao;
    // Lendo a quantidade de alunos
    printf("Digite a quantidade de alunos:");
    scanf("%d",&numalunos);
    // Chamada das funções criadas
    nomeAlunos=lerAlunos(numalunos);
    notas=leNotas(numalunos,nomeAlunos);
    media=calcMedia(numalunos,notas);
    classificacao = ordenaAlunos(numalunos,nomeAlunos);
    boletimFinal (numalunos, nomeAlunos, classificacao,notas,media);
    return 0;

    /*
        Entrada                   Saída esperada           Saída do programa         Observação
        Número de alunos,         Alunos organizados       Alunos organizados            OK
        seus nomes,quatro notas   em ordem alfabética,     em ordem alfabética,
                                  suas notas e a média     suas notas e a média
     */
}

char ** lerAlunos(int numalunos)
{
    char **alunos;
    int i;
    alunos=malloc(sizeof(char *)*numalunos);
// para cada linha será criada um espaço para armazenar os nomes
// vamos considerar 50 posições para cada nome de aluno
    for (i=0; i<numalunos; i=i+1)
    {
        alunos[i]=malloc(sizeof(char)*50);
    }
    for (i=0; i<numalunos; i=i+1)
    {
        printf("Digite o nome do %d aluno:",i+1);
        fflush(stdin);
        gets(alunos[i]);
    }
    return alunos;
}

int ** leNotas(int numalunos, char ** alunos)
{
    int **notasAlunos;
    int i,j;
    notasAlunos=malloc(sizeof(int *)*numalunos);
//em linha será criada qtd colunas para armazenar as notas
    for(i=0; i<numalunos; i=i+1)
    {
        notasAlunos[i]=malloc(sizeof(int)*qtd);
    }
//lendo as notas
    for (i=0; i<numalunos; i=i+1)
    {
        printf("Aluno: %s\n",alunos[i]);
        for (j=0; j<qtd; j=j+1)
        {
            printf("Digite a %d nota:",j+1);
            scanf("%d",&notasAlunos[i][j]);
        }
    }
    return notasAlunos;
}

float * calcMedia(int numalunos,int **notas)
{
    float *mediaNotas;
    int i,j;
    float soma,media;
    mediaNotas=malloc(sizeof(float)*numalunos);
    for (i=0; i<numalunos; i=i+1)
    {
        soma=0;
        for (j=0; j<qtd; j=j+1)
        {
            soma=soma+(float) notas[i][j];
        }
        media=soma/qtd;
        mediaNotas[i]=media;
    }
    return mediaNotas;
}

int * ordenaAlunos(int numalunos,char **nomeAlunos)
{
    int i,j,aux;
    int * nomeClassificado;// irá armazenar apenas o indice do nome.
// utilizando o método de classificação
    nomeClassificado=malloc(sizeof(int)*numalunos);
    for (i=0; i<numalunos; i=i+1)
    {
        nomeClassificado[i]=i;
    }
    for (i=0; i<numalunos; i=i+1)
    {
        for (j=i+1; j<numalunos; j=j+1)
        {
            if (strcmp(nomeAlunos[nomeClassificado[i]],nomeAlunos[nomeClassificado[j]])>0)
            {
                aux=nomeClassificado[i];
                nomeClassificado[i]=nomeClassificado[j];
                nomeClassificado[j]=aux;
            }
        }
    }
    return nomeClassificado;
}

void boletimFinal (int numalunos, char **alunos, int *classificado, int **notas, float *media)
{
    int i,j;
    printf("Notas Finais em ordem alfabética de nome de aluno\n");
    printf("Ordem \t nome");
    for (i=0; i<qtd; i=i+1)
    {
        printf("\t n%d",i+1);
    }
    printf("\t media \n");
    for (i=0; i<numalunos; i=i+1)
    {
        printf("%d\t%s",i+1,alunos[classificado[i]]);
        for (j=0; j<qtd; j=j+1)
        {
            printf("\t%2d",notas[classificado[i]][j]);
        }
        printf("\t%6.2f\n",media[classificado[i]]);
    }
}

