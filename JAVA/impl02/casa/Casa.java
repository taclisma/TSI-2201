
class Casa {

    private Parede norte;

    private Parede sul;

    private Parede leste;

    private Parede oeste;

    private Telhado telhado;

   

    public Casa (Parede norte, Parede sul, Parede leste, Parede oeste, Telhado telhado){ //Composição

        this.norte = norte;

        this.sul = sul;

        this.leste = leste ;

        this.oeste = oeste;

        this.telhado = telhado;

    }

   

    public String toString(){

        String saida = "\nParede norte = " + norte +

                       "\nParede sul = " + sul +

                       "\nParede leste = " + leste +

                       "\nParede oeste = " + oeste +
                       
                       "\nTelhado = " + telhado;


        return saida;

    }

   

}
