import java.io.*;

class ArquivoTextoLeitura {

	private BufferedReader entrada;
	
	ArquivoTextoLeitura(String nomeArquivo) {	 
		
		try {
			entrada = new BufferedReader(new FileReader(nomeArquivo));
		}
		catch (FileNotFoundException excecao) {
			System.out.println("Arquivo nao encontrado");
		}
	}
	
	public void fecharArquivo() {
		
		try {
			entrada.close();
		}
		catch (IOException excecao) {
			System.out.println("Erro no fechamento do arquivo de leitura: " + excecao);	
		}
	}
	
	@SuppressWarnings("finally")
	public String ler() {
		
		String textoEntrada = null;
		
		try {
			textoEntrada = entrada.readLine();
		}
		catch (EOFException excecao) { //Excecao de final de arquivo.
			textoEntrada = null;
		}
		catch (IOException excecao) {
			System.out.println("Erro de leitura: " + excecao);
			textoEntrada = null;
		}
		finally {
			return textoEntrada;
		}
	}
}

public class Main {
	 
	public static class Serie {
		  private String nome;
		  private String formato;
		  private String duracao;
		  private String paisOrigem;
		  private String idiomaOrigem;
		  private String emissora;
		  private String data;
		  private int numTemporadas;
		  private int numEpisodios;

		  public Serie(String nome, String formato, String duracao, String paisOrigem, String idiomaOrigem, String emissora, String data, int numTemporadas, int numEpisodios){
		    this.nome = nome;
		    this.formato = formato;
		    this.duracao = duracao;
		    this.paisOrigem = paisOrigem;
		    this.idiomaOrigem = idiomaOrigem;
		    this.emissora = emissora;
		    this.data = data;
		    this.numTemporadas = numTemporadas;
		    this.numEpisodios = numEpisodios;
		  }
		  
		  public Serie() {
			    this.nome = "";
			    this.formato = "";
			    this.duracao = "";
			    this.paisOrigem = "";
			    this.idiomaOrigem = "";
			    this.emissora = "";
			    this.data = "";
			    this.numTemporadas = 0;
			    this.numEpisodios = 0;
		  }
		  
		  public void setNome(String nome) {
			  this.nome = nome;
		  }
		  
		  public String getNome() {
			  return this.nome;
		  }
		  
		  public void setFormato(String formato) {
			  this.formato = formato;
		  }
		  
		  public String getFormato() {
			  return this.formato;
		  }
		  
		  public void setDuracao(String duracao) {
			  this.duracao = duracao;
		  }
		  
		  public String getDuracao() {
			  return this.duracao;
		  }
		  
		  public void setPaisOrigem(String paisOrigem) {
			  this.paisOrigem = paisOrigem;
		  }
		  
		  public String getPaisOrigem() {
			  return this.paisOrigem;
		  }
		  
		  public void setIdiomaOrigem(String idiomaOrigem) {
			  this.idiomaOrigem = idiomaOrigem;
		  }
		  
		  public String getIdiomaOrigem() {
			  return this.idiomaOrigem;
		  }
		  
		  public void setEmissora(String emissora) {
			  this.emissora = emissora;
		  }
		  
		  public String getEmissora() {
			  return this.emissora;
		  }
		  
		  public void setData(String data) {
			  this.data = data;
		  }
		  
		  public String getData() {
			  return this.data;
		  }
		  
		  public void setNumTemporadas(int numTemporadas) {
			  this.numTemporadas = numTemporadas;
		  }
		  
		  public int getNumTemporadas() {
			  return this.numTemporadas;
		  }
		  
		  public void setNumEpisodios(int numEpisodios) {
			  this.numEpisodios = numEpisodios;
		  }
		  
		  public int getNumEpisodios() {
			  return this.numEpisodios;
		  }
		  
			public void imprimir() {
				System.out.println(this.nome + " ## "+this.formato+ " ## "+this.duracao+ " ## "+this.paisOrigem+" ## "+this.idiomaOrigem+ " ## "+this.emissora+" ## "+this.data+" ## "+this.numTemporadas+" ## "+this.numEpisodios);
			}
			
			public Serie cloneSerie() {
				Serie serie= new Serie();
				serie.data = this.data;
				serie.duracao = this.duracao;
				serie.emissora = this.emissora;
				serie.formato = this.formato;
				serie.idiomaOrigem = this.idiomaOrigem;
				serie.nome = this.nome;
				serie.numEpisodios = this.numEpisodios;
				serie.numTemporadas = this.numTemporadas;
				serie.paisOrigem = this.paisOrigem;
				
				return serie;
			}
			
			public void ler(String textoLeitura) {
				
				String[] atributo = textoLeitura.split(";");
				this.nome = atributo[0];
			    this.formato = atributo[1];
			    this.duracao = atributo[2];
			    this.paisOrigem = atributo[3];
			    this.idiomaOrigem = atributo[4];
			    this.emissora = atributo[5];
			    this.data = atributo[6];
			    this.numTemporadas = Integer.parseInt(atributo[7]);
			    this.numEpisodios = Integer.parseInt(atributo[8]);
			}
	}

	public static void main(String[] args) { 
		String textoLeitura;
		ArquivoTextoLeitura leitura;
		String nomeArquivoLeitura = "/tmp/data.txt";
		Serie[] series = new Serie[62];
		
		leitura = new ArquivoTextoLeitura(nomeArquivoLeitura);
		textoLeitura = leitura.ler();
		textoLeitura = leitura.ler();
		int i=0;
		while(textoLeitura != null) {
			series[i] = new Serie();
			series[i].ler(textoLeitura);
			i++;
			textoLeitura = leitura.ler();
		}
		String s="";
		int j=0;
		while(!s.equals("FIM") && j<i) {
			s = MyIO.readLine();
			for(int k=0;k<i;k++) {
				if(series[k].nome.equals(s)) {
					series[k].imprimir();
				}
			}
			j++;
		}
		leitura.fecharArquivo();
	}
}
