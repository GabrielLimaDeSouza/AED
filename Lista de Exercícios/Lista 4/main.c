#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void exercicio1();
void exercicio2();
void exercicio3();
void exercicio4();
void exercicio5();
void exercicio6();
void exercicio7();
void exercicio8();
void exercicio9();
void exercicio10();
void menu();

int main()
{
    setlocale(LC_ALL,"portuguese");
    menu();
    return 0;
}

void exercicio1()
{
    printf("\n");
    printf("1 -Leia um conjunto indeterminado de palavras e ao \n"
           "(estipule você um flag) informe qual foi a maior palavra\n"
           "e a menor palavra digitada, em tamanho e lexicograficamente.\n");
    printf("\n");
    printf("Digite FIM para terminar!!!\n");
    printf("\n");
    char palavra[51],fim[4]="FIM",maiorpalavra[51],menorpalavra[51],maiorpalavralex[51],menorpalavralex[51];
    int maior,menor,comprimento,maiorlex,menorlex,primeirocaractere;
    printf("Digite uma palavra: ");
    scanf("%s",palavra);
    maiorlex = (int)(palavra[0]);
    menorlex = (int)(palavra[0]);
    strcpy(maiorpalavralex,palavra);
    strcpy(menorpalavralex,palavra);
    maior = strlen(palavra);
    menor = strlen(palavra);
    strcpy(maiorpalavra,palavra);
    strcpy(menorpalavra,palavra);
    while ((strcmp(palavra,fim))!=0)
    {
        printf("Digite outra palavra: ");
        scanf("%s",palavra);
        if ((strcmp(palavra,fim))!=0)
        {
            comprimento = strlen(palavra);
            primeirocaractere = (int)(palavra[0]);
        }
        if (primeirocaractere>maiorlex)
        {
            maiorlex = primeirocaractere;
            strcpy(maiorpalavralex,palavra);
        }
        if (primeirocaractere<menorlex)
        {
            menorlex = primeirocaractere;
            strcpy(menorpalavralex,palavra);
        }
        if (comprimento>maior)
        {
            maior = comprimento;
            strcpy(maiorpalavra,palavra);
        }
        if (comprimento<menor)
        {
            menor = comprimento;
            strcpy(menorpalavra,palavra);
        }
    }
    printf("\n");
    printf("A maior palavra digitada foi %s.\n",maiorpalavra);
    printf("A menor palavra digitada foi %s.\n",menorpalavra);
    printf("\n");
    printf("A maior palavra digitada lexicograficamente foi %s.\n",maiorpalavralex);
    printf("A menor palavra digitada lexicograficamente foi %s.\n",menorpalavralex);
    printf("\n");
    /*
                Entrada                                        Saída Esperada
        Abacaxi - Melão - Banana - Uva              Maior palavra em tamanho - Abacaxi
                                                    Menor palavra em tamanho - Uva
                                                    Maior palavra lexicograficamente - Uva
                                                    Menor palavra lexicograficamente - Abacaxi

            Saída do Programa                                   Observação
        Maior palavra em tamanho - Abacaxi                          OK
        Menor palavra em tamanho - Uva                              OK
        Maior palavra lexicograficamente - Uva                      OK
        Menor palavra lexicograficamente - Abacaxi                  OK
    */
}

void exercicio2()
{
    printf("\n");
    printf("2 – Ler um string de no máximo 50 caracteres e contar quantas\n"
           "letras A essa palavra possui\n");
    printf("\n");
    int i,contadorA=0;
    char palavra[51];
    printf("Digite uma palavra: ");
    scanf("%s",palavra);
    for (i=0; palavra[i]!= '\0'; i++)
    {
        if (palavra[i]=='A')
        {
            contadorA = contadorA+1;
        }
    }
    printf("Existem %i letras 'A' nessa palavra\n",contadorA);
    printf("\n");
    /*
        Entrada    Saída Esperada   Saída do Programa   Observação
        ABACAXI    3 LETRAS 'A'     3 LETRAS 'A'            OK
        ATIVIDADE  2 LETRAS 'A'     2 LETRAS 'A'            OK
        ESTIMADO   1 LETRA 'A'      1 LETRA 'A'             OK
    */
}

void exercicio3()
{
    printf("\n");
    printf("3 – Ler uma string de no máximo 50 caracteres e indicar quais\n"
           "as posições da letra A nessa palavra\n");
    printf("\n");
    int posicaoA,i;
    char palavra[51];
    printf("Digite uma palavra: ");
    scanf("%s",palavra);
    for (i=0; palavra[i]!= '\0'; i++)
    {
        if (palavra[i]=='A')
        {
            posicaoA = i+1;
            printf("Nessa palavra existe um A na posição %i!\n",posicaoA);
        }
    }
    printf("\n");
    /*
        Entrada    Saída Esperada   Saída do Programa   Observação
        ABACAXI    POSIÇÃO 1,3,5    POSIÇÃO 1,3,5'          OK
        ATIVIDADE  POSIÇÃO 1,7      POSIÇÃO 1,7             OK
        ESTIMADO   POSIÇÃO 6        POSIÇÃO 6               OK
    */
}

void exercicio4()
{
    printf("\n");
    printf("4 – Ler uma string de no máximo 50 caracteres e em seguida um caractere,\n"
           "mostrar quais as posições esse caractere aparece na string lida\n"
           "e quantas vezes ele apareceu.\n");
    printf("\n");
    int posicao,i,x,y,contadorcaractere=0;
    char palavra[51],caractere[51];
    printf("Digite uma palavra: ");
    scanf("%s",palavra);
    printf("Digite um caractere: ");
    scanf("%s",caractere);
    y = (int)(caractere[0]);
    for (i=0; palavra[i]!= '\0'; i++)
    {
        x = (int)(palavra[i]);
        if (x==y)
        {
            posicao = i+1;
            contadorcaractere++;
            printf("Nessa palavra existe um '%s' na posição %i!\n",caractere,posicao);
        }
    }
    printf("Existem %i caracteres '%s' nessa palavra!\n",contadorcaractere,caractere);
    printf("\n");
    /*
         Entrada            Saída Esperada                Saída do Programa             Observação
        Amendoim,o          POSIÇÃO 6 - 1 caractere       POSIÇÃO 6 - 1 caractere           OK
        Abacate,a           POSIÇÃO 3,5 - 2 caracteres    POSIÇÃO 3,5 - 2 caracteres        OK
        Eletricista,i       POSIÇÃO 6,8 - 2 caracteres    POSIÇÃO 6,8 - 2 caracteres        OK
    */
}

void exercicio5()
{
    printf("\n");
    printf("5 - Ler uma string de no máximo 50 caracteres e em seguida\n"
           "um caractere (entre A e z - consista se o caracter esta nesse intervalo),\n"
           "mostrar quais as posições esse caractere (maiúscula ou minúscula)\n"
           "na string lida e quantas vezes ele apareceu.\n");
    printf("\n");
    int i,contador=0,qtd=0,y,x;
    char caractere[2],palavra[51];
    printf("Digite uma palavra: ");
    scanf("%s",palavra);
    printf("Digite um caractere: ");
    scanf("%s",caractere);
    x = (int)(caractere[0]);
    printf("A letra apareceu na posição: ");
    for (i=0;palavra[i]!= '\0';i++)
    {
        y = (int)(palavra[i]);
        contador++;
        if ((x==y) || (y==(x+32)) || (y==(x-32)))
        {
            printf("%i ",contador);
            qtd++;
        }
    }
    printf("\nA letra '%s' apareceu %i vezes!",caractere,qtd);
    printf("\n");
    /*
        Entrada      Saída Esperada               Saída do Programa         Observação
        Abacaxi,a    POSIÇÃO 1,3,5 - 3 vezes      POSIÇÃO 1,3,5 - 3 vezes       OK
        Mamão,m      POSIÇÃO 1,3 - 2 vezes        POSIÇÃO 1,3 - 2 vezes         OK
        Excessão,S   POSIÇÃO 5,6 - 2 vezes        POSIÇÃO 5,6 - 2 vezes         OK
    */
}

void exercicio6()
{
    printf("\n");
    printf("6 - Ler uma string de no máximo 50 caracteres e mostrar quantas\n"
           "letras possui e quantos caracteres são números e quantos não são nem\n"
           "números nem letras.\n");
    printf("\n");
    int i,x,contadorletra=0,contadornumero=0,contadoroutros=0;
    char palavra[51];
    printf("Digite uma palavra: ");
    scanf("%s",palavra);
    for (i=0; palavra[i]!= '\0'; i++)
    {
        x = (int)(palavra[i]);
        if ((x>=65 && x<=90) || (x>=97 && x<=122))
        {
            contadorletra++;
        }
        else
        {
            if (x>=48 && x<=57)
            {
                contadornumero++;
            }
            else
            {
                contadoroutros++;
            }
        }
    }
    printf("Nessa palavra existem %i letras\n",contadorletra);
    printf("Nessa palavra existem %i números\n",contadornumero);
    printf("Nessa palavra existem %i caracteres que não são nem número, nem letras\n",contadoroutros);
    printf("\n");
    /*
        Entrada         Saída Esperada                                   Saída do Programa  Observação
        Melancia99      8 letras,2 números                               8 letras,2 números     OK
        Avião1546       4 letras,4 números,1 caractere != (num && letra)          ""            OK
        99POP           3 letras,2 números                               3 letras,2 números     OK
    */
}

void exercicio7()
{
    printf("\n");
    printf("7 – Ler uma string de no máximo 50 caracteres e criar\n"
           "uma nova string com seu inverso, isso é a ultima letra da primeira\n"
           "string será a primeira na nova string e assim sucessivamente\n");
    printf("\n");
    char palavra[51];
    int i;
    printf("Digite uma palavra: ");
    scanf("%s",palavra);
    printf("A palavra %s invertida é:\n",palavra);
    for (i=strlen(palavra)-1; i>=0; i--)
    {
        printf("%c",palavra[i]);
    }
    printf("\n");
    /*
        Entrada         Saída Esperada       Saída do Programa        Observação
        Carro               orraC                 orraC                   OK
        Avião               oãivA                 oãivA                   OK
        Motocicleta         atelcicotoM           atelcicotoM             OK
    */
}

void exercicio8()
{
    char palavra[51],auxiliar[51];
    int i,k=0;
    printf("Digite uma palavra com espaços em branco: ");
    fflush(stdin);
    scanf("%[^\n]",palavra);
    fflush(stdin);
    printf("\n");
    for (i=0;palavra[i]!='\0';i++)
    {
        if (palavra[i]!= ' ')
        {
            auxiliar[k]=palavra[i];
        }
        if (palavra[i]== ' ')
        {
            continue;
        }
        k++;
    }
    printf("%s\n",auxiliar);
    printf("\n");
    /*
        Entrada           Saída Esperada       Saída do Programa        Observação
        guarda chuva      guardachuva          guardachuva                  OK
        pastel de frango  pasteldefrango       pasteldefrango               OK
        Folha A4          FolhaA4              FolhaA4                      OK
    */
}

void exercicio9()
{
    printf("\n");
    printf("9 – Ler uma string de no máximo 50 caracteres e retire dessa string\n"
           "todos os espaços em branco. Sem utilizar string auxiliar.\n");
    printf("\n");
    char palavra[51];
    int i;
    printf("Digite uma palavra com espaços em branco: ");
    fflush(stdin);
    scanf("%[^\n]", palavra);
    fflush(stdin);
    for(i=0; i < strlen(palavra); i++)
    {
        if(palavra[i] == ' ') {
            for(int y=i; y < strlen(palavra); y++){
                palavra[y] = palavra[y+1];
            }
        }
    }
    printf("A palavra digitada sem espaços é: %s\n",palavra);
    printf("\n");
    /*
        Entrada           Saída Esperada       Saída do Programa        Observação
        guarda chuva      guardachuva          guardachuva                  OK
        pastel de frango  pasteldefrango       pasteldefrango               OK
        Folha A4          FolhaA4              FolhaA4                      OK
    */
}

void exercicio10()
{
    printf("\n");
    printf("10 - Ler uma string de no máximo 50 caracteres em seguida leia\n"
           "outra string de no máximo 3 caracteres, informe quantas\n"
           "vezes a segunda string aparece na primeira string,\n"
           "e diga as posições iniciais em que ela aparece.\n");
    printf("\n");
    char palavramaior[51],palavramenor[4];
    int i=1,contador=1,posicao;
    printf("Digite a primeira palavra com no máximo 50 caracteres: ");
    fflush(stdin);
    scanf("%s",palavramaior);
    printf("Digite outra palavra com no máximo 3 caracteres: ");
    fflush(stdin);
    scanf("%s",palavramenor);
    printf("\n");
    while (strstr(palavramaior,palavramenor)!= NULL)
    {
        if (contador==1)
        {
            printf("A palavra '%s' está contida em %s!\n",palavramenor,palavramaior);
            printf("\n");
        }
        printf("A palavra '%s' está na posição %i!\n",palavramenor,posicao = (strstr(palavramaior, palavramenor) - palavramaior)+1);
        palavramaior[posicao]=palavramaior[posicao+1];
        printf("A palavra '%s' está se repetindo %i vezes!\n",palavramenor,i);
        contador++;
        i++;
    }
    printf("\n");
    /*
        Entrada           Saída Esperada                 Saída do Programa            Observação
        Soldado,Sol       Posição 1 - Repete 1 vez       Posição 1 - Repete 1 vez         OK
        fofoca,fo         Posição 1,3 - Repete 2 vezes   Posição 1,3 - Repete 2 vezes     OK
        Batata,ta         Posição 3,5 - Repete 2 vezes   Posição 3,5 - Repete 2 vezes     OK
    */
}

void menu()
{
    int exercicio;
    while(exercicio!=11)
    {
        printf("------------------------------\n"
                "1 - Exercício 1\n"
                "2 - Exercício 2\n"
                "3 - Exercício 3\n"
                "4 - Exercício 4\n"
                "5 - Exercício 5\n"
                "6 - Exercício 6\n"
                "7 - Exercício 7\n"
                "8 - Exercício 8\n"
                "9 - Exercício 9\n"
                "10 - Exercício 10\n"
                "11 - Sair\n"
           "------------------------------\n");
        printf("Escolha uma opção: \n");
        scanf("%i",&exercicio);
        printf("\n");
        switch (exercicio)
        {
        case 1:
            exercicio1();
            break;
        case 2:
            exercicio2();
            break;
        case 3:
            exercicio3();
            break;
        case 4:
            exercicio4();
            break;
        case 5:
            exercicio5();
            break;
        case 6:
            exercicio6();
            break;
        case 7:
            exercicio7();
            break;
        case 8:
            exercicio8();
            break;
        case 9:
            exercicio9();
            break;
        case 10:
            exercicio10();
            break;
        }
    }
}

