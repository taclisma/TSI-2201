package prodPlan;


/**
 * 
 */
public abstract class Motor extends Parte{
    // variáveis de instância - substitua o exemplo abaixo pelo seu próprio
    private double potencia;
    private double corrente;
    private int rpm;

    /**
     * Construtor para objetos da classe Motor
     */
    public Motor(int cod, String nome, double valor, double potencia, double corrente, int rpm){
        // inicializa variáveis de instância
        super (cod, nome, valor);
        this.potencia = potencia;
        this.corrente = corrente;
        this.rpm = rpm;
    }

    /**
     * metodos
     */
    /*public double calculaValor(){
        return valor;
    }*/
    public String toString()
    {
        // ponha seu código aqui
        return (super.toString() + "\nPotencia: "+ potencia + 
                "\ncorrente: "+ corrente + "\nrpm: " + rpm);
    }
}
