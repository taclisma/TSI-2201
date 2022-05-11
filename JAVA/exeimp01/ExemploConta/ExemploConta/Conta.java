
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
    //construtor
    public Conta(Cliente cliente, int agencia, int numero)
    {
        this.cliente = cliente;
        this.agencia = agencia;
        this.numero = numero;

    }
    
    //getters
    public int getAgencia(){
        return agencia;
    }
    
    public int getNumero(){
        return numero;
    }
    

}
