

class ConsTest {

   static int i1 ; 

   ConsTest(int i) {
      System.out.println("Inside Constructor") ;
      i1 = i ;
   }

   
   int test() { 

      return i1 * i1 ;
   } 

   public static void main ( String[] args ) {
      ConsTest ct = new ConsTest(100) ;
      int t = ct.test() ;
      System.out.println( t ) ;
   }
}
