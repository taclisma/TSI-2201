

class Porta {

    private boolean aberta;

    private double altura;

    private double largura;

   

    public Porta(double altura, double largura){

        this.altura = altura;

        this.largura = largura;

        this.aberta = true;

    }

   

    public void setAberta(boolean estado){

        this.aberta = estado;

    }

    public boolean getAberta(){

        return aberta;

    }

   

    public double getLargura(){

        return largura;

    }

   

    public void setLargura(double largura){

        this.largura = largura;

    }

   

    public void setAltura(double altura){

        this.altura = altura;

    }

   

    public double getAltura(){

        return altura;

    }

   

    public String toString(){

       String saida = "\nLargura = " + largura +

                       "\nAltura = " + altura +

                       "\nAberta? " + aberta;

                       

        return saida;

   }

}
