
/**
 * aqui o metodo sacar(double) precisa ser obrigatoriamente sobrescrito
 * 
 * @author (seu nome) 
 * @version (número de versão ou data)
 */
public class ContaCorrente extends Conta
{
    // variáveis de instância - substitua o exemplo abaixo pelo seu próprio
    private double limiteNegativo;
    private double limiteUsado;
    
    /**
     * COnstrutor para objetos da classe ContaCorrente
     */
    public ContaCorrente(Cliente cliente, int agencia, int numero, double valor)
    {
        super(cliente, agencia, numero, valor);
        this.limiteNegativo = 100;
        this.limiteUsado = limiteUsado;
    }

    public void setLimiteNegativo(double novoLimite){
        this.limiteNegativo = novoLimite;
    }
    
    public void sacar(double valor){
        if(saldo >= valor){
            saldo -= valor;
        } else {
            if(limiteUsado > 0 && limiteUsado <= valor && limiteUsado >= limiteNegativo){
                limiteUsado += valor;
                saldo -= valor;
            }
        }
    }
    
    public double getLimiteNegativo(){
        return limiteNegativo;
    }
    
    public String toString(){
        return (super.toString() + "\nLimite Negativo = " + limiteNegativo + "\nLimite Usado: " + limiteUsado);
    }
}
