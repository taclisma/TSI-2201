import java.time.LocalDate;

/**
 * Escreva uma descrição da classe Aluguel aqui.
 * 
 * @author (seu nome) 
 * @version (um número da versão ou uma data)
 */
public class Aluguel
{
    // variáveis de instância - substitua o exemplo abaixo pelo seu próprio
    private double valorAcertado;
    private int vencimento;
    private LocalDate validadeContrato;
    private int numeroContrato;
    private double[] pagamentosMensais = new double[12];
    
    /**
     * Construtor
     */
    public Aluguel(double valorAcertado, int vencimento, LocalDate validadeContrato, int numeroContrato, double[] pagamentosMensais){
        this.valorAcertado = valorAcertado;
        this.vencimento = vencimento;
        this.validadeContrato = validadeContrato;
        this.numeroContrato = numeroContrato;
        this.pagamentosMensais = pagamentosMensais;
    }

    /**
     * get e set
     */
    public void setValorAcertado(double valorAcertado){
        this.valorAcertado = valorAcertado;
    }
    public double getValorAcertado(){
        return valorAcertado;
    }
    
    public void setVencimento(int vencimento){
        this.vencimento = vencimento;
    }
    public int getVencimento(){
        return vencimento;
    }
    
    public void setValidadeContrato(LocalDate validadeContrato){
        this.validadeContrato = validadeContrato;
    }
    public LocalDate getValidadeContrato(){
        return validadeContrato;
    }
    
    public void setNumeroContrato(int numeroContrato){
        this.numeroContrato = numeroContrato;
    }
    public int getNumeroContrato(){
        return numeroContrato;
    }
    
    public void setPagamentosMensais(double[] pagamentosMensais){
        this.pagamentosMensais = pagamentosMensais;
    }
    public double[] getPagamentosMensais(){
        return pagamentosMensais;
    }
}
