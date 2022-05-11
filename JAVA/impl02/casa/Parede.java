class Parede{

    private double largura;

    private double altura;

    private String material;

    private Acabamento acabamento;

    private Janela janela;

    private Porta porta;

   

    public Parede(double largura, double altura, String material){

        this.largura = largura;

        this.altura = altura;

        this.material = material;

    }
   

    public void setAcabamento (Acabamento acabamento){ //Agregação

        this.acabamento = acabamento;

    }

   

    public Acabamento getAcabamento(){

        return acabamento;

    }

   

    public void setMaterial (String material){ //Agregação

        this.material = material;

    }

   

    public String getMaterial(){

        return material;

    }

   

    public void setJanela (Janela janela ){

        this.janela = janela;

    }

    

    public Janela getJanela(){

        return janela;

    }

   

    public void setPorta (Porta porta ){

        this.porta = porta;

    }

   

    public Porta getPorta(){

        return porta;

    }

   

    public void setAltura(double altura){

        this.altura = altura;

    }

   

    public double getAltura(){

        return altura;

    }

   

    public void setLargura(double largura){

        this.largura = largura;

    }

   

    public double getLargura(){

        return largura;

    }

   

   public String toString(){

       String saida = "\nLargura = " + largura +

                       "\nAltura = " + altura +

                       "\nMaterial = " + material +

                       "\nPortas? " + porta +

                       "\nJanelas? " + janela +

                       "\nAcabamento? " + acabamento;

                      

        return saida;

   }

}