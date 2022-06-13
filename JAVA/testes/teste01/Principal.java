class Boo {

  private int x;
  public Boo(int x){ this.x = x; }
 }
 
 class Foo { 
  private Boo b;
  public Foo(Boo b){ this.b = b; }
  public boolean equals (Object obj){
     Foo f = (Foo) obj;
     if (this.b == f.b) return true;
     return false;
  }
 } 

public class Principal{ 

   public static void main (String[]args){
     Boo b1 = new Boo(3);
     Boo b2 = new Boo(3);
     Foo f1 = new Foo (b1);
     Foo f2 = new Foo (b2);
     System.out.println(f1.equals(f2));
   }
 }