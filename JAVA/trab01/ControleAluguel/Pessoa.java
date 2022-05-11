
/**
 * Escreva uma descrição da classe Pessoa aqui.
 * 
 * @author (seu nome) 
 * @version (um número da versão ou uma data)
 */
public class Pessoa
{
    // variáveis de instância - substitua o exemplo abaixo pelo seu próprio
    private String nome;
    private String registro;
    private String telefone;
    private Endereco endereco;

    /**
     * Construtor para objetos da classe Pessoa
     */
    public Pessoa(String nome, String registro, String telefone, Endereco endereco){
        // inicializa variáveis de instância
        this.nome = nome;
        this.registro =registro;
        this.telefone = telefone;
        this.endereco = endereco;
    }

    public void setNome(String nome){
        this.nome = nome;
    }
    
    public String getNome(){
        return nome;
    }
    
    public void setRegistro(String registro){
        this.registro = registro;
    }
    public String getRegistro(){
        return registro;
    }
    
    public void setEndereco(Endereco endereco){
        this.endereco = endereco;
    }
    public Endereco getEndereco(){
        return endereco;
    }
    
    public void setTelefone(String telefone){
        this.telefone = telefone;
    }
    public String getTelefone(){
        return telefone;
    }
}
