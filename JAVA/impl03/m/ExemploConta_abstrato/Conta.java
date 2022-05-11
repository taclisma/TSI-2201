
/**
 * exemplo de uso de classes abstratas
 * protected = publico so pra classes filhas/herdeiras
 * @author (your name) 
 * @version (a version number or a date)
 */
public abstract class Conta
{
    private Cliente cliente;
    protected double saldo;
    private int agencia;
    private int numero;

    /**
     * Constructor for objects of class Conta
     */
    public Conta(Cliente cliente, int agencia, int numero)
    {
        this.cliente = cliente;
        this.agencia = agencia;
        this.numero = numero;

    }
    
    // Exemplo de sobrecarga de construtor - polimorfismo do tipo overloading
    public Conta(Cliente cliente, int agencia, int numero, double valor)
    {
        this (cliente, agencia, numero);
        saldo = saldo + valor;
    }
    
     public void depositar(double valor){
        this.saldo += valor;
    }
    
    public abstract void sacar(double valor);
   
    public void alterarAgencia(int agencia){
        this.agencia = agencia;
    }
    
    public double getSaldo(){
        return saldo;
    }
    
    public String toString(){
        return("Cliente: "+ cliente.getNomeCliente() +
                            "\nCPF: "+cliente.getCpf()+
                            "\nAgencia: "+agencia+
                            "\nNumero da conta: "+numero+
                            "\nSaldo: "+saldo);
                        }  
}
