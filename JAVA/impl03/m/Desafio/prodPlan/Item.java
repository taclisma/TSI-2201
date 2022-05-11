package prodPlan;


/**
 * Escreva a descrição da classe Item aqui.
 * 
 * @author (seu nome) 
 * @version (número de versão ou data)
 */
public class Item
{
    // variáveis de instância - substitua o exemplo abaixo pelo seu próprio
    private Parte parte;
    private int quantidade;

    /**
     * COnstrutor para objetos da classe Item
     */
    //composição com parte
    public Item(Parte parte, int quantidade){
        // inicializa variáveis de instância
        this.parte = parte;
        this.quantidade = quantidade;
    }

    public double calculaValor(){
        return quantidade;
    }
    
    public String toString(){
        return ("Parte = " + parte + "\nQuantidade = " + quantidade);
    }
}
