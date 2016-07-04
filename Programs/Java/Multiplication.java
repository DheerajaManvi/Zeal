/*

*/

class Multiplication {

   int a,b,c ;  

   public void setA(int ai){ a = ai ; }
   public void setB(int bi){ b = bi ; } 
   public void setC(int ci){ c = ci ; }

   public int getA() { return a ; }
   public int getB() { return b ; }
   public int getC() { return c ; } 

   public static void main( String[] args ) {

      Multiplication mul = new Multiplication() ;

      mul.setA(12) ;
      mul.setB(12) ;
      mul.setC( mul.getA() * mul.getB() ) ;

      System.out.println("Product : " + mul.getC() ) ;
   }

}
