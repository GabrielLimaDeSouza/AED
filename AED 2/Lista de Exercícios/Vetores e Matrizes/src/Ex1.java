
public class Ex1 {

	/*Fa�a um programa, em Java, para corrigir provas de m�ltipla escolha. Cada prova tem oito
	quest�es e cada quest�o vale um ponto. O primeiro conjunto de dados a ser lido � o
	gabarito da prova. Os outros dados s�o os n�meros dos alunos e suas respectivas respostas
	�s quest�es da prova. Existem dez alunos matriculados. Calcule e mostre:
	
	a) o n�mero e a nota de cada aluno;
	b) a porcentagem de aprova��o, sabendo-se que a nota m�nima necess�ria para
	aprova��o � cinco. */
	
	public static void main(String[] args) {
		int contador=1;
		String gabarito[] = new String[8];
		int numaluno[] = new int[10];
		float notas[] = new float[10];
		String letra;
		for (int i=0; i<8; i++) {
			letra = MyIO.readString("Digite a resposta da "+contador+" quest�o do gabarito: ");
			gabarito[i] = letra;
			contador++;
		}
		for (int i=0; i<10; i++) {
			contador = 1;
			numaluno[i]= MyIO.readInt("Digite o n�mero do aluno: ");
			int nota=0;
			for(int j=0;j<8;j++) {
				String alternativa = MyIO.readString("Digite a resposta da "+contador+" quest�o desse aluno: ");
				contador++;
				if((alternativa.compareTo(gabarito[j]))==0) {
					nota++;
				}
			}
			notas[i]=nota;
		}
		int aprovacao=0;
		for (int i=0; i<10;i++) {
			MyIO.println("N�mero do aluno: "+numaluno[i]+" ,Nota do Aluno: "+notas[i]);
			if(notas[i]>=5) {
				aprovacao++;
			}
		}
		float porcentagem = (float)((aprovacao*100)/10);
		MyIO.println("A porcentagem de alunos aprovados � de: "+porcentagem+"%!");
		
	}

}
