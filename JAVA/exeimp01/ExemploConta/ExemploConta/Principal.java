
/**
 * Write a description of class Principal here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class Principal
{
   public static void main (String[] args)
    {
        Conta conta1 = new Conta("Ana", "128423094", 100,23,55);
        conta1.mostrarDados();
        
        conta1.deposito(200.30);
        conta1.saque(100);
        conta1.saque(500);
    }
}
