package lista1;

public class Ex3 {

	public static void main(String[] args) {
		int velocidade=0,valor=1,arrecadacao=0,qtd=0;
		for (int i=0;i<5;i++) {
			velocidade = MyIO.readInt("Digite a velocidade do ve�culo "+valor+": ");
			if(velocidade>60) {
				qtd++;
				arrecadacao = arrecadacao + 150;
			}
			valor++;
		}
		System.out.println(qtd + " ve�culos est�o com a velocidade acima de 60km/h!");
		System.out.println("O valor arrecadado com multas ser� de R$"+arrecadacao+"!");
	}
}
