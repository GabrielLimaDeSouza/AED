package listaverde;


public class recursivo {
	public static int calculaMaiusculo(String texto) {
		int totalMaiusculos=0;
		if(texto.length()>0) {
		      if(Character.isUpperCase(texto.charAt(0))){
		          totalMaiusculos = 1 + calculaMaiusculo(texto.substring(1)); 
		        }
		      else{
		          totalMaiusculos = calculaMaiusculo(texto.substring(1));    
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