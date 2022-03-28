
public class Ex1 {

	/*Faça um programa, em Java, para corrigir provas de múltipla escolha. Cada prova tem oito
	questões e cada questão vale um ponto. O primeiro conjunto de dados a ser lido é o
	gabarito da prova. Os outros dados são os números dos alunos e suas respectivas respostas
	às questões da prova. Existem dez alunos matriculados. Calcule e mostre:
	
	a) o número e a nota de cada aluno;
	b) a porcentagem de aprovação, sabendo-se que a nota mínima necessária para
	aprovação é cinco. */
	
	public static void main(String[] args) {
		int contador=1;
		String gabarito[] = new String[8];
		int numaluno[] = new int[10];
		float notas[] = new float[10];
		String letra;
		for (int i=0; i<8; i++) {
			letra = MyIO.readString("Digite a resposta da "+contador+" questão do gabarito: ");
			gabarito[i] = letra;
			contador++;
		}
		for (int i=0; i<10; i++) {
			contador = 1;
			numaluno[i]= MyIO.readInt("Digite o número do aluno: ");
			int nota=0;
			for(int j=0;j<8;j++) {
				String alternativa = MyIO.readString("Digite a resposta da "+contador+" questão desse aluno: ");
				contador++;
				if((alternativa.compareTo(gabarito[j]))==0) {
					nota++;
				}
			}
			notas[i]=nota;
		}
		int aprovacao=0;
		for (int i=0; i<10;i++) {
			MyIO.println("Número do aluno: "+numaluno[i]+" ,Nota do Aluno: "+notas[i]);
			if(notas[i]>=5) {
				aprovacao++;
			}
		}
		float porcentagem = (float)((aprovacao*100)/10);
		MyIO.println("A porcentagem de alunos aprovados é de: "+porcentagem+"%!");
		
	}

}
