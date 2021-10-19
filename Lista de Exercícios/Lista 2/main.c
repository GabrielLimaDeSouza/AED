#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void menu ();
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

int main()
{
    setlocale (LC_ALL,"portuguese");
    menu();
    return 0;
}

void exercicio1()
{
    printf("\n");
    printf("Esse programa l� um n�mero inteiro e diz se � par ou �mpar!\n");
    printf("\n");
    int a;
    printf("Digite um valor: ");
    scanf("%i",&a);
    if (a%2==0){
        printf("Esse n�mero � par!");
    }
    else {
        printf("Esse n�mero � �mpar!");
    }
    /*
    Casos de teste:
    Entrada: 37,2654,23
    Sa�da esperada: �mpar,Par,�mpar
    Sa�da do programa: �mpar,Par,�mpar
    Observa��o: OK,OK,OK
    */
}


void exercicio2()
{
    setlocale (LC_ALL,"portuguese");
    printf("\n");
    printf("Esse programa l� o nome de um aluno e suas tr�s notas,\n"
            "calcula a m�dia e exibe Aprovado se nota >= 6,\n"
            "ou reprovado se nota<6 !\n");
    printf("\n");
    char nome[70];
    float nota1,nota2,nota3,media;
    printf("Digite o nome de um aluno: ");
    fflush(stdin);
    scanf("%s",nome);
    printf("Digite a primeira nota desse aluno: ");
    fflush(stdin);
    scanf("%f",&nota1);
    printf("Digite a segunda nota desse aluno: ");
    fflush(stdin);
    scanf("%f",&nota2);
    printf("Digite a terceira nota desse aluno: ");
    fflush(stdin);
    scanf("%f",&nota3);
    media = (nota1+nota2+nota3)/3;
    if (media>=6){
        printf("O aluno %s est� aprovado com a m�dia %.2f!",nome,media);
    }
    else {
        printf("O aluno %s foi reprovado pois est� com a m�dia %.2f!",nome,media);
    }
    /*
    Casos de teste:
    Entrada: 10,8,6 / 2,3,5  / 3,8,7
    Sa�da esperada: Aprovado com m�dia 8  / Reprovado com m�dia 3,33 / Aprovado com m�dia 6
    Sa�da do programa: Aprovado com m�dia 8 / Reprovado com m�dia 3,33 / Aprovado com m�dia 6
    Observa��o: OK / OK / OK
    */
}

void exercicio3()
{
    printf("\n");
    printf("Esse algoritmo l� a temperatura da �gua e mostra se ela est� no estado s�lido, l�quido ou gasoso!\n");
    printf("\n");
    float temperatura;
    printf("Digite a temperatura da �gua: ");
    scanf("%f",&temperatura);
    if (temperatura>100) {
        printf("A �gua est� em estado gasoso!");
    }
    else {
        if (temperatura<0){
            printf("A �gua est� em estado s�lido!");
        }
        else {
            printf("A �gua est� em estado l�quido!");
        }
    }
    /*
    Casos de teste:
    Entrada: 100 / 100,01  / -0,1
    Sa�da esperada: L�quido  / Gasoso / S�lido
    Sa�da do programa: L�quida / Gasoso / S�lido
    Observa��o: OK / OK / OK
    */
}

void exercicio4()
{
    setlocale(LC_ALL,"portuguese");
    printf("\n");
    printf("Leia um valor X e se ele for menor que 0 avalie Y = x^2 + 4. Se ele for maior que 0 avalie x^3\n"
    "-3 e se ele for igual a 0 de "
    "uma mensagem de erro\n");
    printf("\n");
    int valor,y;
    printf("Digite um valor: ");
    scanf("%i",&valor);
    if (valor<0){
        y = (pow(valor,2))+ 4;
        printf("O valor dessa express�o � %i!",y);
    }
    else {
        y = (pow(valor,3))- 3;
        printf("O valor dessa express�o � %i!",y);
    }
    if (valor == 0){
       printf("Erro! Valor dever� ser diferente de 0!");
    }
    /*
    Casos de teste:
    Entrada: -2 / 1 / 5
    Sa�da esperada: 8  / -2 / 122
    Sa�da do programa: 8 / -2 / 122
    Observa��o: OK / OK / OK
    */
}

void exercicio5()
{
    printf("\n");
    printf("Construa um algoritmo que receba como entrada tr�s valores (A,B e C).\n"
    "Ap�s o processamento o menor valor dever� estar em A e o maior valor em C,\n"
    "e o valor intermedi�rio em B. Imprima A,B e C\n");
    printf("\n");
    float A,B,C,valor1,valor2,valor3;
    printf("Digite o primeiro valor: ");
    scanf("%f",&valor1);
    printf("Digite o segundo valor: ");
    scanf("%f",&valor2);
    printf("Digite o terceiro valor: ");
    scanf("%f",&valor3);
    if (valor1>valor2) {
        if (valor1>valor3){
            C = valor1;
        }
    }
    if (valor2>valor1){
        if (valor2>valor3) {
            C = valor2;
        }
    }
    if (valor3>valor2){
        if (valor3>valor1){
            C = valor3;
        }
    }
    if (valor1<valor2) {
        if (valor1<valor3){
            A = valor1;
        }
    }
    if (valor2<valor1){
        if (valor2<valor3) {
            A = valor2;
        }
    }
    if (valor3<valor2){
        if (valor3<valor1){
            A = valor3;
        }
    }
    if (valor1>valor2) {
        if (valor1<valor3){
            B = valor1;
        }
    }
    if (valor2>valor1){
        if (valor2<valor3) {
            B = valor2;
        }
    }
    if (valor3>valor2){
        if (valor3<valor1){
            B = valor3;
        }
    }
    if (valor1>valor3) {
        if (valor1<valor2){
            B = valor1;
        }
    }
    if (valor2>valor3){
        if (valor2<valor1) {
            B = valor2;
        }
    }
    if (valor3>valor1){
        if (valor3<valor2){
            B = valor3;
        }
    }
    printf("A = %.2f B = %.2f C = %.2f",A,B,C);
    /*
    Casos de teste:
    Entrada:  30,10,20 / 5,200,150 / 2,4 , 2,6 , 2,5
    Sa�da esperada: A = 10, B = 20,C = 30 / A = 5, B = 150, C = 200 / A = 2,4 , B = 2,5 , C = 2,6
    Sa�da do programa: A = 10,B = 20, C = 30 / A = 5, B = 150, C = 200 / A = 2,4 , B = 2,5 , C = 2,6
    Observa��o: OK / OK / OK
    */
}


void exercicio6()
{
    printf("\n");
    printf("Desenvolver um algoritmo que leia tr�s n�meros inteiros: X, Y, Z\n"
    "e verifique se o n�mero X � divis�vel por Y e por Z\n"
    "O algoritmo dever� mostrar as poss�veis mensagens: \n"
    "- o n�mero � divis�vel por Y e Z\n"
    "- o n�mero � divis�vel por Y mas n�o por Z\n"
    "- o n�mero � divis�vel por Z mas n�o por Y\n"
    "- o n�mero n�o � divis�vel nem Y nem por Z\n");
    printf("\n");
    int num,y,z;
    printf("Digite um n�mero: ");
    scanf("%i",&num);
    printf("Digite outro n�mero: ");
    scanf("%i",&y);
    printf("Digite outro n�mero: ");
    scanf("%i",&z);
    if (num%y==0){
        if (num%z==0){
            printf("O n�mero %i � divis�vel por %i e por %i!",num,y,z);
        }
        else {
            printf("O n�mero %i � divis�vel por %i mas n�o por %i!",num,y,z);
        }
    }
    if (num%z == 0 && num%y != 0){
            printf("O n�mero %i � divis�vel por %i mas n�o por %i",num,z,y);
        }
    if (num%z != 0 && num%y != 0){
            printf("O n�mero %i n�o � divis�vel por %i nem por %i",num,y,z);
        }
    /*
    Casos de teste:
    Entrada: 10,5,2 / 9,3,2 / 7,3,2 / 25 , 5 , 2
    Sa�da esperada: 10 � divis�vel por 5 e 2 / 9 � divis�vel por 3 mas n�o por 2 / 7 n�o � divis�vel por 3 nem por 2 / 25 � divis�vel por 5 mas n�o por 2
    Sa�da do programa: 10 � divis�vel por 5 e 2 / 9 � divis�vel por 3 mas n�o por 2 / 7 n�o � divis�vel por 3 nem por 2 / 25 � divis�vel por 5 mas n�o por 2
    Observa��o: OK / OK / OK / OK
    */
}


void exercicio7()
{
    setlocale (LC_ALL,"portuguese");
    printf("\n");
    printf("O numero 3025 possui a seguinte caracter�stica: \n"
    "30 + 25 = 55\n"
    "55^2 = 3025\n"
    "Fazer um algoritmo que dado um numero de 4 d�gitos\n"
    "(verifique se o n�mero pertence a faixa) calcule e escreva se ele\n"
    "possui ou n�o esta caracter�stica\n");
    printf("\n");
    int num,metade1,soma,metade2,potencia;
    printf("Digite um n�mero de 4 d�gitos: ");
    scanf("%i",&num);
    metade1 = num/100;
    metade2 = num%100;
    soma = metade1 + metade2;
    potencia = pow(soma,2);
    if (num==potencia){
        printf("O n�mero %i possui esta caracter�stica! ",num);
    }
    else {
        printf("O n�mero %i n�o possui esta caracter�stica!",num);
    }
    /*
    Casos de teste:
    Entrada: 3025 / 9801 / 3329
    Sa�da esperada: Possui a caracter�stica / Possui a caracter�stica / N�o possui a caracter�stica
    Sa�da do programa: Possui a caracter�stica / Possui a caracter�stica / N�o possui a caracter�stica
    Observa��o: OK / OK / OK
    */
}


void exercicio8()
{
    int num;
    printf("\n");
    printf("Ler um c�digo do teclado e mostrar o nome correspondente, de acordo com a lista: \n"
    "221 Bernardo\n"
    "211 Eust�quio\n"
    "311 Luiz\n"
    "312 M�rio\n"
    "332 Artur\n");
    printf("\n");
    printf("Digite um c�digo: ");
    scanf("%i",&num);
    switch (num)
    {
        case 221:
            printf("Bernardo");
            break;
        case 211:
            printf("Eust�quio");
            break;
        case 311:
            printf("Luiz");
            break;
        case 312:
            printf("M�rio");
            break;
        case 332:
            printf("Artur");
            break;
        default:
            printf("C�digo inv�lido!");
    }
    /*
    Casos de teste:
    Entrada: 221 / 332 / 206
    Sa�da esperada: Bernardo / Artur / C�digo inv�lido
    Sa�da do programa: Bernardo / Artur / C�digo inv�lido
    Observa��o: OK / OK / OK
    */
}


void exercicio9()
{
    printf("\n");
    printf("N�meros pal�ndromos s�o aqueles que escritos da direita para esquerda\n"
            "ou da esquerda para direita tem o mesmo valor\n"
            "Exemplo:929, 44, 97379. Fazer um algoritmo que dado um numero de 5 d�gitos\n"
            "calcule e escreva se este e ou n�o pal�ndromo\n");
    printf("\n");
    int num,dig1,dig2,dig4,dig5;
    printf("Digite um n�mero de 5 d�gitos: ");
    scanf("%i",&num);
    dig1 = num%10;
    num = num/10;
    dig2 = num%10;
    num = num/100;
    dig4 = num%10;
    num = num/10;
    dig5 = num%10;
    if ((dig1==dig5)){
        if ((dig2==dig4)){
            printf("Esse n�mero � pal�ndromo!");
        }
    }
    else {
        printf("Esse n�mero n�o � pal�ndromo!");
    }
    /*
    Casos de teste:
    Entrada: 10201 / 40904 / 68215
    Sa�da esperada: Pal�ndromo / Pal�ndromo / N�o Pal�ndromo
    Sa�da do programa: Pal�ndromo / Pal�ndromo / N�o Pal�ndromo
    Observa��o: OK / OK / OK
    */
}


void exercicio10()
{
    setlocale(LC_ALL,"portuguese");
    char tipo;
    float conta,m3;
    printf("\n");
    printf("Desenvolver um algoritmo para calcular a conta de �gua para a SANEAGO\n"
    "O custo da �gua varia dependendo do tipo do\n"
    "consumidor - residencial, comercial ou industrial. A regra para calcular a conta �:\n"
    "� Residencial: R$ 75,00 de taxa mais R$ 3,50 por m3 gastos\n"
    "� Comercial: R$ 500,00 para os primeiros 80 m3 gastos mais R$ 5,50 por m3 gastos acima dos 80 m3\n"
    "� Industrial: R$ 800,00 para os primeiros 100 m3 gastos mas R$ 8,00 por m3 gastos acima dos 100 m3\n"
    "O algoritmo devera ler a conta do cliente, seu tipo (residencial, comercial e industrial)\n"
    "e o seu consumo de �gua em metros cubos.\n"
    "Como resultado imprimir o valor a ser pago pelo mesmo\n");
    printf("\n");
    printf("Digite o tipo do consumo R - Para residencial,C - Para comercial ou I - Para industrial: ");
    fflush(stdin);
    scanf("%c",&tipo);
    printf("Digite o consumo de �gua em metros c�bicos: ");
    fflush(stdin);
    scanf("%f",&m3);
    if (tipo=='R'){
        conta = 75 + (3.5*m3);
    }
    if (tipo=='C'){
        if (m3<=80){
            conta = 500;
        }
        else {
            conta = 500 + (5.5*(m3-80));
        }
    }
    if (tipo=='I'){
        if (m3<=100){
            conta = 800;
        }
       else {
            conta = 800 + (8*(m3-100));
        }
    }
    printf("O valor da conta �: %.2f",conta);
    /*
    Casos de teste:
    Entrada: R,15 / C,86 / I,187
    Sa�da esperada: 127,5 / 533 / 1496
    Sa�da do programa: 127,5 / 533 / 1496
    Observa��o: OK / OK / OK
    */
}


void menu()
{
    int a;
    printf("Digite um exerc�cio de 1 a 10: ");
    scanf("%i",&a);
    switch(a)
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
        default:
            printf("N�mero inv�lido!");
            break;
    }
}



