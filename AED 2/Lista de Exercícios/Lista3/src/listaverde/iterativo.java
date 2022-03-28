package listaverde;


public class iterativo {
	
	public static int calculaMaiusculo(String texto) {
		int totalMaiusculos = 0;
		
		for(int i=0;i<texto.length();i++) {
			char c = texto.charAt(i);
			if(c>='A' && c<='Z') {
				totalMaiusculos++;
			}
		}
			
			return totalMaiusculos;
	}

	public static void main(String[] args) {
		int total;
		String entrada = MyIO.readLine();
		
		while(!entrada.equals("FIM")) {
			total = calculaMaiusculo(entrada);
			System.out.println(total);
			entrada = MyIO.readLine();
		}

	}

}
