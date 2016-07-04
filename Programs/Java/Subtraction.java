class Subtraction {

   int a , b , c ;

   public int getA() { return a ; }
   public int getB() { return b ; }
   public int getC() { return c ; }

   public void setA( int ai ) { a = ai ; }
   public void setB( int bi ) { b = bi ; }
   public void setC( int ci ) { c = ci ; }

   public static void main( String[]  args ) {

      Subtraction sub = new Subtraction() ;

      sub.setA(12) ;
      sub.setB(10) ;
      sub.setC( sub.getA() - sub.getB() ) ;

      System.out.println( "Difference : " + sub.getC() ) ;
   }
}

