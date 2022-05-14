
/**
 * Write a description of class Conta here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class Conta
{
    private Cliente cliente;
    private double saldo;
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
    
    public void sacar(double valor){
        this.saldo -= valor;
    }
   
    public void alterarAgencia(int agencia){
        this.agencia = agencia;
    }

    public String toString(){
        return("Cliente: "+ cliente.getNomeCliente() +
                            "\nCPF: "+cliente.getCpf()+
                            "\nAgencia: "+agencia+
                            "\nNumero da conta: "+numero+
                            "\nSaldo: "+saldo);
                        }  
}
