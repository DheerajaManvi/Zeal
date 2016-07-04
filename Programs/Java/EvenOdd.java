class EvenOdd {

   int a ;

   public void setA( int ai ) { a = ai ; }
   public int getA() { return a ; }

   public void checkA() {

      if( a % 2 == 0 ) {
         System.out.println("Even Number" ) ; 
      } else
        System.out.println("Odd Number") ;
       
   }

   public static void main( String[] args ) {
 
      EvenOdd eo = new EvenOdd() ;
      EvenOdd eo1 = new EvenOdd() ;

      eo.setA(10) ;
      eo.checkA() ; 

      eo1.setA(11) ;
      eo1.checkA() ;
 
   }
}
