/*

Adding two numbers.

*/

class Add {

   int a , b , c, d;

   public int getA() { return a ; }
   public int getB() { return b ; }
   public int getC() { return c ; }
   public int getD() { return d ; }

   public void setA( int ai ) { a = ai ; }
   public void setB( int bi ) { b = bi ; }
   public void setC( int ci ) { c = ci ; }

   public void addAB() {

      d = a + b ;

   }

   public void printABCD() {

      System.out.println ("------------") ;
      System.out.println( "A : " + a ) ; 
      System.out.println( "B : " + b ) ;
      System.out.println( "C : " + c ) ;
      System.out.println( "D : " + d ) ; 

   }

   public static void main( String[]  args ) {

      Add ad = new Add() ;

      ad.printABCD() ;

      ad.setA(12) ;
      ad.setB(10) ;
      ad.setC( ad.getA()+ ad.getB() ) ;

      ad.printABCD() ;

      ad.setA(20) ;
      ad.setB(34) ;
   
      ad.addAB() ;
      ad.printABCD() ;

      System.out.println( "Sum : " + ad.getC() ) ;
      System.out.println( "Sum : " + ad.getD() ) ;
   }
}
