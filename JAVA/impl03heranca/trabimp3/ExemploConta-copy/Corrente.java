
/**
 * Escreva uma descrição da classe Corrente aqui.
 * 
 * @author (seu nome) 
 * @version (um número da versão ou uma data)
 */
public class Corrente extends Conta
{
    // variáveis de instância - substitua o exemplo abaixo pelo seu próprio
    private double limiteNegativo;

    /**
     * Construtor para objetos da classe Corrente
     */
    public Corrente(Cliente cliente, int agencia, int numero, double valor){
        super(cliente, agencia, numero, valor);
        this.limiteNegativo = 100;
    }

    public void setLimiteNegativo(double novoLimite){
        this.limiteNegativo = novoLimite;
    }
    
    public double getLimiteNegativo(){
        return limiteNegativo;
    }
    
    public String toString(){
        return (super.toString() + "\nLimite negativo: " + limiteNegativo);
    }
}
