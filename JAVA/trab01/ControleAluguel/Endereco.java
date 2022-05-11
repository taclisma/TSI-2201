
/**
 * Escreva uma descrição da classe Endereco aqui.
 * 
 * @author (seu nome) 
 * @version (um número da versão ou uma data)
 */
public class Endereco
{
    // variáveis de instância - substitua o exemplo abaixo pelo seu próprio
    private String logradouro;
    private int numero;
    private String complemento;
    private String bairro;
    private String cidade;
    private String cep;
    
    /**
     * Construtor para objetos da classe Endereco
     */
    public Endereco(String logradouro, int numero, String complemento, String bairro, String cidade, String cep){
        this.logradouro = logradouro;
        this.numero = numero;
        this.complemento = complemento;
        this.bairro = bairro;
        this.cidade = cidade;
        this.cep = cep;
    }

    // get e set
    public void setLogradouro(String logradouro){
        this.logradouro = logradouro;
    }
    public String getLogradouro(){
        return logradouro;
    }
    
    public void setNumero(int numero){
        this.numero = numero;
    }
    public int getNumero(){
        return numero;
    }
   
    public void setComplemento(String complemento){
        this.complemento = complemento;
    }
    public String getComplemento(){
        return complemento;
    }
    
    public void setBairro(String bairro){
        this.bairro = bairro;
    }
    public String getBairro(){
        return bairro;
    }
    
    public void setCidade(String cidade){
        this.cidade = cidade;
    }
    public String getCidade(){
        return cidade;
    }
    
    public void setCep(String cep){
        this.cep = cep;
    }
    public String getCep(){
        return cep;
    }
}
