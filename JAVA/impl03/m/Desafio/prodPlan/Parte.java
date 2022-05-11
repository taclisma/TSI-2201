package prodPlan;


/**
 * Escreva a descrição da classe Parte aqui.
 * 
 * @author (seu nome) 
 * @version (número de versão ou data)
 */
public abstract class Parte
{
    // variáveis de instância - substitua o exemplo abaixo pelo seu próprio
    protected int cod;
    protected String nome;
    protected double valor;
    //protected String descricao;

    /**
     * COnstrutor para objetos da classe Parte
     */
    public Parte(int cod, String nome, /*String descricao,*/double valor){
        // inicializa variáveis de instância
        this.cod = cod;
        this.nome = nome;
        //this.descricao = descricao;
        this.valor = valor;
    }

    /**
     * metodos
     **/
    public abstract double calculaValor();
    
    public String toString(){
        return ("codigo: "+ cod + "\nnome: "+ nome + 
                "\nvalor: "+ valor /*+ "\ndescriçao: " + descricao*/);
    }
}
