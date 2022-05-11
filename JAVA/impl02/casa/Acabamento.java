
class Acabamento{

    private String tipo;

    private String cor;

   

    public Acabamento(String tipo, String cor){

        this.tipo = tipo;

        this.cor = cor;

    }

   

    public String getCor(){

        return cor;

    }

   

    public void setCor(String cor){

        this.cor = cor;

    }

   

    public String getTipo(){

        return tipo;

    }

   

    public void setTipo(String tipo){

        this.tipo = tipo;

    }

   

    public String toString(){

       String saida = "\nTipo = " + tipo +

                       "\nCor = " + cor;

        return saida;

   }

   

}
