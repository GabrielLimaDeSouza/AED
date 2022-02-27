float calculaH(int n)
{
    int i,denominador=3,numerador=2,sinal=1;
    float H=0,fracao;
    for (i=0;i<n;i++)
    {
        fracao = (float)numerador/denominador;
        H = H + fracao*sinal;
        numerador = numerador + 2;
        denominador = denominador + 2;
        sinal = sinal*(-1);
    }
    return H;
}
