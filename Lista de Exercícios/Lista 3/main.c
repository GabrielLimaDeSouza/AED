#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>
#include <conio.h>

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
    setlocale(LC_ALL,"portuguese");
    int num,QPAR=0,QIMPAR=0;
    printf("\n");
    printf("1 - Fa�a um algoritmo que leia um conjunto de n�meros (X) e imprima a\n"
    "quantidade de n�meros pares (QPares) e a quantidade de n�meros impares\n"
    "(QImpares) lidos. Admita que o valor 9999 � utilizado como\n"
    "sentinela (FLAG) para fim de leitura. Ex.: 1,2,3,4,5,9999 => Pares=2 Impares=3\n");
    printf("\n");
    printf("Digite um n�mero: ");
    scanf("%i",&num);
    while (num!=9999){
        if (num%2==0){
            QPAR = QPAR + 1;
        }
        else {
            QIMPAR = QIMPAR + 1;
        }
    printf("Digite outro n�mero: ");
    scanf("%i",&num);
    }
    printf("A quantidade de n�meros pares digitados foi: %i\n",QPAR);
    printf("A quantidade de n�meros �mpares digitados foi: %i\n",QIMPAR);
    printf("\n");
    /*
        Entrada             Sa�da Esperada   Sa�da do Programa   Observa��o
        1,74,51,29,5        1 PAR, 4 �MPAR   1 PAR, 4 �MPAR          OK
        12,49,54,198,19     3 PAR, 2 �MPAR   3 PAR, 2 �MPAR          OK
        1079,5487,4178      1 PAR, 2 �MPAR   1 PAR, 2 �MPAR          OK
    */
}

void exercicio2()
{
    printf("\n");
    printf("2 - Fa�a um programa que leia um conjunto indeterminado de n�meros\n"
    "inteiros positivos e imprima o maior, o\n"
    "menor e a m�dia aritm�tica desse conjunto de dados.(Flag -1).\n"
    "Execute este programa para os seguintes valores\n"
    "1.1,2,3,-1\n"
    "2.3,2,1,-1\n"
    "3.1,3,2,-1\n");
    printf("\n");
    int num,maior,menor,contador=0,soma=0;
    float media;
    printf("Digite um valor: ");
    scanf("%i",&num);
    maior = num;
    menor = num;
    while (num != -1){
        if (num > maior){
            maior = num;
        }
        if (menor > num){
            menor = num;
        }
        contador = contador + 1;
        soma = soma + num;
        printf("Digite outro n�mero: ");
        scanf("%i",&num);
    }
    media = (float)soma/contador;
    printf("O maior n�mero digitado foi: %i\n",maior);
    printf("O menor n�mero digitado foi: %i\n",menor);
    printf("A m�dia dos n�meros digitados foi: %.2f\n",media);
    printf("\n");
    /*
      Entrada            Sa�da Esperada                     Sa�da do Programa             Observa��o
      27,48,13,2         MAIOR=48,MENOR=2,M�DIA=22,5        PAR, 4 �MPAR                      OK
      39,24,12           MAIOR=39,MENOR=12,M�DIA=25         MAIOR=39,MENOR=12,M�DIA=25        OK
      425,687,128        MAIOR=687,MENOR=128,M�DIA=413,33   MAIOR=687,MENOR=128,M�DIA=413,33  OK
    */
}

void exercicio3()
{
    printf("\n");
    printf("3 - Escrever um programa em C, para calcular e imprimir o fatorial\n"
    "de um n�mero lido do teclado.\n"
    "Ex. Fatorial de 5! = 5x4x3x2x1=120\n");
    printf("\n");
    int num,fat=1,i;
    printf("Digite um n�mero para calcular seu fatorial: ");
    scanf("%i",&num);
    i = num;
    while (i>0){
        fat = fat * i;
        i--;
    }
    printf("O fatorial de %i �: %i",num,fat);
    printf("\n");
    /*
        Entrada             Sa�da Esperada   Sa�da do Programa   Observa��o
           5                     120               120               OK
           7                     5040              5040              OK
           4                     24                24                OK
    */
}

void exercicio4()
{
    printf("\n");
    printf("4 � Calcule o valor da seguinte s�rie lido a quantidade de termos:"
    "S = 1 - 1/3^3 + 1/5^3 - 1/7^3 + 1/9^3 - ...");
    printf("\n");
    int qtd,i=0,denominador=3,sinal=1,um=1;
    float S=0;
    printf("Digite a quantidade de termos: ");
    scanf("%i",&qtd);
    for (i=1;i<=qtd;i++){
        S = S+(um - (1/pow(denominador,3)))*sinal;
        um = 0;
        denominador = denominador + 2;
        sinal = sinal * -1;
    }
    printf("O resultado de S �: %f",S);
    printf("\n");
    /*
        Entrada             Sa�da Esperada   Sa�da do Programa   Observa��o
           1                    0,9629...        0,9629...           OK
           2                    0,9709...        0,9709...           OK
           3                    0,9679           0,9679...           OK
    */
}

void exercicio5()
{

    int num,n2=1,n1=1,n3,fibo=0;
    printf("5 - Digite quantos termos da s�rie de fibonacci voc� deseja: ");
    scanf("%i",&num);
    if (num!=1)
    {
        printf("%3i",n1);
        printf("\n");
        printf("%3i",n2);
        printf("\n");
    }
    if (num==1)
    {
        printf("%3i",n1);
        printf("\n");
    }
    fibo = 2;
    while (fibo<num){
        n3 = n1+n2;
        printf("%3i",n3);
        printf("\n");
        n1 = n2;
        n2 = n3;
        fibo = fibo + 1;
    }
    printf("\n");
    /*
        Entrada          Sa�da Esperada             Sa�da do Programa              Observa��o
           5               1,1,2,3,5                    1,1,2,3,5                      OK
           10          1,1,2,3,5,8,13,21,34,55    1,1,2,3,5,8,13,21,34,55              OK
           1                   1                            1                          OK
    */
}

void exercicio6()
{
    printf("\n");
    printf("6 - Fazer um algoritmo para calcular o valor de s,\n"
           "dado por, sendo o valor de N dever� se lido do teclado\n"
           " S = +1/N - 2/N-1 + 3/n-2 - 4/n-3 ...\n");
    printf("\n");
    int m=1,z=1,N,n2;
    float c,e=0,p=0,a=0,n1,resultado=0;
    printf("Digite o valor de N: ");
    scanf("%i",&N);
    n1=N;
    n2=N;
    for (a=0;a!=n2;a++)
    {
        n1=N-a;
        if (n1==0)
        {
            continue;
        }
        c=(float)z/n1;
        z=z+1;
        N=N-a;
        if (m>0)
        {
            m=-1;
            e = (float)c+e;
        }
        else
        {
            (c=c*(-1));
            m=1;
            (p=(float)c+p);
        }
    }
    resultado=(float)p+e;
    printf("O resultado � %.2f\n",resultado);
    printf("\n");
    /*
        Entrada          Sa�da Esperada             Sa�da do Programa              Observa��o
           1                   1                            1                          OK
           2                 -1,5                         -1,5                         OK
           3                -0,67                        -0,67                         OK
    */
}

void exercicio7()
{
    setlocale(LC_ALL,"portugusese");
    printf("\n");
    printf("7 - N�meros pal�ndromos s�o aqueles que escritos da direita para esquerda\n"
    "ou da esquerda para direita tem o mesmo valor. Exemplo:929, 44, 97379.\n"
    "Fazer um algoritmo que imprima todos os n�meros pal�ndromos de 10000 a 99999.\n");
    printf("\n");
    int num,d5,d4,d2,d1,resto;
    for (num=10000;num<=99999;num++){
        d5 = num%10;
        resto = num/10;
        d4 = resto%10;
        resto = resto/100;
        d2 = resto%10;
        resto = resto/10;
        d1 = resto%10;
        if (d5==d1){
            if (d4==d2){
                printf("%i",num);
                printf("\n");
            }
        }
    }
    printf("\n");
    /*
        Entrada Sa�da Esperada                        Sa�da do Programa                    Observa��o
           -    N�meros pal�ndromos de 10000 a 99999  N�meros pal�ndromos de 10000 a 99999     OK
    */
}

void exercicio8()
{
    printf("\n");
    printf("8 - O numero 3025 possui a seguinte caracter�stica:\n"
    "30 + 25 = 55\n"
    "55^2 = 3025\n"
    "Quantos e quais s�o os n�meros de 4 d�gitos possuem essa caracter�stica?\n");
    printf("\n");
    int num,metadef,metadei,soma,quadrado;
    for (num=1000;num<=9999;num++){
        metadef = num%100;
        metadei = num/100;
        soma = metadef + metadei;
        quadrado = pow(soma,2);
        if (quadrado == num){
            printf("%i",num);
            printf("\n");
        }
    }
    printf("\n");
    /*
        Entrada             Sa�da Esperada   Sa�da do Programa   Observa��o
           -                2025,3025,9801   2025,3025,9801          OK
    */
}

void exercicio9()
{
    setlocale(LC_ALL,"portuguese");
    printf("\n");
    printf("9 - Fa�a um programa para um jogo de cara ou coroa.\n"
    "Neste caso, o jogador escolhe cara ou coroa\n"
    "0 � cara e 1 � para coroa) mostre ao final de 10 tentativas,\n"
    "quantas foram certas e quantas erradas.\n"
    "(utilize o comando - para que o computador escolha o resultado)\n");
    printf("\n");
    int escolha,n,acertos=0,erros=0,aleatorio;
    printf("VAMOS JOGAR CARA OU COROA!\n");
    printf("\n");
    printf("Digite 0 para escolher Cara ou Digite 1 para escolher Coroa: ");
    scanf("%i",&escolha);
    srand(time(NULL));
    for (n = 0; n < 10; n ++)
    {
        aleatorio = rand()%2;
        if (escolha==aleatorio){
            acertos = acertos + 1;
            printf("\nParab�ns voc� acertou!\n");
        }
        else {
            erros = erros + 1;
            printf("\nInfelizmente voc� errou!\n");
        }
        printf("\nDigite 0 para escolher Cara ou Digite 1 para escolher Coroa: ");
        scanf("%i",&escolha);
    }
    printf("\nVoc� teve %i acertos e %i erros!!!\n",acertos,erros);
    printf("\n");
    /*
            Entrada               Sa�da do Programa         Observa��o
        0,1,1,1,0,0,0,1,0,1      4 acertos e 6 erros            OK
        1,0,1,0,1,1,1,0,1,1      7 acertos e 3 erros            OK
    */
}

void exercicio10()
{
    printf("\n");
    printf("10 - Fa�a um programa para adivinhar um n�mero escolhido pelo usu�rio,\n"
    "entre 1 e 1023. Indique ao final quantas tentativas foram necess�rias.\n"
    "O programa dever� localizar o n�mero escolhido pelo usu�rio em no m�ximo 10 tentativas!\n"
    "Utilize a seguinte proposta. Pegue o valor intermedi�rio e pergunte ao usu�rio se o n�mero �\n"
    "igual(=), maior(>) ou menor(<) que o que foi escolhido.\n"
    "Se for (=) implica que acertou! Se for maior\n"
    "escolha agora o n�mero intermedi�rio entre o que foi perguntado e o �ltimo,\n"
    "caso contr�rio escolha o intermedi�rio entre o primeiro e o que foi perguntado,\n"
    "seguindo assim at� acertar!\n"
    "Verifique que voc� conseguir� acertar qualquer n�mero em no m�ximo 10 tentativas!!!\n");
    printf("\n");
    int maximo=1024,minimo=0,media=512,tentativas=1,x=0;
    char resposta[2];
    printf("Pense em um n�mero de 1 a 1023!");
    printf("\n");
    while(x!=61)
    {
        printf("%i\n",media);
        printf("Esse n�mero � maior >,< ou = ao n�mero escolhido: ");
        scanf("%s",resposta);
        x = (int)(resposta[0]);
        if (x == 60){
            minimo = media;
            media = (minimo+maximo)/2;
        }
        if (x == 62){
            maximo = media;
            media = (maximo+minimo)/2;
        }
        if (x!=61)
        {
            tentativas++;
        }
    }
    printf("\nConsegui acertar seu n�mero em %i tentativas!\n",tentativas);
    printf("\n");
    /*
        Entrada     Sa�da Esperada       Sa�da do Programa       Observa��o
          333        10 tentativas        10 tentativas              OK
          456         7 tentativas         7 tentativas              OK
          128         3 tentativas         3 tentativas              OK
    */
}

void menu()
{
    int exercicio;
    while(exercicio!=11)
    {
        printf("\n");
        printf("------------------------------\n"
                "1 - Exerc�cio 1\n"
                "2 - Exerc�cio 2\n"
                "3 - Exerc�cio 3\n"
                "4 - Exerc�cio 4\n"
                "5 - Exerc�cio 5\n"
                "6 - Exerc�cio 6\n"
                "7 - Exerc�cio 7\n"
                "8 - Exerc�cio 8\n"
                "9 - Exerc�cio 9\n"
                "10 - Exerc�cio 10\n"
                "11 - Sair\n"
           "------------------------------\n");
        printf("\n");
        printf("Escolha uma op��o: ");
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
