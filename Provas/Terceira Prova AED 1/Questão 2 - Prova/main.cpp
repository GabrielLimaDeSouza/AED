#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
using namespace std;

class Retangulo
{
public:
    float altura;
    float base;
    // Construtor sem parâmetros
    Retangulo();
  // Construtor com parâmetros
  Retangulo(float b, float a);
  float calculaArea();
  float calculaPerimetro();
  void imprimeRetangulo();
};

Retangulo::Retangulo()
{
  printf("\nexecutando o construtor sem parâmetros\n");
  printf("Digite a altura do retângulo: ");
  scanf("%f",&altura);
  printf("Digite a base do retângulo: ");
  scanf("%f",&base);
}

Retangulo::Retangulo(float b, float a)
{
  printf("\nexecutando o construtor com parâmetros\n");
  base = b;
  altura = a;
}

float Retangulo::calculaArea()
{
  float area;
  area = base*altura;
  return area;
}

float Retangulo::calculaPerimetro()
{
  float perimetro;
  perimetro = (base*2)+(altura*2);
  return perimetro;
}

void Retangulo::imprimeRetangulo()
{
  printf("\nDados do retângulo:\n");
  printf("\nBase:%.2f",base);
  printf("\nAltura:%.2f\n",altura);
  printf("\nPerímetro:%.2f\n",calculaPerimetro());
  printf("Área:%.2f\n\n",calculaArea());
  printf("-----------------------------\n");
}

int main()
{
  float base,altura;
  setlocale(LC_ALL,"portuguese");
  Retangulo r1;
  r1.imprimeRetangulo();
  printf("Escreva a altura do retângulo: ");
  scanf("%f",&base);
  printf("Escreva a base do retângulo: ");
  scanf("%f",&altura);
  Retangulo r2(base,altura);
  r2.imprimeRetangulo();
  return 0;
}
