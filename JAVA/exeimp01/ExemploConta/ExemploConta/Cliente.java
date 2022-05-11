
/**
 * Escreva uma descrição da classe Cliente aqui.
 * 
 * @author (seu nome) 
 * @version (um número da versão ou uma data)
 */
public class Cliente
{
    // variáveis de instância - substitua o exemplo abaixo pelo seu próprio
    private String nomeCliente;
    private String cpf;

    /**
     * Construtor para objetos da classe Cliente
     */
    public Cliente(String nome, String cpf){
        // inicializa variáveis de instância
        this.nomeCliente = nome;
        this.cpf = cpf;
    }

    //getter
    public String getNomeCliente(){
        return nomeCliente;
    }
    
    public String getCpf(){
        return cpf;
    }
    
    //setter
    public void setNomeCliente(String nome){
        this.nomeCliente = nome;
    }
}
