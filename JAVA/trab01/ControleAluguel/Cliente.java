
/**
 * Escreva uma descrição da classe Cliente aqui.
 * 
 * @author (seu nome) 
 * @version (um número da versão ou uma data)
 */
public class Cliente extends Pessoa{
    // variáveis de instância - substitua o exemplo abaixo pelo seu próprio
    private double seguroFianca;

    /**
     * Construtor para objetos da classe Cliente
     */
    public Cliente(String nome, String registro, String telefone, Endereco endereco, double seguroFianca){
        // inicializa variáveis de instância
        super(nome, registro, telefone, endereco);
        this.seguroFianca = seguroFianca;
    }

    /**
        metodos get e set
     */
    public void setSeguroFianca(double seguro){
        this.seguroFianca = seguro;
    }
    public double getSeguroFianca(){
        return seguroFianca;
    }
    
}
