package prodPlan;


/**
 * Escreva a descrição da classe Parafuso aqui.
 * 
 * @author (seu nome) 
 * @version (número de versão ou data)
 */
public class Parafuso extends Parte{
    // variáveis de instância - substitua o exemplo abaixo pelo seu próprio
    private double comprimento;
    private double diametro;
    /**
     * COnstrutor para objetos da classe Parafuso
     */
    public Parafuso(int cod, String nome, /*String descricao,*/double valor, double comprimento, double diametro){
        // inicializa variáveis de instância
        super (cod, nome, valor);
        this.comprimento = comprimento;
        this.diametro = diametro;
    }

    /**
     * Exemplo de método - substitua este comentário pelo seu próprio
     * 
     * @param  y   exemplo de um parâmetro de método
     * @return     a soma de x com y 
     */
    public double calculaValor()
    {
        // ponha seu código aqui
        return valor;
    }
    
    public String toString(){
        return (super.toString() + "\ncomprimento: "+ "\ndiametro: " + diametro);
    }
}
