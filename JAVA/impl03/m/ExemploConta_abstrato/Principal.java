
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
        Cliente cli = new Cliente ("Ana", "128423094");
        ContaCorrente conta1 = new ContaCorrente (cli,100,23,55);
        System.out.println(conta1);
        conta1.sacar(100);
        
        Cliente cli2 = new Cliente ("Pedro", "9846256");
        Poupanca conta2 = new Poupanca (cli2, 200, 55, 198.33, 20);
        System.out.println(conta2);
        conta2.render();
        
    }
}
