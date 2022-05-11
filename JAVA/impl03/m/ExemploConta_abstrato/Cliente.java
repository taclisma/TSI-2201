
/**
 * Escreva a descrição da classe Cliente aqui.
 * 
 * @author (seu nome) 
 * @version (número de versão ou data)
 */
public class Cliente
{
    private String nomeCliente;
    private String cpf;

    /**
     * COnstrutor para objetos da classe Cliente
     */
    public Cliente(String nome, String cpf)
    {
        this.nomeCliente = nome;
        this.cpf = cpf;
    }

    public String getNomeCliente(){
        return nomeCliente;
    }
    
    public String getCpf(){
        return cpf;
    }
    
    public void setNomeCliente(String nome){
        this.nomeCliente = nome;
    }
    
    public String toString(){
        return ("Nome do cliente = " + nomeCliente +
                 "\nCPF = " + cpf);
        }
    }
