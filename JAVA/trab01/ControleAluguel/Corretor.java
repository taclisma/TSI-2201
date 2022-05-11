/**
 * Escreva uma descrição da classe Cliente aqui.
 * 
 * @author (seu nome) 
 * @version (um número da versão ou uma data)
 */
public class Corretor extends Pessoa{
    // variáveis de instância - substitua o exemplo abaixo pelo seu próprio
    private String creci;
    private double taxaCorretagem;

    /**
     */
    public Corretor(String nome, String registro, String telefone, Endereco endereco, String creci, double taxaCorretagem){
        // inicializa variáveis de instância
        super(nome, registro, telefone, endereco);
        this.creci = creci;
        this.taxaCorretagem = taxaCorretagem;
    }

    /**
        metodos get e set
     */
    public void setTaxaCorretagem(double taxa){
        this.taxaCorretagem = taxa;
    }
    public double getTaxaCorretagem(){
        return taxaCorretagem;
    }
    
    public void setCreci(String creci){
        this.creci = creci;
    }
    public String getCreci(){
        return creci;
    }
}
