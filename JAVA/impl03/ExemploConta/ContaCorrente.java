
/**
 * Escreva a descrição da classe ContaCorrente aqui.
 * 
 * @author (seu nome) 
 * @version (número de versão ou data)
 */
public class ContaCorrente extends Conta
{
    // variáveis de instância - substitua o exemplo abaixo pelo seu próprio
    private double limiteNegativo;

    /**
     * COnstrutor para objetos da classe ContaCorrente
     */
    public ContaCorrente(Cliente cliente, int agencia, int numero, double valor)
    {
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
        return (super.toString() + "\nLimite Negativo = " + limiteNegativo);
    }
}
