#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Calcule o resultado da seguinte s?rie para os N primeiros termos,
o valor de N dever? ser lido pelo teclado:
S = 1/2 + 1/4 - 2/6 + 3/8 - 5/10 + 8/12 - 13/14 + 21/16 - ...
Fa?a esse exerc?cio das seguintes formas:
5. utilizando fun??o retornando S e a vari?vel global N */

int n;
float calculaS();

int main()
{
    setlocale(LC_ALL,"portuguese");
    float S;
    S = calculaS();
    printf("\nO valor de S ?: %.4f\n",S);
    return 0;
}

float calculaS()
{
    printf("Digite a quantidade de termos desejados: ");
    scanf("%i",&n);
    int sinal=1,i,numerador=0,denominador=4,n2 = 1,n1 = 1;
    float fracao,S=0.5;
    for (i=0;i<n-1;i++)
    {
        /* Como o numerador ? a s?rie de Fibonacci,
           essa parte do loop calcula a s?rie*/
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
        // Fim do c?lculo do numerador (Termo de Fibonacci)
        // In?cio do c?lculo do S, s?rie pedida no exerc?cio
        fracao = (float)numerador/denominador;
        S = (float)(S + fracao*sinal);
        denominador = denominador + 2;
        sinal = sinal * -1;
        // Fim do c?lculo do S
    }
    return S;
    /*
        Entrada           Sa?da Esperada       Sa?da do Programa        Observa??o
           1                   0,5                   0,5                    OK
           2                  0,75                   0,75                   OK
           3                  0,41                   0,41                   OK
           4                  0,79                   0,79                   OK
           5                  0,29                   0,29                   OK
           6                  0,95                   0,95                   OK
    */
}
