#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int exercicio1();
int exercicio2();
int exercicio3();
int exercicio4();
int exercicio5();
int exercicio6();
int exercicio7();
int exercicio8();
int exercicio9();
int exercicio10();
int exercicio11();
int exercicio12();
int exercicio13();
int exercicio14();
int exercicio15();

int main()
{
    setlocale(LC_ALL,"portuguese");
    exercicio1();
    exercicio2();
    exercicio3();
    exercicio4();
    exercicio5();
    exercicio6();
    exercicio7();
    exercicio8();
    exercicio9();
    exercicio10();
    exercicio11();
    exercicio12();
    exercicio13();
    exercicio14();
    exercicio15();
    return 0;
}

int exercicio1()
//Ler um valor inteiro do teclado e dizer se é par
{
    setlocale(LC_ALL,"portuguese");
    int valor;
    bool w = false;
    printf("Digite um valor inteiro: ");
    scanf("%i",&valor);
    w = (valor%2==0);
    printf("%i é par? %i\n",valor,w);
    printf("\n");
    return 0;
}

int exercicio2()
//Ler um valor inteiro do teclado e dizer se é ímpar
{
    setlocale(LC_ALL,"portuguese");
    int valor;
    bool w = false;
    printf("Digite um valor inteiro: ");
    scanf("%i",&valor);
    w = (valor % 2 != 0);
    printf("%i é ímpar? %i\n",valor,w);
    printf("\n");
    return 0;
}

int exercicio3()
//Ler um valor inteiro do teclado e dizer se ímpar e maior que 100
{
    setlocale(LC_ALL,"portuguese");
    int valor;
    bool w= false;
    printf("Digite um valor inteiro: ");
    scanf("%i",&valor);
    w = ((valor%2 != 0) && (valor>100));
    printf("%i é ímpar e maior que 100? %i\n",valor,w);
    printf("\n");
    return 0;
}

int exercicio4()
//Ler um valor inteiro do teclado e dizer se é par e menor que 100, ou ímpar e maior que 100.
{
    setlocale(LC_ALL,"portuguese");
    int valor;
    bool w = false;
    printf("Digite um valor inteiro: ");
    scanf("%i",&valor);
    w = (((valor%2 == 0) && (valor<100))|| ((valor%2!=0)&&(valor>100)));
    printf("%i é par e menor que 100 ou é ímpar e maior que 100? %i\n",valor,w);
    return 0;
}

int exercicio5()
//Ler um valor inteiro do teclado e dizer se pertence ao intervalo aberto entre (25:75)
{
    setlocale(LC_ALL,"portuguese");
    int valor;
    bool w =  false;
    printf("Digite um valor inteiro: ");
    scanf("%i",&valor);
    w = (valor>25 && valor<75);
    printf("%i pertence ao intervalo aberto de (25:75)? %i\n",valor,w);
    printf("\n");
    return 0;

}

int exercicio6()
//Ler um valor inteiro do teclado e dizer se pertence ao intervalo fechado entre [25:75]
{
    setlocale(LC_ALL,"portuguese");
    int valor;
    bool w = false;
    printf("Digite um valor inteiro: ");
    scanf("%i",&valor);
    w = (valor>=25 && valor<=75);
    printf("%i pertence ao intervalo fechado de [25:75]? %i\n",valor,w);
    printf("\n");
    return 0;

}

int exercicio7()
//Ler um valor inteiro do teclado e dizer se pertence aos intervalos fechados [15:45] ou [66:99]
{
    setlocale(LC_ALL,"portuguese");
    int valor;
    bool w = false;
    printf("Digite um valor inteiro: ");
    scanf("%i",&valor);
    w = ((valor>=15 && valor<=45)||(valor>=66 && valor<=99));
    printf("%i pertence aos intervalos fechados de [15:45] ou [66:99]? %i\n",valor,w);
    printf("\n");
    return 0;
}

int exercicio8()
//Ler dois valores inteiros do teclado e dizer se o primeiro é par e o segundo é ímpar
{
    setlocale(LC_ALL,"portuguese");
    int valor1,valor2;
    bool w = false;
    printf("Digite um valor inteiro: ");
    scanf("%i",&valor1);
    printf("Digite outro valor inteiro: ");
    scanf("%i",&valor2);
    w = ((valor1%2==0) && (valor2%2!=0));
    printf("O primeiro valor digitado é par e o segundo valor digitado é ímpar? %i\n",w);
    printf("\n");
    return 0;
}

int exercicio9()
//Ler dois valores inteiros do teclado e dizer se o primeiro é par e positivo, e o segundo é ímpar e negativo
{
    setlocale(LC_ALL,"portuguese");
    int valor1,valor2;
    bool w = false;
    printf("Digite um valor inteiro: ");
    scanf("%i",&valor1);
    printf("Digite outro valor inteiro: ");
    scanf("%i",&valor2);
    w = ((valor1%2==0 && valor1>=0) && (valor2%2!=0 && valor2<0));
    printf("O primeiro valor é par e positivo e o segundo é ímpar e menor que 0? %i\n",w);
    printf("\n");
    return 0;
}

int exercicio10()
//Ler dois valores reais do teclado e dizer se o primeiro é maior, menor ou igual ao segundo
{
    setlocale(LC_ALL,"portuguese");
    float valor1,valor2;
    bool x,y,z = false;
    printf("Digite um valor real: ");
    scanf("%f",&valor1);
    fflush(stdin);
    printf("Digite outro valor real: ");
    scanf("%f",&valor2);
    x = (valor1>valor2);
    y = (valor1<valor2);
    z = (valor1==valor2);
    printf("O primeiro valor é maior que o segundo? %i\n",x);
    printf("O primeiro valor é menor que o segundo? %i\n",y);
    printf("O primeiro valor é igual ao segundo? %i\n",z);
    printf("\n");
    return 0;
}

int exercicio11()
//Ler três valores reais do teclado e dizer se o primeiro está entre os outros dois
{
    setlocale(LC_ALL,"portuguese");
    float valor1,valor2,valor3;
    bool x= false;
    printf("Digite um valor real: ");
    scanf("%f",&valor1);
    fflush(stdin);
    printf("Digite outro valor real: ");
    scanf("%f",&valor2);
    fflush(stdin);
    printf("Digite outro valor real: ");
    scanf("%f",&valor3);
    x = (valor1>valor2 && valor1<valor3);
    printf("O primeiro valor digitado está entre o segundo e o terceiro? %i\n",x);
    printf("\n");
    return 0;

}

int exercicio12()
//Ler três valores reais do teclado e dizer se o primeiro não está entre os outros dois
{
    setlocale(LC_ALL,"portuguese");
    float valor1,valor2,valor3;
    bool x= false;
    printf("Digite um valor real: ");
    scanf("%f",&valor1);
    fflush(stdin);
    printf("Digite outro valor real: ");
    scanf("%f",&valor2);
    fflush(stdin);
    printf("Digite outro valor real: ");
    scanf("%f",&valor3);
    fflush (stdin);
    x = !(valor1>valor2 && valor1<valor3);
    printf("O primeiro valor digitado não está entre o segundo e o terceiro? %i",x);
    printf("\n");
    return 0;

}

int exercicio13()
//Ler três valores literais (caracteres) do teclado e dizer se o primeiro está entre os outros dois
{
    setlocale(LC_ALL,"portuguese");
    char a,b,c;
    bool w = false;
    fflush(stdin);
    printf("\nDigite um caractere: ");
    scanf("%c",&a);
    fflush(stdin);
    printf("Digite outro caractere: ");
    scanf("%c",&b);
    fflush(stdin);
    printf("Digite outro caractere: ");
    scanf("%c",&c);
    fflush (stdin);
    w = (a>b && a<c);
    printf("O primeiro caractere digitado %i está entre os caracteres %i e %i? %i\n",a,b,c,w);
    printf("\n");
    return 0;
}

int exercicio14()
//Ler três valores literais (caracteres) do teclado e dizer se estão em ordem crescente lexicograficamente
{
    setlocale(LC_ALL,"portuguese");
    char a,b,c;
    bool w= false;
    printf("\nDigite um caractere: ");
    scanf("%c",&a);
    fflush(stdin);
    printf("Digite outro caractere: ");
    scanf("%c",&b);
    fflush(stdin);
    printf("Digite outro caractere: ");
    scanf("%c",&c);
    fflush (stdin);
    w = (a<b && a<c);
    printf("Os caracteres digitados estão em ordem crescente lexicograficamente? %i\n",w);
    printf("\n");
    return 0;
}

int exercicio15()
//Ler um valor literal (caractere) do teclado e dizer se é uma letra maiúscula
{
    setlocale(LC_ALL,"portuguese");
    char a;
    bool w= false;
    printf("\nDigite um caractere: ");
    scanf("%c",&a);
    fflush (stdin);
    w = (a>64 && a<91);
    printf("O caractere digitado é uma letra maiúscula? %i\n",w);
    printf("\n");
    return 0;
}
