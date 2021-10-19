#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>

void menu();
void questao1();
void questao2();
void questao3();
int main()
{
    setlocale(LC_ALL,"portuguese");
    menu();
    return 0;
}

void questao1()
{
    char nome[20];
    int itens,preco=5;
    float total=0;
    printf("Digite o nome do comprador: ");
    scanf("%s",nome);
    printf("Digite a quantidade de itens comprados: ");
    scanf("%i",&itens);
    if (itens<5)
    {
        total = preco*itens;
    }
    else
    {
        if (itens>=5 && itens<10)
        {
            total = (preco*itens)*0.95;
        }
        else
        {
            if (itens>=10 && itens<=15)
            {
                total = (preco*itens)*0.9;
            }
            else
            {
                total = (preco*itens)*0.8;
            }
        }
    }
    printf("\n");
    printf("O valor total a ser pago por %s será de R$%.2f\n",nome,total);
    printf("\n");
}

void questao2()
{
    char caracteres[50];
    int i,intletra,comprimento,intprimeiraletra;
    bool letraminuscula=false;
    printf("\n");
    printf("Digite uma cadeia de caracteres: ");
    scanf("%s",caracteres);
    printf("\n");
    comprimento = strlen(caracteres);
    for (i=0;caracteres[i]!= '\0';i++)
    {
        intletra = (int)(caracteres[i]);
        if (intletra>=97 && intletra<=122)
        {
            letraminuscula = true;
        }
    }
    intprimeiraletra = (int)(caracteres[0]);
    if (comprimento>=6 && comprimento<=12)
    {
        if (intprimeiraletra>=65 && intprimeiraletra<=90)
        {
            if (letraminuscula)
            {
                if (! ((caracteres[2]>=65 && caracteres[2]<=90) || (caracteres[2]>=97 && caracteres[2]<=122) || (caracteres[2]>=48 && caracteres[2]<=57)))
                {
                    printf("Essa cadeia de caracteres passou pela regra!\n");
                }
                else
                {
                    printf("Essa cadeia de caracteres não passou pela regra!\n");
                }
            }
            else
            {
                printf("Essa cadeia de caracteres não passou pela regra!\n");
            }
        }
        else
        {
            printf("Essa cadeia de caracteres não passou pela regra!\n");
        }
    }
    else
    {
        printf("Essa cadeia de caracteres não passou pela regra!\n");
    }
    printf("\n");
}

void questao3()
{
    int idade,codigo=0,somaidadeH=0,contadorHomem=0,contadoridadeM=0;
    float salario,mediaidadeH,maiorsalarioM=0,menorsalarioM=99999999;
    char sexo[2];
    while (codigo>=0)
    {
        printf("Digite o código da pessoa: ");
        scanf("%i",&codigo);
        if (codigo>=0)
        {
            printf("Digite a idade da pessoa: ");
            scanf("%i",&idade);
            if (idade>=18 && idade<=100)
            {
                printf("Digite o sexo dessa pessoa M - Masculino ou F - Feminino: ");
                scanf("%s",sexo);
                if (sexo[0]=='M' || sexo[0]=='F')
                {
                    printf("Digite o salário dessa pessoa: ");
                    scanf("%f",&salario);
                    printf("\n");
                    if (sexo[0]=='M')
                    {
                        somaidadeH = somaidadeH + idade;
                        contadorHomem++;
                    }
                    if (sexo[0]=='F')
                    {
                        if (salario>maiorsalarioM)
                        {
                            maiorsalarioM = salario;
                        }
                        if (salario<menorsalarioM)
                        {
                            menorsalarioM = salario;
                        }
                    }
                    if (sexo[0]=='F' && idade>50)
                    {
                        contadoridadeM++;
                    }
                }
            }
            else
            {
                printf("\n");
                printf("Idade inválida!\n");
                printf("\n");
            }
        }
    }
    mediaidadeH = (float)somaidadeH/contadorHomem;
    printf("\n");
    printf("A) A média das idades dos homens do grupo é: %.2f\n",mediaidadeH);
    printf("B) O maior salário entre as mulheres é R$%.2f e o menor é R$%.2f\n",maiorsalarioM,menorsalarioM);
    printf("C) Existem %i mulheres com mais de 50 anos\n",contadoridadeM);
    printf("\n");
}

void menu()
{
    int questao;
    do
    {
        printf("------------------------------\n"
                "1 - Questão 1\n"
                "2 - Questão 2\n"
                "3 - Questão 3\n"
                "4 - Sair\n"
           "------------------------------\n");
        printf("Escolha uma opcão: \n");
        scanf("%i",&questao);
        printf("\n");
        switch (questao)
        {
        case 1:
            system("cls");
            questao1();
            system("pause");
            break;
        case 2:
            system("cls");
            questao2();
            system("pause");
            break;
        case 3:
            system("cls");
            questao3();
            system("pause");
            break;
        case 4:
            system("cls");
            break;
        }
    } while(questao!=4);
}
