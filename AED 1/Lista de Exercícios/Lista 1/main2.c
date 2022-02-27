#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>


int exercicioA();
int exercicioB();
int exercicioC();
int exercicioD();
int exercicioE();
int exercicioF();
int exercicioG();
int exercicioH();
int exercicioI();
int exercicioJ();

int main()
{
    exercicioA();
    exercicioB();
    exercicioC();
    exercicioD();
    exercicioE();
    exercicioF();
    exercicioG();
    exercicioH();
    exercicioI();
    exercicioJ();
    return 0;
}

int exercicioA()
// Ler um n�mero e escrever o seu sucessor
{
    setlocale(LC_ALL,"portuguese");
    int num,sucessor;
    printf("Digite um n�mero: ");
    scanf("%i",&num);
    sucessor = num + 1;
    printf("O sucessor deste n�mero �: %i \n",sucessor);
    printf("\n");
    return 0;
}

int exercicioB()
//Calcular a m�dia aritm�tica de quatro n�meros inteiros dados
{
    setlocale(LC_ALL,"portuguese");
    int num1,num2,num3,num4,denominador;
    float media;
    printf("Digite o primeiro n�mero: ");
    scanf("%i",&num1);
    printf("Digite o segundo n�mero: ");
    scanf("%i",&num2);
    printf("Digite o terceiro n�mero: ");
    scanf("%i",&num3);
    printf("Digite o quarto n�mero: ");
    scanf("%i",&num4);
    denominador = 4;
    media = (float)(num1+num2+num3+num4)/denominador;
    printf("A m�dia desses quatro n�meros �: %.2f\n",media);
    printf("\n");
    return 0;

}

int exercicioC()
// M�dia ponderada de tr�s notas
{

    setlocale(LC_ALL,"portuguese");
    int peso1,peso2,peso3;
    float mediaponderada,nota1,nota2,nota3;
    printf("Digite a primeira nota: ");
    scanf("%f",&nota1);
    printf("Digite o peso desta primeira nota: ");
    scanf("%i",&peso1);
    printf("Digite a segunda nota: ");
    scanf("%f",&nota2);
    printf("Digite o peso desta segunda nota: ");
    scanf("%i",&peso2);
    printf("Digite a terceira nota: ");
    scanf("%f",&nota3);
    printf("Digite o peso desta terceira nota: ");
    scanf("%i",&peso3);
    mediaponderada = (float)(nota1*peso1+nota2*peso2+nota3*peso3)/(peso1+peso2+peso3);
    printf("A m�dia ponderada dessas 3 notas �: %.2f.\n",mediaponderada);
    printf("\n");
    return 0;

}

int exercicioD()
//Ler uma temparatura em Celsius e converter para Fahrenheit
{
    setlocale(LC_ALL,"portuguese");
    float celsius,fahrenheit,w;
    bool x;
    printf("Digite uma temperatura em Celsius: ");
    scanf("%f",&celsius);
    fahrenheit = (1.8*celsius)+32;
    printf("A temperatura %.2f em Celsius corresponde a %.2f em Fahrenheit.\n",celsius,fahrenheit);
    w = ((1.8*celsius)+32);
    x = w==fahrenheit;
    printf("O exerc�cio est� correto? %i\n",x);
    printf("\n");
    return 0;
}


int exercicioE()
//Ler o sal�rio de um funcion�rio e o percentual de aumento, calcular e mostrar seu novo sal�rio
{
    setlocale(LC_ALL,"portuguese");
    float salario,aumento;
    printf("Digite o sal�rio do funcion�rio: ");
    scanf("%f",&salario);
    printf("Digite o percentual de aumento: ");
    scanf("%f",&aumento);
    aumento = salario*(aumento/100);
    salario = aumento + salario;
    printf("O novo sal�rio do funcion�rio ser� de: %.2f.\n",salario);
    printf("\n");
    return 0;
}

int exercicioF()
// Ler a base e a altura e calcular a �rea de um tri�ngulo
{
    setlocale(LC_ALL,"portuguese");
    float base,altura,area;
    printf("Digite a base de um tri�ngulo: ");
    scanf("%f",&base);
    printf("Digite a altura de um tri�ngulo: ");
    scanf("%f",&altura);
    area = (base*altura)/2.0;
    printf("A �rea do tri�ngulo de base %.2f e altura %.2f ser� de %.2f.\n",base,altura,area);
    printf("\n");
    return 0;
}

int exercicioG()
//Quantidade de ra��o fornecida para gato
{
    setlocale(LC_ALL,"portuguese");
    int pesokg,quantidade,gatos,pesograma;
    float resto;
    gatos = 2;
    printf("Digite o peso do saco de ra��o em quilos: ");
    scanf("%i",&pesokg);
    pesograma = pesokg * 1000;
    printf("Digite a quantidade de ra��o fornecida para cada gato em gramas: ");
    scanf("%i",&quantidade);
    resto = (pesograma - (quantidade*gatos*5.0));
    printf("Ap�s 5 dias restar� %.2f gramas de ra��o!\n",resto);
    printf("\n");
    return 0;
}

int exercicioH()
//Ler dois n�meros e trocar seus valores
{
    float a,b,temp;
    printf("Digite o valor de A: ");
    scanf("%f",&a);
    printf("Digite o valor de B: ");
    scanf("%f",&b);
    temp = a;
    a = b;
    b = temp;
    printf("Os valores de A e B trocados s�o: A = %.2f , B = %.2f.\n",a,b);
    printf("\n");
    return 0;
}

int exercicioI()
//Ler um n�mero e imprimir o resto da divis�o por 7
{
    setlocale(LC_ALL,"portuguese");
    int num,divisor;
    float resultado;
    divisor = 7.0;
    printf("Digite um n�mero: ");
    scanf("%i",&num);
    resultado = num % divisor;
    printf("O resto da divis�o de %i por 7 �: %.2f.\n",num,resultado);
    printf("\n");
    return 0;

}

int exercicioJ()
//Calcular a soma dos termos de uma P.A
{
    setlocale(LC_ALL,"portuguese");
    int primeirotermo,segundotermo,numtermos,razao,enesimotermo,somatermos;
    printf("Digite o primeiro termo da P.A: ");
    scanf("%i",&primeirotermo);
    printf("Digite o segundo termo da P.A: ");
    scanf("%i",&segundotermo);
    printf("Digite o n�mero de termos dessa P.A: ");
    scanf("%i",&numtermos);
    razao = segundotermo - primeirotermo;
    enesimotermo = primeirotermo+(numtermos-1)*razao;
    somatermos = numtermos*(primeirotermo+enesimotermo)/2;
    printf("A soma dos termos dessa P.A �: %i.\n",somatermos);
    printf("\n");
    return 0;
}
