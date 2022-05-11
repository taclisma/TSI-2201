package prodPlan;


/**
 * Escreva a descrição da classe Diesel aqui.
 * 
 * @author (seu nome) 
 * @version (número de versão ou data)
 */
public class Diesel extends Motor
{
    // variáveis de instância - substitua o exemplo abaixo pelo seu próprio
    private double consumo;

    /**
     * COnstrutor para objetos da classe Diesel
     */
    public Diesel(int cod, String nome, double valor, double potencia, double corrente, int rpm, double consumo){
        // inicializa variáveis de instância
        super (cod, nome, valor, potencia, corrente, rpm);
        this.consumo = consumo;
    }

    /**
     *  método
     */
    public double calculaValor(){
        return valor;
    }
    
    public String toString(){
        // ponha seu código aqui
        return (super.toString() + "\nconsumo: " + consumo);
    }
}
