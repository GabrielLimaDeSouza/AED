#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
using namespace std;

class Retangulo
{
public:
� � float altura;
� � float base;
� � // Construtor sem par�metros
� � Retangulo();
� // Construtor com par�metros
� Retangulo(float b, float a);
� float calculaArea();
� float calculaPerimetro();
� void imprimeRetangulo();
};

Retangulo::Retangulo()
{
� printf("\nexecutando o construtor sem par�metros\n");
� printf("Digite a altura do ret�ngulo: ");
� scanf("%f",&altura);
� printf("Digite a base do ret�ngulo: ");
� scanf("%f",&base);
}

Retangulo::Retangulo(float b, float a)
{
� printf("\nexecutando o construtor com par�metros\n");
� base = b;
� altura = a;
}

float Retangulo::calculaArea()
{
� float area;
� area = base*altura;
� return area;
}

float Retangulo::calculaPerimetro()
{
� float perimetro;
� perimetro = (base*2)+(altura*2);
� return perimetro;
}

void Retangulo::imprimeRetangulo()
{
� printf("\nDados do ret�ngulo:\n");
� printf("\nBase:%.2f",base);
� printf("\nAltura:%.2f\n",altura);
� printf("\nPer�metro:%.2f\n",calculaPerimetro());
� printf("�rea:%.2f\n\n",calculaArea());
� printf("-----------------------------\n");
}

int main()
{
� float base,altura;
� setlocale(LC_ALL,"portuguese");
� Retangulo r1;
� r1.imprimeRetangulo();
� printf("Escreva a altura do ret�ngulo: ");
� scanf("%f",&base);
� printf("Escreva a base do ret�ngulo: ");
� scanf("%f",&altura);
� Retangulo r2(base,altura);
� r2.imprimeRetangulo();
� return 0;
}
