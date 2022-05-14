
/**
 * Escreva a descrição da classe Poupanca aqui.
 * 
 * @author (seu nome) 
 * @version (número de versão ou data)
 */
public class Poupanca extends Conta
{
    // variáveis de instância - substitua o exemplo abaixo pelo seu próprio
    private int dataRendimento;

    /**
     * COnstrutor para objetos da classe Poupanca
     */
    public Poupanca(Cliente cliente, int agencia, int numero, double valor, int dataRendimento)
    {
         super(cliente, agencia, numero, valor);
         this.dataRendimento = dataRendimento;
    }

   //criar getters e setters
   
    public String toString(){
        return (super.toString() + "\nData Rendimento = " + dataRendimento);
    }
    
    public void render (){
        //implementar esse código
    }
}
