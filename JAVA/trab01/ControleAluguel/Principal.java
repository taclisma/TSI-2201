import java.time.LocalDate;

/**
 * Escreva uma descrição da classe Principal aqui.
 * 
 * @author (seu nome) 
 * @version (um número da versão ou uma data)
 */
public class Principal{
    public static void main(String[] args){
        Endereco apartamento1 = new Endereco("Rua Guararapes", 967, "Protasio", "Petropolis", "Porto Alegre", "80020-260");
        Corretor corretor1 = new Corretor("Julia", "100-200-300","53-99100-0000", apartamento1, "0800XX", 0.30);
        
        Endereco apartamento2 = new Endereco("Rua Riachuelo", 1265, "quarto 8", "centro", "Porto Alegre", "90010-271");
        Imovel imovel1 = new Imovel(false, 700.90, "XXX", apartamento2);
        
        
        Endereco casa1 = new Endereco("Av Alberto Pasqualine", 41, "esquina", "centro", "Pelotas", "96360-001");
        Cliente cliente1 = new Cliente("Maria", "300-200-100", "53-8100-0002", casa1, 55.5);
        
        LocalDate data = LocalDate.now();
        Anuncio anuncio1 = new Anuncio(imovel1, 800, data);
        
        anuncio1.setCorretor(corretor1);
        
        anuncio1.setLocatario(cliente1);
        imovel1.setStatus(true);
        
        LocalDate data2 = LocalDate.ofYearDay(2023,160);
        double aluguel[] = {0};
        Aluguel aluguel1 = new Aluguel(750.20, 8, data2, 1114, aluguel);
    }
}
