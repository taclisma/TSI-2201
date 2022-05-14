

package prodPlan;


/**
 * Escreva a descrição da classe Principal aqui.
 * 
 * @author (seu nome) 
 * @version (número de versão ou data)
 */
public class Principal{
    private static int contaPartes; // variaveis usadas em metodos static tbm tem q ser static
    
    public static Parte[] criarPartes(){
        Parte partes[] = new Parte[5];
        partes[0] = new Diesel (23,"bmw",10, 130.5, 110, 500, 10);
        partes[1] = new Parafuso (20, "chato",30,2,0.3);
        partes[2] = new Parafuso (30, "fenda",10,4,2);
        partes[3] = new Diesel (33,"ford",20, 120.1, 220, 350, 20);
        partes[4] = new Parafuso (30, "philips",10,4,1.2);
        
        contaPartes++;
        
        return partes;
    }
    
    public static void main(String[] args){
        Parte partes[] = criarPartes();
        for(int i = 0; i < partes.length; i++){
            if(partes[i] instanceof Diesel){
                System.out.println("parte tipo motor diesel");
            } else if (partes[i] instanceof Parafuso){
                System.out.println("parte tipo parafuso");            
            }
            System.out.println(partes[i] + "\n");
        }
    }
}
