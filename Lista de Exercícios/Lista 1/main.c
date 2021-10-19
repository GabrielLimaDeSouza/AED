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
//Ler um valor inteiro do teclado e dizer se � par
{
    setlocale(LC_ALL,"portuguese");
    int valor;
    bool w = false;
    printf("Digite um valor inteiro: ");
    scanf("%i",&valor);
    w = (valor%2==0);
    printf("%i � par? %i\n",valor,w);
    printf("\n");
    return 0;
}

int exercicio2()
//Ler um valor inteiro do teclado e dizer se � �mpar
{
    setlocale(LC_ALL,"portuguese");
    int valor;
    bool w = false;
    printf("Digite um valor inteiro: ");
    scanf("%i",&valor);
    w = (valor % 2 != 0);
    printf("%i � �mpar? %i\n",valor,w);
    printf("\n");
    return 0;
}

int exercicio3()
//Ler um valor inteiro do teclado e dizer se �mpar e maior que 100
{
    setlocale(LC_ALL,"portuguese");
    int valor;
    bool w= false;
    printf("Digite um valor inteiro: ");
    scanf("%i",&valor);
    w = ((valor%2 != 0) && (valor>100));
    printf("%i � �mpar e maior que 100? %i\n",valor,w);
    printf("\n");
    return 0;
}

int exercicio4()
//Ler um valor inteiro do teclado e dizer se � par e menor que 100, ou �mpar e maior que 100.
{
    setlocale(LC_ALL,"portuguese");
    int valor;
    bool w = false;
    printf("Digite um valor inteiro: ");
    scanf("%i",&valor);
    w = (((valor%2 == 0) && (valor<100))|| ((valor%2!=0)&&(valor>100)));
    printf("%i � par e menor que 100 ou � �mpar e maior que 100? %i\n",valor,w);
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
//Ler dois valores inteiros do teclado e dizer se o primeiro � par e o segundo � �mpar
{
    setlocale(LC_ALL,"portuguese");
    int valor1,valor2;
    bool w = false;
    printf("Digite um valor inteiro: ");
    scanf("%i",&valor1);
    printf("Digite outro valor inteiro: ");
    scanf("%i",&valor2);
    w = ((valor1%2==0) && (valor2%2!=0));
    printf("O primeiro valor digitado � par e o segundo valor digitado � �mpar? %i\n",w);
    printf("\n");
    return 0;
}

int exercicio9()
//Ler dois valores inteiros do teclado e dizer se o primeiro � par e positivo, e o segundo � �mpar e negativo
{
    setlocale(LC_ALL,"portuguese");
    int valor1,valor2;
    bool w = false;
    printf("Digite um valor inteiro: ");
    scanf("%i",&valor1);
    printf("Digite outro valor inteiro: ");
    scanf("%i",&valor2);
    w = ((valor1%2==0 && valor1>=0) && (valor2%2!=0 && valor2<0));
    printf("O primeiro valor � par e positivo e o segundo � �mpar e menor que 0? %i\n",w);
    printf("\n");
    return 0;
}

int exercicio10()
//Ler dois valores reais do teclado e dizer se o primeiro � maior, menor ou igual ao segundo
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
    printf("O primeiro valor � maior que o segundo? %i\n",x);
    printf("O primeiro valor � menor que o segundo? %i\n",y);
    printf("O primeiro valor � igual ao segundo? %i\n",z);
    printf("\n");
    return 0;
}

int exercicio11()
//Ler tr�s valores reais do teclado e dizer se o primeiro est� entre os outros dois
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
    printf("O primeiro valor digitado est� entre o segundo e o terceiro? %i\n",x);
    printf("\n");
    return 0;

}

int exercicio12()
//Ler tr�s valores reais do teclado e dizer se o primeiro n�o est� entre os outros dois
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
    printf("O primeiro valor digitado n�o est� entre o segundo e o terceiro? %i",x);
    printf("\n");
    return 0;

}

int exercicio13()
//Ler tr�s valores literais (caracteres) do teclado e dizer se o primeiro est� entre os outros dois
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
    printf("O primeiro caractere digitado %i est� entre os caracteres %i e %i? %i\n",a,b,c,w);
    printf("\n");
    return 0;
}

int exercicio14()
//Ler tr�s valores literais (caracteres) do teclado e dizer se est�o em ordem crescente lexicograficamente
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
    printf("Os caracteres digitados est�o em ordem crescente lexicograficamente? %i\n",w);
    printf("\n");
    return 0;
}

int exercicio15()
//Ler um valor literal (caractere) do teclado e dizer se � uma letra mai�scula
{
    setlocale(LC_ALL,"portuguese");
    char a;
    bool w= false;
    printf("\nDigite um caractere: ");
    scanf("%c",&a);
    fflush (stdin);
    w = (a>64 && a<91);
    printf("O caractere digitado � uma letra mai�scula? %i\n",w);
    printf("\n");
    return 0;
}
