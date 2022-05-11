import java.time.LocalDate;

/**
 * Escreva uma descrição da classe Anuncio aqui.
 * 
 * @author (seu nome) 
 * @version (um número da versão ou uma data)
 */
public class Anuncio
{
    // variáveis de instância - substitua o exemplo abaixo pelo seu próprio
    private Pessoa locatario;
    private Imovel imovel;
    private Corretor corretor;
    private double valor;
    private LocalDate data;

    /**
     * Construtor 
     */
    public Anuncio(Imovel imovel, double valor, LocalDate data){
        this.imovel = imovel;
        this.valor = valor;
        this.data = data;
    }
    
    /**
     * getters e setters
     */
    public void setLocatario(Pessoa locatario){
        this.locatario = locatario;
    }
    public void setCorretor(Corretor corretor){
        this.corretor = corretor;
    }
    
    public void setValor (double valor){
        this.valor = valor;
    }
    public double getValor(){
        return valor;
    }
    
    public void setData(LocalDate data){
        this.data = data;
    }
    
    public LocalDate getData(){
        return data;
    }
}
