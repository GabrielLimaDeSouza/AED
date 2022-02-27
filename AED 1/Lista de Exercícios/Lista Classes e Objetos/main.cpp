#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

// Criando a classe veículo
using namespace std;
class Veiculo
{
    private:
        int ano;
        string placa;
    public:
        Veiculo();
        int getAno();
        void setAno(int a);
        string getPlaca();
        void setPlaca(string p);
        virtual float calculaFrete(float km)
        {
            cout<<"\n calculo do frete ainda não implementado\n";
            return 0;
        }
};

Veiculo::Veiculo()
{
    cout << "\nExecutando construtor da classe veículo!\n";
}

int Veiculo::getAno(){
    return ano;
}

void Veiculo::setAno(int a){
    ano = a;
}

string Veiculo::getPlaca(){
    return placa;
}

void Veiculo::setPlaca(string p){
    placa = p;
}

// Criando a classe carro
class Carro: public Veiculo
{
    private:
        string modelo;
        float valorbandeirada;
        float valorbase;
    public:
        Carro();
        string getModelo();
        void setModelo(string m);
        float getValorBandeirada();
        void setValorBandeirada(float vban);
        float getValorBase();
        void setValorBase(float vbas);
        float calculaFrete(float km);
};

Carro::Carro()
{
    cout << "\nExecutando construtor da classe automovel\n";
}

string Carro::getModelo()
{
    return modelo;
}

void Carro::setModelo(string m)
{
    modelo = m;
}

float Carro::getValorBandeirada()
{
    return valorbandeirada;
}

void Carro::setValorBandeirada(float vban)
{
    valorbandeirada = vban;
}

float Carro::getValorBase()
{
    return valorbase;
}

void Carro::setValorBase(float vbas)
{
    valorbase = vbas;
}

float Carro::calculaFrete(float km)
{
    float vban = getValorBandeirada();
    float vB = getValorBase();
    return vban+(km*vB);
}

// Criando a classe caminhão
class Caminhao: public Veiculo
{
    private:
        int numpneus;
        float valorbase;
    public:
        Caminhao();
        int getNumPneus();
        void setNumPneus(int n);
        float getValorBase();
        void setValorBase(float vb);
        float calculaFrete(float km);
};

Caminhao::Caminhao()
{
    cout << "\nExecutando construtor da classe caminhão!\n";
}

Caminhao::getNumPneus()
{
    return numpneus;
}

void Caminhao::setNumPneus(int n)
{
    numpneus = n;
}

float Caminhao::getValorBase()
{
    return valorbase;
}

void Caminhao::setValorBase(float vb)
{
    valorbase = vb;
}

float Caminhao::calculaFrete(float km)
{
    float nP = getNumPneus();
    float vB = getValorBase();
    return km*nP*vB;
}

float obterValor(Veiculo *veiculo,float km)
{
    return veiculo->calculaFrete(km);
}

int main()
{
    setlocale(LC_ALL,"portuguese");
    Veiculo *automovel[5];
    Carro *cr;
    Caminhao *ca;
    string placa,modelo;
    int nP,ano,tipo;
    float vB,vban;
    // Solicitando os dados e preenchendo o vetor
    for (int i=0;i<5;i++)
    {
        cout << "Ano de fabricação:"; cin>>ano;
        cout << "Placa:"; cin>>placa;
        cout << "Deseja cadastrar 1 - Caminhão ou 2 - Carro?";
        cin >> tipo;
        if(tipo==1)
        {
            cout <<"Número de pneus:"; cin>>nP;
            cout <<"Valor base:"; cin>>vB;
            ca = new(Caminhao);
            ca->setAno(ano); ca->setPlaca(placa); ca->setNumPneus(nP); ca->setValorBase(vB);
            automovel[i]=ca;
        }
        else
        {
            cout <<"Modelo:"; cin>>modelo;
            cout <<"Valor bandeirada:"; cin>>vban;
            cout <<"Valor base:"; cin>>vB;
            cr = new(Carro);
            cr->setAno(ano); cr->setPlaca(placa); cr->setModelo(modelo); cr->setValorBandeirada(vban); cr->setValorBase(vB);
            automovel[i]=cr;
        }
    }
    // Imprimindo a relação de veículos
    cout << "\n------------------------\n  Relação de Veículos\n------------------------\n";
    for (int i=0;i<5;i++)
    {
        float km;
        cout<<"\nAno de fabricação: "<< automovel[i]->getAno();
        cout<<"\nPlaca: "<< automovel[i]->getPlaca();
        cout<<"\nDigite a quantidade de km rodados: "; cin>>km;
        cout<<"Valor frete = " << obterValor(automovel[i],km);
        cout <<"\n\n";
    }
    return 0;
}
