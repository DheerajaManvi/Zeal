class Remainder{

   int a , b , c;

   public int getA() { return a ; }
   public int getB() { return b ; }
   public int getC() { return c ; }

   public void setA( int ai ) { a = ai ; }
   public void setB( int bi ) { b = bi ; }
   public void setC( int ci ) { c = ci ; }

   public static void main( String[]  args ) {

      Remainder rem = new Remainder() ;

      rem.setA(12) ;
      rem.setB(2) ;
      rem.setC( rem.getA() % rem.getB() ) ;

      System.out.println( "Rem : " + rem.getC() ) ;
   }
}

