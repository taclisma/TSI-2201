
/**
 * Write a description of class Conta here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class Conta
{
    private String nomeCliente;
    private String cpf;
    private double saldo;
    private int agencia;
    private int numero;

    //construtor
    public Conta(String cliente, String cpf, int agencia, int numero)
    {
        this.nomeCliente = cliente;
        this.cpf = cpf;
        this.agencia = agencia;
        this.numero = numero;

    }
    
    // Exemplo de sobrecarga de construtor - polimorfismo do tipo overloading
    public Conta(String cliente, String cpf, int agencia, int numero, double valor)
    {
        this (cliente, cpf, agencia, numero);
        saldo = saldo + valor;
    }
    
    //getters
    public String getNomeCliente(){
        return nomeCliente;
    }
    
    public String getCpf(){
        return cpf;
    }
    
    public double getSaldo(){
        return saldo;
    }
    
    public int getAgencia(){
        return agencia;
    }
    
    public int getNumero(){
        return numero;
    }
    
    //setters
    public void setNomeCliente(String nome){
        this.nomeCliente = nome;
    }

    public void mostrarDados(){
        System.out.println("Cliente: "+ nomeCliente +
                            "\nCPF: "+cpf+
                            "\nAgencia: "+agencia+
                            "\nNumero da conta: "+numero+
                            "\nSaldo: "+saldo);
    }  
    
    public void deposito(double valor){
        saldo = saldo + valor;
        System.out.println("deposito de " + valor + "\nnovo saldo: " + saldo);
    }
    
    public void saque(double valor){
        System.out.println("tentando fazer um saque de " + valor + " reais");
        if(valor <= saldo){
            saldo = saldo - valor;
        } else {
            System.out.println("saldo insuficiente");
        }
        
        System.out.println("saldo atual: " + saldo);
    }
}
