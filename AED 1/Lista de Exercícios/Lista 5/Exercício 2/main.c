#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Calcule o resultado da seguinte s�rie para os N primeiros termos,
o valor de N dever� ser lido pelo teclado:
S = 1/2 + 1/4 - 2/6 + 3/8 - 5/10 + 8/12 - 13/14 + 21/16 - ...
Fa�a esse exerc�cio das seguintes formas:
2. utilizando um procedimento */

void calculaS();

int main()
{
    setlocale(LC_ALL,"portuguese");
    calculaS();
    return 0;
}

void calculaS()
{
    int n,sinal=1,i,numerador=0,denominador=4,n2 = 1,n1 = 1;
    float S=0.5,fracao;
    printf("Digite a quantidade de termos desejados: ");
    scanf("%i",&n);
    for (i=0;i<n-1;i++)
    {
        /* Como o numerador � a s�rie de Fibonacci,
           essa parte do loop calcula a s�rie*/
        if (i==0)
        {
            numerador = 1;
        }
        else
        {
            numerador = n1+n2;
            n1 = n2;
            n2 = numerador;
        }
        // Fim do c�lculo do numerador (Termo de Fibonacci)
        // In�cio do c�lculo do S, s�rie pedida no exerc�cio
        fracao = (float)numerador/denominador;
        S = (float)(S + fracao*sinal);
        denominador = denominador + 2;
        sinal = sinal * -1;
        // Fim do c�lculo do S
    }
    printf("\nO valor de S �: %.4f\n",S);
    /*
        Entrada           Sa�da Esperada       Sa�da do Programa        Observa��o
           1                   0,5                   0,5                    OK
           2                  0,75                   0,75                   OK
           3                  0,41                   0,41                   OK
           4                  0,79                   0,79                   OK
           5                  0,29                   0,29                   OK
           6                  0,95                   0,95                   OK
    */
}
