
class ObjectReturns {

   int a ;

   ObjectReturns( int i) {

      a = i ;
   }

   ObjectReturns meth() {

      ObjectReturns temp = new ObjectReturns( a + 10) ;
      return temp ;
   }

   public static void main( String[] args ) {

      ObjectReturns or1 = new ObjectReturns(5) ;
      ObjectReturns or2  ;

      or2 = or1.meth() ;
      System.out.println( or1.a ) ;
      System.out.println( or2.a ) ;

      or2 = or2.meth() ;
      System.out.println( or1.a ) ;
      System.out.println( or2.a ) ;
   }
}
