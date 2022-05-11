class Telhado {

    private String material;

    private double area;

   

    public Telhado(String material, double area){

        this.material = material;

        this.area = area;

    }

   

    public void setMaterial (String material) {

        this.material = material;

    }

   

    public void setArea (double area) {

        this.area = area;

    }

   

    public String getMaterial () {

        return material;

    }

   

    public double getArea () {

        return area;

    }

   

    public String toString(){

        return ("\nMaterial = " + material +

                "\nÁrea = "+ area);

    }

   

}
