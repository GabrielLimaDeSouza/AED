#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    srand(time(NULL));
    int qtd,divisores=0,n;
    printf("Digite a quantidade de números a serem gerados: ");
    scanf("%i",&qtd);
    FILE *f,*f2;
    if ((f=fopen("GabrielLimadeSouza.txt","w"))==NULL)
    {
        printf("Ocorreu um erro na abertura\n");
    }
    else
    {
        if ((f2=fopen("GabrielLimadeSouza1.txt","w"))==NULL)
        {
            printf("Ocorreu um erro na abertura\n");
        }
        else
        {
            for(int i=0; i<qtd; i++)
            {
                int num = 35+(rand()%11);
                fprintf(f,"%.0i   ",num);
            }
            fclose(f);
            if ((f=fopen("GabrielLimadeSouza.txt","r"))==NULL)
            {
                printf("Ocorreu um erro na leitura!\n");
            }
            else
            {
                for (int i=0; i<qtd; i++)
                {
                    fscanf(f,"%d",&n);
                    for (int i = 1; i <= n; ++i)
                    {
                        if (n % i == 0)
                        {
                            divisores++;
                        }
                    }
                    fprintf(f2,"Número = %i -> Quantidade de divisores = %i\n",n,divisores);
                    divisores = 0;
                }
            }
        }
    }
    fclose(f2);
    return 0;
}
