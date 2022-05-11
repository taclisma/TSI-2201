
/**
 * Escreva uma descrição da classe Imovel aqui.
 * 
 * @author (seu nome) 
 * @version (um número da versão ou uma data)
 */
public class Imovel
{
    // variáveis de instância - substitua o exemplo abaixo pelo seu próprio
    private boolean status;
    private double valorAluguel;
    private String registro;
    private Endereco endereco;
    /**
     * Construtor para objetos da classe Imovel
     */
    public Imovel(boolean status, double valorAluguel, String registro, Endereco endereco){
        this.status = status;
        this.valorAluguel = valorAluguel;
        this.registro = registro;
        this.endereco = endereco;
    }

    /**
     * get e set
     */
    public void setStatus(boolean status){
        this.status = status;
    }
    public boolean getStatus(){
        return status;
    }
    
    public void setValorAluguel(double valorAluguel){
        this.valorAluguel = valorAluguel;
    }
    public double getValorAluguel(){
        return valorAluguel;
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
}
