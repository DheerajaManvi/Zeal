/*


*/


class Incrementation {

   int a ;

   public int getA() { return a ; } 
   public void setA( int ai ) { a = ai ; }

   public void incrA() {

      a++ ;
   }

   public void printA() {

      System.out.println("----------------") ;
      System.out.println(" A : " + a ) ; 
   }

   public static void main( String[]  args ) {

      Incrementation inc = new Incrementation() ;

      inc.setA(12) ;
      inc.printA() ;
      inc.incrA() ;
      System.out.println( "Incremented number : " + inc.getA() ) ;

      inc.setA(10) ;
      inc.printA() ; 
      inc.incrA() ;
      System.out.println( "Incremented number : " + inc.getA() ) ;

   }
}


