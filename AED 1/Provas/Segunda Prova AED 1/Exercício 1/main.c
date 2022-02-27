#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "gabriellimadesouza.h"

int main()
{
    setlocale(LC_ALL,"portuguese");
    int num;
    float resultado;
    printf("Digite o número de termos da série: ");
    scanf("%i",&num);
    resultado = calculaH(num);
    printf("\nO resultado de H é %.4f\n",resultado);
    return 0;
}
