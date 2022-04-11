
public class Combinador {

	public static void main(String[] args) {
		String a = MyIO.readString();
		String b= MyIO.readString();
		combinador(a,b);
	}
	
	public static void combinador(String a, String b) {
		String resultado="";
		String letraA;
		String letraB; 
		int tamA = a.length();
		int tamB = b.length();
		if(tamA>tamB) {
			for(int i=0;i<b.length();i++) {
				letraA = a.substring(i,i+1);
				letraB = b.substring(i,i+1);
				resultado = resultado + (letraA+letraB);
			}
			a = a.substring(b.length(), a.length());
			resultado = resultado + a;
		}
		else {
			for(int i=0;i<a.length();i++) {
				letraA = a.substring(i,i+1);
				letraB = b.substring(i,i+1);
				resultado = resultado + (letraA+letraB);
			}
			b = b.substring(a.length(), b.length());
			resultado = resultado + b;
		}
		System.out.println(resultado);
		a = MyIO.readString();	
		if(!a.equals("FIM")) {
			b = MyIO.readString();	
			combinador(a,b);	
		}
	}

}
