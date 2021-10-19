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
    printf("Esse programa lê um número inteiro e diz se é par ou ímpar!\n");
    printf("\n");
    int a;
    printf("Digite um valor: ");
    scanf("%i",&a);
    if (a%2==0){
        printf("Esse número é par!");
    }
    else {
        printf("Esse número é ímpar!");
    }
    /*
    Casos de teste:
    Entrada: 37,2654,23
    Saída esperada: Ímpar,Par,Ímpar
    Saída do programa: ímpar,Par,ímpar
    Observação: OK,OK,OK
    */
}


void exercicio2()
{
    setlocale (LC_ALL,"portuguese");
    printf("\n");
    printf("Esse programa lê o nome de um aluno e suas três notas,\n"
            "calcula a média e exibe Aprovado se nota >= 6,\n"
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
        printf("O aluno %s está aprovado com a média %.2f!",nome,media);
    }
    else {
        printf("O aluno %s foi reprovado pois está com a média %.2f!",nome,media);
    }
    /*
    Casos de teste:
    Entrada: 10,8,6 / 2,3,5  / 3,8,7
    Saída esperada: Aprovado com média 8  / Reprovado com média 3,33 / Aprovado com média 6
    Saída do programa: Aprovado com média 8 / Reprovado com média 3,33 / Aprovado com média 6
    Observação: OK / OK / OK
    */
}

void exercicio3()
{
    printf("\n");
    printf("Esse algoritmo lê a temperatura da água e mostra se ela está no estado sólido, líquido ou gasoso!\n");
    printf("\n");
    float temperatura;
    printf("Digite a temperatura da água: ");
    scanf("%f",&temperatura);
    if (temperatura>100) {
        printf("A água está em estado gasoso!");
    }
    else {
        if (temperatura<0){
            printf("A água está em estado sólido!");
        }
        else {
            printf("A água está em estado líquido!");
        }
    }
    /*
    Casos de teste:
    Entrada: 100 / 100,01  / -0,1
    Saída esperada: Líquido  / Gasoso / Sólido
    Saída do programa: Líquida / Gasoso / Sólido
    Observação: OK / OK / OK
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
        printf("O valor dessa expressão é %i!",y);
    }
    else {
        y = (pow(valor,3))- 3;
        printf("O valor dessa expressão é %i!",y);
    }
    if (valor == 0){
       printf("Erro! Valor deverá ser diferente de 0!");
    }
    /*
    Casos de teste:
    Entrada: -2 / 1 / 5
    Saída esperada: 8  / -2 / 122
    Saída do programa: 8 / -2 / 122
    Observação: OK / OK / OK
    */
}

void exercicio5()
{
    printf("\n");
    printf("Construa um algoritmo que receba como entrada três valores (A,B e C).\n"
    "Após o processamento o menor valor deverá estar em A e o maior valor em C,\n"
    "e o valor intermediário em B. Imprima A,B e C\n");
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
    Saída esperada: A = 10, B = 20,C = 30 / A = 5, B = 150, C = 200 / A = 2,4 , B = 2,5 , C = 2,6
    Saída do programa: A = 10,B = 20, C = 30 / A = 5, B = 150, C = 200 / A = 2,4 , B = 2,5 , C = 2,6
    Observação: OK / OK / OK
    */
}


void exercicio6()
{
    printf("\n");
    printf("Desenvolver um algoritmo que leia três números inteiros: X, Y, Z\n"
    "e verifique se o número X é divisível por Y e por Z\n"
    "O algoritmo deverá mostrar as possíveis mensagens: \n"
    "- o número é divisível por Y e Z\n"
    "- o número é divisível por Y mas não por Z\n"
    "- o número é divisível por Z mas não por Y\n"
    "- o número não é divisível nem Y nem por Z\n");
    printf("\n");
    int num,y,z;
    printf("Digite um número: ");
    scanf("%i",&num);
    printf("Digite outro número: ");
    scanf("%i",&y);
    printf("Digite outro número: ");
    scanf("%i",&z);
    if (num%y==0){
        if (num%z==0){
            printf("O número %i é divisível por %i e por %i!",num,y,z);
        }
        else {
            printf("O número %i é divisível por %i mas não por %i!",num,y,z);
        }
    }
    if (num%z == 0 && num%y != 0){
            printf("O número %i é divisível por %i mas não por %i",num,z,y);
        }
    if (num%z != 0 && num%y != 0){
            printf("O número %i não é divisível por %i nem por %i",num,y,z);
        }
    /*
    Casos de teste:
    Entrada: 10,5,2 / 9,3,2 / 7,3,2 / 25 , 5 , 2
    Saída esperada: 10 é divisível por 5 e 2 / 9 é divisível por 3 mas não por 2 / 7 não é divisível por 3 nem por 2 / 25 é divisível por 5 mas não por 2
    Saída do programa: 10 é divisível por 5 e 2 / 9 é divisível por 3 mas não por 2 / 7 não é divisível por 3 nem por 2 / 25 é divisível por 5 mas não por 2
    Observação: OK / OK / OK / OK
    */
}


void exercicio7()
{
    setlocale (LC_ALL,"portuguese");
    printf("\n");
    printf("O numero 3025 possui a seguinte característica: \n"
    "30 + 25 = 55\n"
    "55^2 = 3025\n"
    "Fazer um algoritmo que dado um numero de 4 dígitos\n"
    "(verifique se o número pertence a faixa) calcule e escreva se ele\n"
    "possui ou não esta característica\n");
    printf("\n");
    int num,metade1,soma,metade2,potencia;
    printf("Digite um número de 4 dígitos: ");
    scanf("%i",&num);
    metade1 = num/100;
    metade2 = num%100;
    soma = metade1 + metade2;
    potencia = pow(soma,2);
    if (num==potencia){
        printf("O número %i possui esta característica! ",num);
    }
    else {
        printf("O número %i não possui esta característica!",num);
    }
    /*
    Casos de teste:
    Entrada: 3025 / 9801 / 3329
    Saída esperada: Possui a característica / Possui a característica / Não possui a característica
    Saída do programa: Possui a característica / Possui a característica / Não possui a característica
    Observação: OK / OK / OK
    */
}


void exercicio8()
{
    int num;
    printf("\n");
    printf("Ler um código do teclado e mostrar o nome correspondente, de acordo com a lista: \n"
    "221 Bernardo\n"
    "211 Eustáquio\n"
    "311 Luiz\n"
    "312 Mário\n"
    "332 Artur\n");
    printf("\n");
    printf("Digite um código: ");
    scanf("%i",&num);
    switch (num)
    {
        case 221:
            printf("Bernardo");
            break;
        case 211:
            printf("Eustáquio");
            break;
        case 311:
            printf("Luiz");
            break;
        case 312:
            printf("Mário");
            break;
        case 332:
            printf("Artur");
            break;
        default:
            printf("Código inválido!");
    }
    /*
    Casos de teste:
    Entrada: 221 / 332 / 206
    Saída esperada: Bernardo / Artur / Código inválido
    Saída do programa: Bernardo / Artur / Código inválido
    Observação: OK / OK / OK
    */
}


void exercicio9()
{
    printf("\n");
    printf("Números palíndromos são aqueles que escritos da direita para esquerda\n"
            "ou da esquerda para direita tem o mesmo valor\n"
            "Exemplo:929, 44, 97379. Fazer um algoritmo que dado um numero de 5 dígitos\n"
            "calcule e escreva se este e ou não palíndromo\n");
    printf("\n");
    int num,dig1,dig2,dig4,dig5;
    printf("Digite um número de 5 dígitos: ");
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
            printf("Esse número é palíndromo!");
        }
    }
    else {
        printf("Esse número não é palíndromo!");
    }
    /*
    Casos de teste:
    Entrada: 10201 / 40904 / 68215
    Saída esperada: Palíndromo / Palíndromo / Não Palíndromo
    Saída do programa: Palíndromo / Palíndromo / Não Palíndromo
    Observação: OK / OK / OK
    */
}


void exercicio10()
{
    setlocale(LC_ALL,"portuguese");
    char tipo;
    float conta,m3;
    printf("\n");
    printf("Desenvolver um algoritmo para calcular a conta de água para a SANEAGO\n"
    "O custo da água varia dependendo do tipo do\n"
    "consumidor - residencial, comercial ou industrial. A regra para calcular a conta é:\n"
    "• Residencial: R$ 75,00 de taxa mais R$ 3,50 por m3 gastos\n"
    "• Comercial: R$ 500,00 para os primeiros 80 m3 gastos mais R$ 5,50 por m3 gastos acima dos 80 m3\n"
    "• Industrial: R$ 800,00 para os primeiros 100 m3 gastos mas R$ 8,00 por m3 gastos acima dos 100 m3\n"
    "O algoritmo devera ler a conta do cliente, seu tipo (residencial, comercial e industrial)\n"
    "e o seu consumo de água em metros cubos.\n"
    "Como resultado imprimir o valor a ser pago pelo mesmo\n");
    printf("\n");
    printf("Digite o tipo do consumo R - Para residencial,C - Para comercial ou I - Para industrial: ");
    fflush(stdin);
    scanf("%c",&tipo);
    printf("Digite o consumo de água em metros cúbicos: ");
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
    printf("O valor da conta é: %.2f",conta);
    /*
    Casos de teste:
    Entrada: R,15 / C,86 / I,187
    Saída esperada: 127,5 / 533 / 1496
    Saída do programa: 127,5 / 533 / 1496
    Observação: OK / OK / OK
    */
}


void menu()
{
    int a;
    printf("Digite um exercício de 1 a 10: ");
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
            printf("Número inválido!");
            break;
    }
}



