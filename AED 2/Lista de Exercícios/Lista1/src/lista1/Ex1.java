package lista1;

public class ex1 {
	public static void main(String[] args) {
		float salario=0;
		salario = MyIO.readFloat("Digite o sal�rio atual do funcion�rio: ");
		if(salario<=1200) {
			salario = (float)((float)salario * 1.1);
		}
		else {
			salario = (float)((float)salario * 1.05);
		}
		MyIO.println("O novo sal�rio do funcion�rio sera de R$" + salario);
	}
}
