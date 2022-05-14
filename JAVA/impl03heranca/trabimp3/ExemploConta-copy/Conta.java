
/**
 * Write a description of class Conta here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class Conta
{
    private int agencia;
    private int numero;
    private Cliente cliente;
    private double saldo;
    //construtor
    public Conta(Cliente cliente, int agencia, int numero)
    {
        this.cliente = cliente;
        this.agencia = agencia;
        this.numero = numero;

    }
    // construtor com saldo = polimorfismo do tipo overloading
    public Conta(Cliente cliente, int agencia, int numero, double valor){
        this (cliente, agencia, numero);
        this.saldo = saldo + valor;
    }
    //getters
    public int getAgencia(){
        return agencia;
    }
    
    public int getNumero(){
        return numero;
    }
    
    public double getSaldo(){
        return saldo;
    }
    
    public void depositar(double valor){
        this.saldo += valor;
    }
    
    public void sacar(double valor){
        this.saldo -= valor;
    }
    
    public void transferir(Conta transfere, Conta recebe, double valor){
        if(transfere.saldo<valor){
            System.out.println("saldo insuficiente");
        }else{
            recebe.saldo += valor;
            transfere.saldo -= valor;
        }
    }
    public String toString(){
        return ("Cliente: " + cliente.getNomeCliente() +
                "\nCPF: " + cliente.getCpf() +
                "\nAgencia "+agencia+
                "\nNumero Agencia: " + numero +
                "\nSaldo: " + saldo);
    }
}
