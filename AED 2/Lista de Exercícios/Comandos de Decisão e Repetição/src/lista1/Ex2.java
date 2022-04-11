package lista1;

public class Ex2 {

	public static void main(String[] args) {
		float nota=0,soma=0,media=0;
		int valor = 1;
		for (int i=0;i<3;i++) {
			nota = MyIO.readFloat("Digite a "+valor+" nota do aluno: ");
			soma = soma + nota;
			valor++;
		}
		media = soma/3;
		System.out.print("A média deste aluno é "+media+" e ele está ");
		if (media>=0 && media<4) {
			System.out.println("Reprovado!");
		}
		if (media>=4 && media<6) {
			System.out.println("Exame Especial!");
		}
		if (media>=6 && media<=10) {
			System.out.println("Aprovado!");
		}
	}

}
