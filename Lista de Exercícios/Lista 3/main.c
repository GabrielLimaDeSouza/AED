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
    printf("1 - Faça um algoritmo que leia um conjunto de números (X) e imprima a\n"
    "quantidade de números pares (QPares) e a quantidade de números impares\n"
    "(QImpares) lidos. Admita que o valor 9999 é utilizado como\n"
    "sentinela (FLAG) para fim de leitura. Ex.: 1,2,3,4,5,9999 => Pares=2 Impares=3\n");
    printf("\n");
    printf("Digite um número: ");
    scanf("%i",&num);
    while (num!=9999){
        if (num%2==0){
            QPAR = QPAR + 1;
        }
        else {
            QIMPAR = QIMPAR + 1;
        }
    printf("Digite outro número: ");
    scanf("%i",&num);
    }
    printf("A quantidade de números pares digitados foi: %i\n",QPAR);
    printf("A quantidade de números ímpares digitados foi: %i\n",QIMPAR);
    printf("\n");
    /*
        Entrada             Saída Esperada   Saída do Programa   Observação
        1,74,51,29,5        1 PAR, 4 ÍMPAR   1 PAR, 4 ÍMPAR          OK
        12,49,54,198,19     3 PAR, 2 ÍMPAR   3 PAR, 2 ÍMPAR          OK
        1079,5487,4178      1 PAR, 2 ÍMPAR   1 PAR, 2 ÍMPAR          OK
    */
}

void exercicio2()
{
    printf("\n");
    printf("2 - Faça um programa que leia um conjunto indeterminado de números\n"
    "inteiros positivos e imprima o maior, o\n"
    "menor e a média aritmética desse conjunto de dados.(Flag -1).\n"
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
        printf("Digite outro número: ");
        scanf("%i",&num);
    }
    media = (float)soma/contador;
    printf("O maior número digitado foi: %i\n",maior);
    printf("O menor número digitado foi: %i\n",menor);
    printf("A média dos números digitados foi: %.2f\n",media);
    printf("\n");
    /*
      Entrada            Saída Esperada                     Saída do Programa             Observação
      27,48,13,2         MAIOR=48,MENOR=2,MÉDIA=22,5        PAR, 4 ÍMPAR                      OK
      39,24,12           MAIOR=39,MENOR=12,MÉDIA=25         MAIOR=39,MENOR=12,MÉDIA=25        OK
      425,687,128        MAIOR=687,MENOR=128,MÉDIA=413,33   MAIOR=687,MENOR=128,MÉDIA=413,33  OK
    */
}

void exercicio3()
{
    printf("\n");
    printf("3 - Escrever um programa em C, para calcular e imprimir o fatorial\n"
    "de um número lido do teclado.\n"
    "Ex. Fatorial de 5! = 5x4x3x2x1=120\n");
    printf("\n");
    int num,fat=1,i;
    printf("Digite um número para calcular seu fatorial: ");
    scanf("%i",&num);
    i = num;
    while (i>0){
        fat = fat * i;
        i--;
    }
    printf("O fatorial de %i é: %i",num,fat);
    printf("\n");
    /*
        Entrada             Saída Esperada   Saída do Programa   Observação
           5                     120               120               OK
           7                     5040              5040              OK
           4                     24                24                OK
    */
}

void exercicio4()
{
    printf("\n");
    printf("4 – Calcule o valor da seguinte série lido a quantidade de termos:"
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
    printf("O resultado de S é: %f",S);
    printf("\n");
    /*
        Entrada             Saída Esperada   Saída do Programa   Observação
           1                    0,9629...        0,9629...           OK
           2                    0,9709...        0,9709...           OK
           3                    0,9679           0,9679...           OK
    */
}

void exercicio5()
{

    int num,n2=1,n1=1,n3,fibo=0;
    printf("5 - Digite quantos termos da série de fibonacci você deseja: ");
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
        Entrada          Saída Esperada             Saída do Programa              Observação
           5               1,1,2,3,5                    1,1,2,3,5                      OK
           10          1,1,2,3,5,8,13,21,34,55    1,1,2,3,5,8,13,21,34,55              OK
           1                   1                            1                          OK
    */
}

void exercicio6()
{
    printf("\n");
    printf("6 - Fazer um algoritmo para calcular o valor de s,\n"
           "dado por, sendo o valor de N deverá se lido do teclado\n"
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
    printf("O resultado é %.2f\n",resultado);
    printf("\n");
    /*
        Entrada          Saída Esperada             Saída do Programa              Observação
           1                   1                            1                          OK
           2                 -1,5                         -1,5                         OK
           3                -0,67                        -0,67                         OK
    */
}

void exercicio7()
{
    setlocale(LC_ALL,"portugusese");
    printf("\n");
    printf("7 - Números palíndromos são aqueles que escritos da direita para esquerda\n"
    "ou da esquerda para direita tem o mesmo valor. Exemplo:929, 44, 97379.\n"
    "Fazer um algoritmo que imprima todos os números palíndromos de 10000 a 99999.\n");
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
        Entrada Saída Esperada                        Saída do Programa                    Observação
           -    Números palíndromos de 10000 a 99999  Números palíndromos de 10000 a 99999     OK
    */
}

void exercicio8()
{
    printf("\n");
    printf("8 - O numero 3025 possui a seguinte característica:\n"
    "30 + 25 = 55\n"
    "55^2 = 3025\n"
    "Quantos e quais são os números de 4 dígitos possuem essa característica?\n");
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
        Entrada             Saída Esperada   Saída do Programa   Observação
           -                2025,3025,9801   2025,3025,9801          OK
    */
}

void exercicio9()
{
    setlocale(LC_ALL,"portuguese");
    printf("\n");
    printf("9 - Faça um programa para um jogo de cara ou coroa.\n"
    "Neste caso, o jogador escolhe cara ou coroa\n"
    "0 – cara e 1 – para coroa) mostre ao final de 10 tentativas,\n"
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
            printf("\nParabéns você acertou!\n");
        }
        else {
            erros = erros + 1;
            printf("\nInfelizmente você errou!\n");
        }
        printf("\nDigite 0 para escolher Cara ou Digite 1 para escolher Coroa: ");
        scanf("%i",&escolha);
    }
    printf("\nVocê teve %i acertos e %i erros!!!\n",acertos,erros);
    printf("\n");
    /*
            Entrada               Saída do Programa         Observação
        0,1,1,1,0,0,0,1,0,1      4 acertos e 6 erros            OK
        1,0,1,0,1,1,1,0,1,1      7 acertos e 3 erros            OK
    */
}

void exercicio10()
{
    printf("\n");
    printf("10 - Faça um programa para adivinhar um número escolhido pelo usuário,\n"
    "entre 1 e 1023. Indique ao final quantas tentativas foram necessárias.\n"
    "O programa deverá localizar o número escolhido pelo usuário em no máximo 10 tentativas!\n"
    "Utilize a seguinte proposta. Pegue o valor intermediário e pergunte ao usuário se o número é\n"
    "igual(=), maior(>) ou menor(<) que o que foi escolhido.\n"
    "Se for (=) implica que acertou! Se for maior\n"
    "escolha agora o número intermediário entre o que foi perguntado e o último,\n"
    "caso contrário escolha o intermediário entre o primeiro e o que foi perguntado,\n"
    "seguindo assim até acertar!\n"
    "Verifique que você conseguirá acertar qualquer número em no máximo 10 tentativas!!!\n");
    printf("\n");
    int maximo=1024,minimo=0,media=512,tentativas=1,x=0;
    char resposta[2];
    printf("Pense em um número de 1 a 1023!");
    printf("\n");
    while(x!=61)
    {
        printf("%i\n",media);
        printf("Esse número é maior >,< ou = ao número escolhido: ");
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
    printf("\nConsegui acertar seu número em %i tentativas!\n",tentativas);
    printf("\n");
    /*
        Entrada     Saída Esperada       Saída do Programa       Observação
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
        printf("\n");
        printf("Escolha uma opção: ");
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
