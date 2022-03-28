import java.util.Random;

public class Ex2 {
	


	/*2) Faça um programa, em Java, que preencha uma matriz de ordem 3 x 4 (3 linhas e 4
	colunas) com números inteiros e positivos; calcule e mostre:
	a) o maior elemento da matriz e sua posição (linha e coluna);
	b) o menor elemento da matriz e sua posição (linha e coluna). */
	public static void main(String[] args) {
		int[][] mat = new int[3][4];
		Random random = new Random();
		for (int i=0; i<3;i++) {
			for (int j=0; j<4; j++) {
				int numero = random.nextInt(1000);
				mat[i][j] = numero;
			}
		}
		MyIO.println("A matriz criada é: \n");
		for (int i=0; i<3;i++) {
			for (int j=0; j<4; j++) {
				MyIO.print(mat[i][j]+"  ");
			}
			MyIO.print("\n");
		}
		int maior=-1,menor=9999,linhamaior=0,colunamaior=0,linhamenor=0,colunamenor=0;
		for (int i=0; i<3;i++) {
			for (int j=0; j<4; j++) {
				if(mat[i][j] > maior) {
					maior = mat[i][j];
					linhamaior = i;
					colunamaior = j;
				}
				if(mat[i][j] < menor) {
					menor = mat[i][j];
					linhamenor = i;
					colunamenor = j;
				}
			}
		}
		MyIO.println("\nO maior número da matriz é: "+maior+" e está na linha="+linhamaior+",coluna="+colunamaior);
		MyIO.println("O menor número da matriz é: "+menor+" e está na linha="+linhamenor+",coluna="+colunamenor);
	}

}
